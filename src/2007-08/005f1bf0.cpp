// from server: 29% by colin
// roc 2007-08 005f1bf0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1bf0
//
// 005f1bf0  6aff                 push -1
// 005f1bf2  68f8b57500           push 0x75b5f8
// 005f1bf7  64a100000000         mov eax, dword ptr fs:[0]
// 005f1bfd  50                   push eax
// 005f1bfe  64892500000000       mov dword ptr fs:[0], esp
// 005f1c05  51                   push ecx
// 005f1c06  56                   push esi
// 005f1c07  8bf1                 mov esi, ecx
// 005f1c09  89742404             mov dword ptr [esp + 4], esi
// 005f1c0d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1c11  33c9                 xor ecx, ecx
// 005f1c13  c706dc077c00         mov dword ptr [esi], 0x7c07dc
// 005f1c19  894e04               mov dword ptr [esi + 4], ecx
// 005f1c1c  894e08               mov dword ptr [esi + 8], ecx
// 005f1c1f  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f1c22  3908                 cmp dword ptr [eax], ecx
// 005f1c24  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1c28  741a                 je 0x5f1c44
// 005f1c2a  8b5008               mov edx, dword ptr [eax + 8]
// 005f1c2d  89560c               mov dword ptr [esi + 0xc], edx
// 005f1c30  8b10                 mov edx, dword ptr [eax]
// 005f1c32  895604               mov dword ptr [esi + 4], edx
// 005f1c35  8b10                 mov edx, dword ptr [eax]
// 005f1c37  51                   push ecx
// 005f1c38  8b4804               mov ecx, dword ptr [eax + 4]
// 005f1c3b  51                   push ecx
// 005f1c3c  ffd2                 call edx
// 005f1c3e  83c408               add esp, 8
// 005f1c41  894608               mov dword ptr [esi + 8], eax
// 005f1c44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1c48  8bc6                 mov eax, esi
// 005f1c4a  5e                   pop esi
// 005f1c4b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1c52  83c410               add esp, 0x10
// 005f1c55  c20400               ret 4

struct FactoryProduct {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    FactoryProduct(int* arg);
};

FactoryProduct::FactoryProduct(int* arg) {
    vtable = (void*)0x7c07dc;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    if (*arg != 0) {
        fieldC = arg[2];
        field4 = *arg;
        int (*fn)(int, int) = (int (*)(int, int))*(void**)arg;
        field8 = fn(arg[1], 0);
    }
}
