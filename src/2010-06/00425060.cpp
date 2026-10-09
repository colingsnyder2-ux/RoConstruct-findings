// roc 2010-06 00425060  unit: ThreadLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00425060
//
// 00425060  6848010000           push 0x148
// 00425065  e836293800           call 0x7a79a0
// 0042506a  83c404               add esp, 4
// 0042506d  85c0                 test eax, eax
// 0042506f  7402                 je 0x425073
// 00425071  8900                 mov dword ptr [eax], eax
// 00425073  8d4804               lea ecx, [eax + 4]
// 00425076  85c9                 test ecx, ecx
// 00425078  7402                 je 0x42507c
// 0042507a  8901                 mov dword ptr [ecx], eax
// 0042507c  c3                   ret 
// copied from an identical function in another client (function ?init@MainLogManager@ns_ROCX000006@@QAEPAXXZ)

namespace ns_ROCX000006 {
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
