// roc 2008-06 004bbe40  unit: ProfiledRakPeer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbe40
//
// 004bbe40  56                   push esi
// 004bbe41  8b742408             mov esi, dword ptr [esp + 8]
// 004bbe45  8d461c               lea eax, [esi + 0x1c]
// 004bbe48  50                   push eax
// 004bbe49  ff15b0288000         call dword ptr [0x8028b0]
// 004bbe4f  83c404               add esp, 4
// 004bbe52  8d481c               lea ecx, [eax + 0x1c]
// 004bbe55  89700c               mov dword ptr [eax + 0xc], esi
// 004bbe58  894814               mov dword ptr [eax + 0x14], ecx
// 004bbe5b  c6401800             mov byte ptr [eax + 0x18], 0
// 004bbe5f  5e                   pop esi
// 004bbe60  c20400               ret 4
// copied from an identical function in another client (function ?sub_4b90c0@ns_ROCX000004@@YGPAXI@Z)

namespace ns_ROCX000004 {
extern "C" void* (__cdecl* malloc_ptr)(unsigned int);

void* __stdcall sub_4b90c0(unsigned int size)
{
    char* p = (char*)malloc_ptr(size + 0x1c);
    *(unsigned int*)(p + 0xc) = size;
    *(char**)(p + 0x14) = p + 0x1c;
    *(char*)(p + 0x18) = 0;
    return p;
}
}
