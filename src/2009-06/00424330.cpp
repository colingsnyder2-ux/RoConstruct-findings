// roc 2009-06 00424330  unit: MainLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00424330
//
// 00424330  6848010000           push 0x148
// 00424335  e8fe462f00           call 0x718a38
// 0042433a  83c404               add esp, 4
// 0042433d  85c0                 test eax, eax
// 0042433f  7402                 je 0x424343
// 00424341  8900                 mov dword ptr [eax], eax
// 00424343  8d4804               lea ecx, [eax + 4]
// 00424346  85c9                 test ecx, ecx
// 00424348  7402                 je 0x42434c
// 0042434a  8901                 mov dword ptr [ecx], eax
// 0042434c  c3                   ret 
// copied from an identical function in another client (function ?init@MainLogManager@ns_ROCX000000@@QAEPAXXZ)

namespace ns_ROCX000000 {
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
