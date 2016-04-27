/*

   Copyright (C) 1998 Danilo Almeida.  All rights reserved.

   queue object header

   This file is part of FIFS (Framework for Implementing File Systems). 

   This software is distributed with NO WARRANTY OF ANY KIND.  No
   author or distributor accepts any responsibility for the
   consequences of using it, or for whether it serves any particular
   purpose or works at all, unless he or she says so in writing.
   Refer to the included modified Alladin Free Public License (the
   "License") for full details.

   Every copy of this software must include a copy of the License, in
   a plain ASCII text file named COPYING.  The License grants you the
   right to copy, modify and redistribute this software, but only
   under certain conditions described in the License.  Among other
   things, the License requires that the copyright notice and this
   notice be preserved on all copies.

*/

#ifndef __QUEUE_HXX__
#define __QUEUE_HXX__

struct Queue_Rep;

class Queue {
private:
    Queue_Rep* rep;
    void* Remove(void* handle);
public:
    Queue();
    ~Queue();
    void Add(void* data); // does not do anything if no data
    void* Get();
    void* Get(DWORD milliseconds);
    void Unblock();
    void Block();
};

#endif
