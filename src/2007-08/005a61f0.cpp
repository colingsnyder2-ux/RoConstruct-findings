// from server: 100% by colin
// roc 2007-08 005a61f0  unit: RBX::VHumanoid::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a61f0
//
// 005a61f0  e86bfaffff           call 0x5a5c60
// 005a61f5  85c0                 test eax, eax
// 005a61f7  7407                 je 0x5a6200
// 005a61f9  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005a61ff  c3                   ret 
// 005a6200  33c0                 xor eax, eax
// 005a6202  c3                   ret 

struct S {
    int f();
};

extern "C" void* __cdecl sub_5A5C60();

int S::f()
{
    void* p = sub_5A5C60();
    if (p)
        return *(int*)((char*)p + 0x1d8);
    return 0;
}
