// from server: 100% by colin
// roc 2007-08 005a6230  unit: RBX::VHumanoid::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6230
//
// 005a6230  e82bfcffff           call 0x5a5e60
// 005a6235  85c0                 test eax, eax
// 005a6237  7407                 je 0x5a6240
// 005a6239  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005a623f  c3                   ret 
// 005a6240  33c0                 xor eax, eax
// 005a6242  c3                   ret 

struct S {
    int f();
};

extern void* __cdecl sub_005a5e60();

int S::f()
{
    char* p = (char*)sub_005a5e60();
    if (p)
        return *(int*)(p + 0x1d8);
    return 0;
}
