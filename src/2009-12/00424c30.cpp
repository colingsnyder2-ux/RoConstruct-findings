// roc 2009-12 00424c30  unit: ThreadLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00424c30
//
// 00424c30  6848010000           push 0x148
// 00424c35  e826ec3c00           call 0x7f3860
// 00424c3a  83c404               add esp, 4
// 00424c3d  85c0                 test eax, eax
// 00424c3f  7402                 je 0x424c43
// 00424c41  8900                 mov dword ptr [eax], eax
// 00424c43  8d4804               lea ecx, [eax + 4]
// 00424c46  85c9                 test ecx, ecx
// 00424c48  7402                 je 0x424c4c
// 00424c4a  8901                 mov dword ptr [ecx], eax
// 00424c4c  c3                   ret 
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
