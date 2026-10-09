// from server: 26% by colin
// roc 2007-08 005f1e90  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1e90
//
// 005f1e90  6aff                 push -1
// 005f1e92  68f8b57500           push 0x75b5f8
// 005f1e97  64a100000000         mov eax, dword ptr fs:[0]
// 005f1e9d  50                   push eax
// 005f1e9e  64892500000000       mov dword ptr fs:[0], esp
// 005f1ea5  51                   push ecx
// 005f1ea6  56                   push esi
// 005f1ea7  8bf1                 mov esi, ecx
// 005f1ea9  89742404             mov dword ptr [esp + 4], esi
// 005f1ead  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1eb1  33c9                 xor ecx, ecx
// 005f1eb3  c706ec077c00         mov dword ptr [esi], 0x7c07ec
// 005f1eb9  894e04               mov dword ptr [esi + 4], ecx
// 005f1ebc  894e08               mov dword ptr [esi + 8], ecx
// 005f1ebf  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f1ec2  3908                 cmp dword ptr [eax], ecx
// 005f1ec4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1ec8  741a                 je 0x5f1ee4
// 005f1eca  8b5008               mov edx, dword ptr [eax + 8]
// 005f1ecd  89560c               mov dword ptr [esi + 0xc], edx
// 005f1ed0  8b10                 mov edx, dword ptr [eax]
// 005f1ed2  895604               mov dword ptr [esi + 4], edx
// 005f1ed5  8b10                 mov edx, dword ptr [eax]
// 005f1ed7  51                   push ecx
// 005f1ed8  8b4804               mov ecx, dword ptr [eax + 4]
// 005f1edb  51                   push ecx
// 005f1edc  ffd2                 call edx
// 005f1ede  83c408               add esp, 8
// 005f1ee1  894608               mov dword ptr [esi + 8], eax
// 005f1ee4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1ee8  8bc6                 mov eax, esi
// 005f1eea  5e                   pop esi
// 005f1eeb  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1ef2  83c410               add esp, 0x10
// 005f1ef5  c20400               ret 4

struct S {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    S(int* p);
};

S::S(int* p)
{
    vtable = (void*)0x7c07ec;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    if (*p != 0) {
        fieldC = p[2];
        field4 = *p;
        int (*fn)(int, int) = (int (*)(int, int))*(void**)p;
        field8 = fn(0, p[1]);
    }
}
