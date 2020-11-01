/*
crclib.c - generate crc stuff
Copyright (C) 2007 Uncle Mike
Copyright (C) 2019 a1batross

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/
#pragma once
#ifndef CRCLIB_H
#define CRCLIB_H

typedef unsigned int    dword;
typedef unsigned char byte;

void CRC32_Init( dword *pulCRC );
void CRC32_ProcessBuffer( dword *pulCRC, const void *pBuffer, int nBuffer );
//dword CRC32_Final( dword pulCRC );

#endif // CRCLIB_H
