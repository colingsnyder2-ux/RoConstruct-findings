// from server: 30% by colin
// roc 2007-08 005e80b0  unit: RBX::VExplosion::?$FactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e80b0
//
// 005e80b0  6aff                 push -1
// 005e80b2  68f8b57500           push 0x75b5f8
// 005e80b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e80bd  50                   push eax
// 005e80be  64892500000000       mov dword ptr fs:[0], esp
// 005e80c5  51                   push ecx
// 005e80c6  56                   push esi
// 005e80c7  8bf1                 mov esi, ecx
// 005e80c9  89742404             mov dword ptr [esp + 4], esi
// 005e80cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e80d1  33c9                 xor ecx, ecx
// 005e80d3  c70668d97b00         mov dword ptr [esi], 0x7bd968
// 005e80d9  894e04               mov dword ptr [esi + 4], ecx
// 005e80dc  894e08               mov dword ptr [esi + 8], ecx
// 005e80df  894e0c               mov dword ptr [esi + 0xc], ecx
// 005e80e2  3908                 cmp dword ptr [eax], ecx
// 005e80e4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005e80e8  741a                 je 0x5e8104
// 005e80ea  8b5008               mov edx, dword ptr [eax + 8]
// 005e80ed  89560c               mov dword ptr [esi + 0xc], edx
// 005e80f0  8b10                 mov edx, dword ptr [eax]
// 005e80f2  895604               mov dword ptr [esi + 4], edx
// 005e80f5  8b10                 mov edx, dword ptr [eax]
// 005e80f7  51                   push ecx
// 005e80f8  8b4804               mov ecx, dword ptr [eax + 4]
// 005e80fb  51                   push ecx
// 005e80fc  ffd2                 call edx
// 005e80fe  83c408               add esp, 8
// 005e8101  894608               mov dword ptr [esi + 8], eax
// 005e8104  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e8108  8bc6                 mov eax, esi
// 005e810a  5e                   pop esi
// 005e810b  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8112  83c410               add esp, 0x10
// 005e8115  c20400               ret 4

struct VExplosionFactoryProduct {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    VExplosionFactoryProduct* construct(int* arg);
};

VExplosionFactoryProduct* VExplosionFactoryProduct::construct(int* arg)
{
    this->vtable = (void*)0x7bd968;
    this->field4 = 0;
    this->field8 = 0;
    this->fieldC = 0;
    if (*arg != 0) {
        this->fieldC = arg[2];
        this->field4 = *arg;
        int (*fn)(int, int) = (int (*)(int, int))*(int*)*arg;
        this->field8 = fn(0, arg[1]);
    }
    return this;
}
