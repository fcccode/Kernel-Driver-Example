/*
    This is a C++ run-time library for Windows kernel-mode drivers.
    Copyright (C) 2004 Bo Branten.
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
*/

#if !defined(CXX_H)
#define CXX_H

// ExceptionCode in the exception record for C++ exceptions
#define CXX_EXCEPTION      0xe06d7363
// ExceptionInformation[0] in the exception record for C++ exceptions
#define CXX_FRAME_MAGIC    0x19930520

#endif // !defined(CXX_H)