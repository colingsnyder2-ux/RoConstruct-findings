// from server: 100% by tester
// roc 2008-06 00496390  unit: RBX::Network::Players::Plugin  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496390
//
// 00496390  83b97401000000       cmp dword ptr [ecx + 0x174], 0
// 00496397  7512                 jne 0x4963ab
// 00496399  6a01                 push 1
// 0049639b  51                   push ecx
// 0049639c  e87f9a0000           call 0x49fe20
// 004963a1  83c408               add esp, 8
// 004963a4  84c0                 test al, al
// 004963a6  7503                 jne 0x4963ab
// 004963a8  33c0                 xor eax, eax
// 004963aa  c3                   ret 
// 004963ab  b801000000           mov eax, 1
// 004963b0  c3                   ret 

struct S_func_004c0970
{
    int f();
};

extern "C" char sub_004d58c0(S_func_004c0970 *, int);

int S_func_004c0970::f()
{
    if (*((int *)((char *)this + 0x174)) == 0)
    {
        if (sub_004d58c0(this, 1) == 0)
            return 0;
    }
    return 1;
}
