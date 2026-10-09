// from server: 57% by colin
// roc 2007-08 0052e590  unit: RBX::RunService  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e590
//
// 0052e590  6aff                 push -1
// 0052e592  68f8b57500           push 0x75b5f8
// 0052e597  64a100000000         mov eax, dword ptr fs:[0]
// 0052e59d  50                   push eax
// 0052e59e  64892500000000       mov dword ptr fs:[0], esp
// 0052e5a5  51                   push ecx
// 0052e5a6  56                   push esi
// 0052e5a7  8bf1                 mov esi, ecx
// 0052e5a9  89742404             mov dword ptr [esp + 4], esi
// 0052e5ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052e5b1  33c9                 xor ecx, ecx
// 0052e5b3  c706744a7a00         mov dword ptr [esi], 0x7a4a74
// 0052e5b9  894e04               mov dword ptr [esi + 4], ecx
// 0052e5bc  894e08               mov dword ptr [esi + 8], ecx
// 0052e5bf  894e0c               mov dword ptr [esi + 0xc], ecx
// 0052e5c2  3908                 cmp dword ptr [eax], ecx
// 0052e5c4  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052e5c8  741a                 je 0x52e5e4
// 0052e5ca  8b5008               mov edx, dword ptr [eax + 8]
// 0052e5cd  89560c               mov dword ptr [esi + 0xc], edx
// 0052e5d0  8b10                 mov edx, dword ptr [eax]
// 0052e5d2  895604               mov dword ptr [esi + 4], edx
// 0052e5d5  8b10                 mov edx, dword ptr [eax]
// 0052e5d7  51                   push ecx
// 0052e5d8  8b4804               mov ecx, dword ptr [eax + 4]
// 0052e5db  51                   push ecx
// 0052e5dc  ffd2                 call edx
// 0052e5de  83c408               add esp, 8
// 0052e5e1  894608               mov dword ptr [esi + 8], eax
// 0052e5e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e5e8  8bc6                 mov eax, esi
// 0052e5ea  5e                   pop esi
// 0052e5eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e5f2  83c410               add esp, 0x10
// 0052e5f5  c20400               ret 4

struct S {
    int f(int);
};

struct Arg {
    int (*fn)(int, int);
    int a;
    int b;
};

int S::f(int arg) {
    int *p = (int*)this;
    p[0] = 0x7a4a74;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    Arg *a = (Arg*)arg;
    if (a->fn != 0) {
        p[3] = a->b;
        p[1] = (int)a->fn;
        p[2] = a->fn(0, a->a);
    }
    return (int)this;
}
