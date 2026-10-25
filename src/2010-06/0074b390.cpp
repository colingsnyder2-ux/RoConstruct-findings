// from server: 100% by tester
// roc 2010-06 0074b390  unit: RBX::KernelJoint  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074b390
//
// 0074b390  56                   push esi
// 0074b391  8bf1                 mov esi, ecx
// 0074b393  8b06                 mov eax, dword ptr [esi]
// 0074b395  8b5010               mov edx, dword ptr [eax + 0x10]
// 0074b398  6a00                 push 0
// 0074b39a  ffd2                 call edx
// 0074b39c  80783c00             cmp byte ptr [eax + 0x3c], 0
// 0074b3a0  7418                 je 0x74b3ba
// 0074b3a2  8b06                 mov eax, dword ptr [esi]
// 0074b3a4  8b5010               mov edx, dword ptr [eax + 0x10]
// 0074b3a7  6a01                 push 1
// 0074b3a9  8bce                 mov ecx, esi
// 0074b3ab  ffd2                 call edx
// 0074b3ad  80783c00             cmp byte ptr [eax + 0x3c], 0
// 0074b3b1  7407                 je 0x74b3ba
// 0074b3b3  b801000000           mov eax, 1
// 0074b3b8  5e                   pop esi
// 0074b3b9  c3                   ret 
// 0074b3ba  33c0                 xor eax, eax
// 0074b3bc  5e                   pop esi
// 0074b3bd  c3                   ret 

struct S_func_0079b210
{
    struct VTable
    {
        void* pad[4];
        char* (__thiscall *get)(S_func_0079b210*, int);
    };

    VTable* vtable;
    int f();
};

int S_func_0079b210::f()
{
    if (vtable->get(this, 0)[0x3c])
    {
        if (vtable->get(this, 1)[0x3c])
            return 1;
    }
    return 0;
}
