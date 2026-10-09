// roc 2007-03 0042a6e0  unit: seg_00420000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042a6e0
//
// 0042a6e0  6848010000           push 0x148
// 0042a6e5  e81e3a1f00           call 0x61e108
// 0042a6ea  83c404               add esp, 4
// 0042a6ed  85c0                 test eax, eax
// 0042a6ef  7402                 je 0x42a6f3
// 0042a6f1  8900                 mov dword ptr [eax], eax
// 0042a6f3  8d4804               lea ecx, [eax + 4]
// 0042a6f6  85c9                 test ecx, ecx
// 0042a6f8  7402                 je 0x42a6fc
// 0042a6fa  8901                 mov dword ptr [ecx], eax
// 0042a6fc  c3                   ret 
// copied from an identical function in another client (function ?init@MainLogManager@ns_ROCX000002@@QAEPAXXZ)

namespace ns_ROCX000002 {
extern "C" void* __cdecl sub_62fef6(unsigned int size);

struct MainLogManager
{
    void* init();
};

void* MainLogManager::init()
{
    void* p = sub_62fef6(0x148);
    if (p)
        *(void**)p = p;
    void** q = (void**)((char*)p + 4);
    if (q)
        *q = p;
    return p;
}
}
