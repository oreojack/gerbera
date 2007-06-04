/*MT*
    
    MediaTomb - http://www.mediatomb.cc/
    
    mysql_create_sql.h - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.cc>,
                       Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>
    
    Copyright (C) 2006-2007 Gena Batyan <bgeradz@mediatomb.cc>,
                            Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>,
                            Leonhard Wimmer <leo@mediatomb.cc>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
    
    $Id$
*/

/// \file mysql_create_sql.h

#ifdef AUTO_CREATE_DATABASE
#ifdef HAVE_MYSQL

#ifndef __MYSQL_CREATE_SQL_H__
#define __MYSQL_CREATE_SQL_H__

#define MS_CREATE_SQL_INFLATED_SIZE 3717
#define MS_CREATE_SQL_DEFLATED_SIZE 1015

/* begin binary data: */
const unsigned char mysql_create_sql[] = /* 1015 */
{0x78,0x9C,0xBD,0x57,0x51,0x8F,0x9B,0x38,0x10,0x7E,0xDF,0x5F,0xE1,0x7B,0x82
,0x54,0xF4,0x16,0xF6,0xB6,0x52,0x4F,0xD5,0x4A,0xCB,0x11,0xB7,0x8D,0x4A,0x60
,0x0B,0xA4,0xA7,0xDE,0x8B,0x71,0xC0,0xD9,0x70,0x4B,0x20,0x02,0x13,0x35,0xFF
,0xFE,0xC6,0x10,0x02,0x04,0x27,0xCD,0x4A,0xA7,0xBE,0x24,0x30,0x7C,0xF3,0x79
,0x3C,0x9E,0x19,0xCF,0xDC,0xBE,0xF9,0xED,0x5E,0x37,0x74,0x03,0xF9,0x38,0x40
,0x8F,0xAE,0x3D,0x25,0xD6,0x67,0xD3,0x33,0xAD,0x00,0x7B,0x04,0x44,0xC4,0xB2
,0x67,0xD8,0x09,0x1E,0x1E,0x1F,0x65,0x62,0xF4,0xE6,0xF6,0xC3,0xCD,0xED,0x4F
,0x18,0x3C,0xEC,0x2F,0xEC,0xC0,0x1F,0x51,0x1C,0xE4,0xE7,0x38,0x5C,0xDB,0x36
,0x83,0x99,0xEB,0xC0,0x93,0xE3,0x60,0x4B,0x3C,0x0A,0x0A,0x89,0x78,0xCC,0xE0
,0x98,0x73,0xEC,0xA3,0x8A,0xAF,0xDE,0x77,0xDF,0x74,0xE3,0xBE,0x63,0x5F,0x38
,0xB3,0xAF,0x0B,0x0C,0x86,0x62,0xEB,0x8B,0xB0,0x6C,0xF0,0xAE,0xA1,0xE1,0x67
,0xFD,0x0C,0xC9,0x47,0xD7,0xC3,0xB3,0x4F,0x0E,0xF9,0x82,0xBF,0x77,0x4C,0x63
,0xA1,0x86,0x24,0x40,0xFD,0xCC,0xB6,0xFD,0xAF,0x36,0x99,0xBB,0x53,0x0C,0x4C
,0xED,0xA3,0x86,0x8E,0x42,0xC5,0x71,0x89,0xB9,0x08,0x5C,0xF2,0xCD,0xB4,0xC1
,0x3E,0xF0,0xC2,0x3F,0xD8,0x73,0x95,0x1E,0x97,0x71,0xC2,0xE5,0xB8,0x01,0xF6
,0x0F,0x64,0xF5,0x73,0xC3,0xD6,0x88,0x1B,0x23,0x2C,0x0F,0x9B,0x01,0x46,0x81
,0xF9,0x97,0x8D,0x51,0xB8,0xE1,0x24,0x8A,0x4B,0x92,0x2F,0xFF,0x65,0x11,0x0F
,0x91,0x7A,0x83,0x50,0x98,0xC4,0x21,0x4A,0x32,0xAE,0x1A,0xC6,0x04,0x81,0x26
,0x72,0x16,0xB6,0x8D,0x68,0xC5,0x73,0x92,0x64,0x51,0xC1,0x36,0x2C,0xE3,0x9A
,0xC0,0x15,0x6C,0x45,0xFA,0xD8,0x98,0xAD,0x68,0x95,0xF2,0x1A,0x5F,0x03,0xB6
,0xB4,0x00,0x2C,0x91,0xF2,0xB5,0x60,0x45,0x57,0x6A,0x6C,0x63,0x01,0xE1,0xFB
,0x2D,0x0B,0x11,0x4F,0xB2,0xBD,0xD0,0xB8,0x9F,0xA0,0x2A,0x2B,0x93,0xE7,0x8C
,0xC5,0x47,0xCD,0x1A,0x5D,0x6D,0xB3,0x2D,0x89,0x52,0x5A,0x96,0x21,0xDA,0xD1
,0x22,0x5A,0xD3,0x42,0x7D,0xAF,0x4B,0x4C,0x88,0x23,0xC2,0x13,0x9E,0xB2,0x0E
,0x76,0xF7,0xEE,0x9D,0x04,0x97,0xE6,0x11,0xE5,0x49,0x9E,0x85,0x68,0x99,0xE6
,0xCB,0x81,0x88,0xAC,0x69,0xB9,0xEE,0x76,0x70,0x34,0x68,0xC4,0xB1,0x61,0x9C
,0xC6,0x94,0xD3,0x1E,0x07,0xAD,0x7E,0x9C,0x48,0x0A,0x56,0xE6,0x55,0x11,0xB1
,0xB2,0x27,0xAB,0xB6,0x00,0x62,0xD7,0xF9,0x69,0x93,0x6C,0xD8,0xC1,0x4B,0xED
,0x8E,0xEE,0x65,0x1B,0x5F,0xA5,0xF4,0xB9,0x94,0x58,0x3D,0x26,0x36,0x1A,0x62
,0x5E,0xD0,0xE8,0x85,0x64,0xD5,0x66,0xC9,0x8A,0xF3,0x67,0xFA,0xE4,0xCD,0xE6
,0xA6,0xF7,0x1D,0x41,0x6C,0x23,0xA4,0x8A,0x50,0x99,0x08,0xB1,0x78,0x0D,0xBB
,0x40,0x22,0x6D,0x68,0xA8,0x6D,0x90,0x48,0x51,0xBD,0xF8,0x50,0x7B,0xC1,0xA2
,0x0D,0x82,0x41,0xEB,0xCE,0x50,0x4A,0x32,0x08,0x1C,0x75,0xA0,0xDA,0xE1,0x8F
,0x67,0xD9,0xAC,0x22,0x80,0xC3,0xE3,0xD5,0x7A,0xEB,0x4B,0x97,0x19,0xBA,0x47
,0x1D,0xBA,0xAB,0xD6,0x80,0x0A,0xE5,0x07,0x9E,0x39,0x83,0x3A,0x39,0x4C,0x2B
,0x92,0x2C,0x57,0x2F,0xC4,0x08,0xDB,0xC2,0x50,0x73,0x77,0x9E,0x41,0x1E,0xFE
,0x88,0x3D,0xEC,0x58,0x50,0xC3,0x46,0xF9,0x58,0x7B,0x18,0x41,0xD1,0x9B,0x62
,0x1B,0x43,0xDA,0x5A,0xA6,0x6F,0x99,0x53,0x2C,0x24,0x8B,0xA7,0xA9,0xD9,0x49
,0xAE,0xB0,0xE0,0xEE,0xD4,0x82,0xDE,0x96,0xFF,0x1F,0x23,0x6E,0x26,0x08,0x3B
,0x9F,0x66,0x0E,0x7E,0x98,0xEF,0x67,0xBE,0x39,0x47,0xE2,0x0A,0x80,0x02,0xF5
,0x20,0x6A,0xF3,0x87,0x9B,0x99,0xE3,0x63,0x2F,0x40,0x60,0x9F,0x3B,0x5A,0xA4
,0x2E,0x71,0x3E,0x52,0xDF,0x1A,0x5A,0x1D,0x6B,0xF0,0xAF,0x37,0x4F,0x97,0x7F
,0x0E,0xA0,0x3F,0xEB,0xBF,0xC9,0x75,0x6B,0xE8,0xC7,0x25,0x0C,0x4D,0x69,0x3E
,0xFE,0x1E,0xE5,0x19,0xA7,0x49,0xC6,0x0A,0x45,0x53,0xBC,0x3C,0xE7,0xCA,0xF5
,0x4B,0x1E,0x7C,0x70,0xBA,0x9A,0x28,0xCC,0xC2,0x73,0x0F,0x90,0xBA,0xE8,0xEF
,0xCF,0xE0,0xDD,0xC3,0xAB,0xA1,0x5C,0x67,0xA6,0xD1,0x2E,0x27,0xB7,0xF2,0xC9
,0x42,0xD3,0xA4,0x00,0x69,0x5E,0xEC,0x5F,0x61,0xAD,0xB4,0xFE,0xD3,0x88,0x27
,0x3B,0xA8,0x40,0x9C,0x6D,0x2E,0x5C,0x02,0x4D,0x49,0x8B,0x9A,0x3A,0x39,0xA8
,0xA7,0x03,0x44,0xC9,0xA1,0x9A,0x5D,0x00,0x9C,0xA9,0x21,0x92,0xE8,0xED,0x99
,0x75,0x26,0x89,0x7E,0x59,0xEC,0x8E,0xDC,0x06,0xCE,0x61,0x45,0x46,0x53,0x52
,0x32,0x0E,0xF7,0xD5,0xF3,0xC1,0x6F,0x2F,0x6C,0x3F,0xAC,0xCC,0x03,0xD7,0xEC
,0x68,0x5A,0xBD,0xC2,0x35,0x82,0x6C,0xF2,0xCA,0xA4,0x1A,0xDB,0xD5,0xC6,0x93
,0x12,0x2F,0xC9,0x8E,0x15,0x25,0x1C,0x1F,0x84,0xCF,0x1F,0x8A,0x2C,0x18,0xC4
,0x35,0x5F,0x46,0x34,0x7B,0x65,0x2B,0x00,0xEE,0xBE,0xDC,0x0A,0x08,0x4E,0x92
,0xB2,0x1D,0x4B,0x43,0xC4,0xA0,0x6A,0xAA,0xCA,0x92,0x96,0x49,0x04,0x76,0xAC
,0xAA,0x34,0x55,0x4E,0x23,0x48,0xA0,0x37,0x79,0xCC,0x5A,0x30,0x87,0x5B,0x2F
,0x06,0x70,0x92,0xE5,0x3C,0x59,0xED,0x4F,0xF1,0x90,0x05,0x15,0xEC,0x6B,0x77
,0x4D,0xEB,0xB0,0x4E,0xE2,0x98,0x65,0x57,0x00,0x6B,0x47,0xC2,0x81,0x5D,0x73
,0xF5,0x43,0x27,0xC2,0x85,0xC1,0xC9,0x2A,0x61,0xE0,0x86,0x65,0xF2,0x2C,0x74
,0xEE,0xF4,0x4B,0x3A,0x5B,0x71,0x14,0x25,0xAF,0xAF,0xA3,0x4B,0xC6,0x8C,0x5A
,0x00,0x49,0xAF,0xB2,0xA5,0x7C,0x0D,0x07,0xD0,0x6F,0x2A,0x78,0x5E,0x45,0x6B
,0x61,0xCC,0x75,0xDC,0x4D,0x17,0xD0,0x8F,0xBF,0xB0,0xB9,0x97,0xDB,0xF4,0x6C
,0x9A,0xE4,0xE6,0x4B,0x2F,0x50,0x48,0x7B,0xF4,0x6A,0x1B,0x04,0xB2,0x64,0x3E
,0xA2,0xE5,0x59,0xDC,0x6A,0xFE,0x92,0x4C,0x1E,0x74,0xE1,0x5D,0x03,0xDE,0x6F
,0xC7,0xC7,0x13,0x80,0xAC,0xF9,0x97,0x0F,0x05,0x63,0xDD,0x93,0xE9,0x63,0x34
,0x90,0x8C,0x67,0x03,0xF9,0x4C,0x76,0x6E,0x5A,0xFB,0x99,0xFE,0x71,0x22,0x3B
,0x3B,0xAC,0x49,0x18,0xA4,0xF3,0xD8,0xB9,0x49,0x6D,0x3C,0x91,0xF4,0x86,0x91
,0xC1,0x6C,0x52,0x23,0xFF,0x03,0xCE,0x0A,0x5D,0xC1};
/* end binary data. size = 1015 bytes */

#endif // __MYSQL_CREATE_SQL_H__

#endif // HAVE_MYSQL
#endif // AUTO_CREATE_DATABASE
