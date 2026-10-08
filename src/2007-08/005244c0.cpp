// from server: 100% by colin
// roc 2007-08 005244c0  unit: G3D::Line  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005244c0
//
// 005244c0  8b442408             mov eax, dword ptr [esp + 8]
// 005244c4  50                   push eax
// 005244c5  ff15d0e67700         call dword ptr [0x77e6d0]
// 005244cb  83c404               add esp, 4
// 005244ce  c3                   ret 

extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
