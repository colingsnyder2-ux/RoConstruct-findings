// from server: 100% by king_originala
// roc 2008-06 005cff30  unit: RBX::VHopperBin::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cff30
//
// 005cff30  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 005cff36  85c0                 test eax, eax
// 005cff38  7421                 je 0x5cff5b
// 005cff3a  6a00                 push 0
// 005cff3c  68ec539300           push 0x9353ec
// 005cff41  687c909200           push 0x92907c
// 005cff46  6a00                 push 0
// 005cff48  50                   push eax
// 005cff49  e878180d00           call 0x6a17c6
// 005cff4e  83c414               add esp, 0x14
// 005cff51  85c0                 test eax, eax
// 005cff53  7406                 je 0x5cff5b
// 005cff55  b801000000           mov eax, 1
// 005cff5a  c3                   ret 
// 005cff5b  33c0                 xor eax, eax
// 005cff5d  c3                   ret 

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct S {
    char padding[0x104];
    void* instance;
    int f();
};

int S::f()
{
    if (instance &&
        __RTDynamicCast(instance, 0, (void*)0x92907C, (void*)0x9353EC, 0))
        return 1;
    return 0;
}
