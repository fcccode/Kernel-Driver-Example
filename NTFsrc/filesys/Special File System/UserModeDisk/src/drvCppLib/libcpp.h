/*
    This is a C++ run-time library for Windows kernel-mode drivers.
    Copyright (C) 2003 Bo Brant�n.
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
*/

#if !defined(LIBCPP_H)
#define LIBCPP_H

#if defined(__cplusplus)
extern "C" {
#endif

//
// Call libcpp_init in the beginning of DriverEntry and libcpp_exit when
// unloading the driver or if DriverEntry fails.
//
void __cdecl libcpp_init();
void __cdecl libcpp_exit();

#if defined(__cplusplus)
}
#endif

#endif // !defined(LIBCPP_H)
