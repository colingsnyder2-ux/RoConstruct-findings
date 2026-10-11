// from server: 100% by tester
// roc 2009-06 004c4630  unit: RBX::Network::Players::Plugin  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4630
//
// 004c4630  83b9a800000000       cmp dword ptr [ecx + 0xa8], 0
// 004c4637  7512                 jne 0x4c464b
// 004c4639  6a01                 push 1
// 004c463b  51                   push ecx
// 004c463c  e8efef0000           call 0x4d3630
// 004c4641  83c408               add esp, 8
// 004c4644  84c0                 test al, al
// 004c4646  7503                 jne 0x4c464b
// 004c4648  33c0                 xor eax, eax
// 004c464a  c3                   ret 
// 004c464b  b801000000           mov eax, 1
// 004c4650  c3                   ret 

struct S_func_004c0970
{
    int f();
};

extern "C" char sub_004d58c0(S_func_004c0970 *, int);

int S_func_004c0970::f()
{
    if (*((int *)((char *)this + 0xa8)) == 0)
    {
        if (sub_004d58c0(this, 1) == 0)
            return 0;
    }
    return 1;
}
