// from server: 100% by colin
// roc 2007-08 004b90c0  unit: RakPeer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b90c0
//
// 004b90c0  56                   push esi
// 004b90c1  8b742408             mov esi, dword ptr [esp + 8]
// 004b90c5  8d461c               lea eax, [esi + 0x1c]
// 004b90c8  50                   push eax
// 004b90c9  ff15d0e67700         call dword ptr [0x77e6d0]
// 004b90cf  83c404               add esp, 4
// 004b90d2  8d481c               lea ecx, [eax + 0x1c]
// 004b90d5  89700c               mov dword ptr [eax + 0xc], esi
// 004b90d8  894814               mov dword ptr [eax + 0x14], ecx
// 004b90db  c6401800             mov byte ptr [eax + 0x18], 0
// 004b90df  5e                   pop esi
// 004b90e0  c20400               ret 4

extern "C" void* (__cdecl* malloc_ptr)(unsigned int);

void* __stdcall sub_4b90c0(unsigned int size)
{
    char* p = (char*)malloc_ptr(size + 0x1c);
    *(unsigned int*)(p + 0xc) = size;
    *(char**)(p + 0x14) = p + 0x1c;
    *(char*)(p + 0x18) = 0;
    return p;
}
