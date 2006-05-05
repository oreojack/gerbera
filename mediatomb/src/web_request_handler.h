/*  web_request_handler.h - this file is part of MediaTomb.
                                                                                
    Copyright (C) 2005 Gena Batyan <bgeradz@deadlock.dhs.org>,
                       Sergey Bostandzhyan <jin@deadlock.dhs.org>
                                                                                
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
                                                                                
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
                                                                                
    You should have received a copy of the GNU General Public License
    along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/// \file web_request_handler.h
/// \brief Definition of the WebRequestHandler class.
#ifndef __WEB_REQUEST_HANDLER_H__
#define __WEB_REQUEST_HANDLER_H__

#include "autoconfig.h"
#include "common.h"
#include "mxml/mxml.h"
#include "request_handler.h"
#include "dictionary.h"
#include "scripting/web_script.h"


class SessionException : public zmm::Exception
{
public:
    SessionException(zmm::String message) : zmm::Exception(message) {}
};

/// \brief This class is responsible for processing requests that come to the user interface.
class WebRequestHandler : public RequestHandler
{
protected:
    /// \brief Decoded URL parameters are stored as a dictionary.
    zmm::Ref<Dictionary> params;

    /// \brief The oritinal filename from url if anyone needs it.
    zmm::String filename;

    /// \brief The name of the page to look for a jssp script.
    zmm::String pagename;

    bool plainXML;

    /// \brief We can also always see what mode was requested.
    enum UpnpOpenFileMode mode;

    /// \brief This is filled during request processing and holds the output.
    ///
    /// The XML or HTML that is the result of a request is put in this buffer,
    /// this is what is being served to the web browser.
    zmm::Ref<zmm::StringBuffer> out;

    /// \brief This is the root xml element to be populated by process() method.
    zmm::Ref<mxml::Element> root;
    
    /// \brief This is the jssp script to render HTML.
//    zmm::Ref<WebScript> script;
    
    /// \brief Little support function to access stuff from the dictionary in
    /// in an easier fashion.
    /// \param Name of the parameter we are looking for.
    /// \return Value of the parameter with the given name or nil if not found.
    zmm::String param(zmm::String name);
    
    
    /// \brief Checks if the incoming request is valid.
    ///
    /// Each request going to the ui must at least have a valid session id, 
    /// and a driver parameter. Also, there can only by a primary or a
    /// a decondary driver.
    void check_request();

    /// \brief Helper function to create a generic XML document header.
    /// \param xsl_link If not nil, also adds header information that is required for the XSL processor.
    /// \return The header as a string... because our parser does not yet understand <? ?> stuff :)
    zmm::String renderXMLHeader(zmm::String xsl_link = nil);
   
    /// \brief Call another request handler.
    /// \param req_type Type of the request (see pages.cc)
    /// \param params Dictionary containg the decoded parameters from the URL.
    /// \return String, containing the html/xml output from the request.
    zmm::String subrequest(zmm::String req_type, zmm::Ref<Dictionary> params);

    /// \brief Prepares the output buffer and calls the process function.
    /// \return IOHandler
    /// \todo Genych, chto tut proishodit, ya tolkom che to ne wrubaus?? 
    zmm::Ref<IOHandler> open(zmm::Ref<Dictionary>, IN enum UpnpOpenFileMode mode);
public:
    /// \brief Constructor, currently empty.
    WebRequestHandler();
    /// \brief Returns information about the requested content.
    /// \param filename Requested URL
    /// \param info File_Info structure, quite similar to statbuf.
    ///
    /// We need to override this, because for serving UI pages (mostly generated from
    /// dynamic XML) we do not know the size of the data. This is of course different
    /// for the FileRequestHandler, where we can check the file and return all
    /// information about it.
    virtual void get_info(IN const char *filename, OUT struct File_Info *info);

    /// \brief Decodes the parameters from the filename (URL) and calls the internal open() function.
    /// \param filename The requested URL
    /// \param mode either UPNP_READ or UPNP_WRITE
    /// \return the appropriate IOHandler for the request.
    virtual zmm::Ref<IOHandler> open(IN const char *filename, IN enum UpnpOpenFileMode mode);

    /// \brief This method must be overriden by the subclasses that actually process the given request.
    virtual void process();

    /// \brief builds full path to a script for the given relative filename
    static zmm::String buildScriptPath(zmm::String filename);
            
};


#endif // __WEB_REQUEST_HANDLER_H__
