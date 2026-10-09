// from server: 26% by colin
// roc 2007-08 005f24d0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f24d0
//
// 005f24d0  6aff                 push -1
// 005f24d2  68f8b57500           push 0x75b5f8
// 005f24d7  64a100000000         mov eax, dword ptr fs:[0]
// 005f24dd  50                   push eax
// 005f24de  64892500000000       mov dword ptr fs:[0], esp
// 005f24e5  51                   push ecx
// 005f24e6  56                   push esi
// 005f24e7  8bf1                 mov esi, ecx
// 005f24e9  89742404             mov dword ptr [esp + 4], esi
// 005f24ed  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f24f1  33c9                 xor ecx, ecx
// 005f24f3  c7060c087c00         mov dword ptr [esi], 0x7c080c
// 005f24f9  894e04               mov dword ptr [esi + 4], ecx
// 005f24fc  894e08               mov dword ptr [esi + 8], ecx
// 005f24ff  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f2502  3908                 cmp dword ptr [eax], ecx
// 005f2504  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f2508  741a                 je 0x5f2524
// 005f250a  8b5008               mov edx, dword ptr [eax + 8]
// 005f250d  89560c               mov dword ptr [esi + 0xc], edx
// 005f2510  8b10                 mov edx, dword ptr [eax]
// 005f2512  895604               mov dword ptr [esi + 4], edx
// 005f2515  8b10                 mov edx, dword ptr [eax]
// 005f2517  51                   push ecx
// 005f2518  8b4804               mov ecx, dword ptr [eax + 4]
// 005f251b  51                   push ecx
// 005f251c  ffd2                 call edx
// 005f251e  83c408               add esp, 8
// 005f2521  894608               mov dword ptr [esi + 8], eax
// 005f2524  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2528  8bc6                 mov eax, esi
// 005f252a  5e                   pop esi
// 005f252b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2532  83c410               add esp, 0x10
// 005f2535  c20400               ret 4

struct S {
    void* vfptr;
    int field4;
    int field8;
    int fieldC;
    S* construct(int* src);
};

S* S::construct(int* src) {
    this->vfptr = (void*)0x7c080c;
    this->field4 = 0;
    this->field8 = 0;
    this->fieldC = 0;
    if (*src != 0) {
        this->fieldC = src[2];
        this->field4 = src[0];
        int (*fn)(int, int) = (int (*)(int, int))src[0];
        this->field8 = fn(0, src[1]);
    }
    return this;
}
