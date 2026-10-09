// roc 2012-06 00432c20  unit: ThreadLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00432c20
//
// 00432c20  6848010000           push 0x148
// 00432c25  e8f0f45400           call 0x98211a
// 00432c2a  83c404               add esp, 4
// 00432c2d  85c0                 test eax, eax
// 00432c2f  7402                 je 0x432c33
// 00432c31  8900                 mov dword ptr [eax], eax
// 00432c33  8d4804               lea ecx, [eax + 4]
// 00432c36  85c9                 test ecx, ecx
// 00432c38  7402                 je 0x432c3c
// 00432c3a  8901                 mov dword ptr [ecx], eax
// 00432c3c  c3                   ret 
// copied from an identical function in another client (function ?init@MainLogManager@ns_ROCX000001@@QAEPAXXZ)

namespace ns_ROCX000001 {
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
