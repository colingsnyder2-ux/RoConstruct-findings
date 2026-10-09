// roc 2008-06 00428eb0  unit: MainLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428eb0
//
// 00428eb0  6848010000           push 0x148
// 00428eb5  e8667a2700           call 0x6a0920
// 00428eba  83c404               add esp, 4
// 00428ebd  85c0                 test eax, eax
// 00428ebf  7402                 je 0x428ec3
// 00428ec1  8900                 mov dword ptr [eax], eax
// 00428ec3  8d4804               lea ecx, [eax + 4]
// 00428ec6  85c9                 test ecx, ecx
// 00428ec8  7402                 je 0x428ecc
// 00428eca  8901                 mov dword ptr [ecx], eax
// 00428ecc  c3                   ret 
// copied from an identical function in another client (function ?init@MainLogManager@ns_ROCX000007@@QAEPAXXZ)

namespace ns_ROCX000007 {
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
