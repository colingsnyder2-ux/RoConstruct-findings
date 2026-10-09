// roc 2011-06 0042e320  unit: ThreadLogManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042e320
//
// 0042e320  6848010000           push 0x148
// 0042e325  e834bd3d00           call 0x80a05e
// 0042e32a  83c404               add esp, 4
// 0042e32d  85c0                 test eax, eax
// 0042e32f  7402                 je 0x42e333
// 0042e331  8900                 mov dword ptr [eax], eax
// 0042e333  8d4804               lea ecx, [eax + 4]
// 0042e336  85c9                 test ecx, ecx
// 0042e338  7402                 je 0x42e33c
// 0042e33a  8901                 mov dword ptr [ecx], eax
// 0042e33c  c3                   ret 
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
