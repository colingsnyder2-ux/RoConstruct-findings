// from server: 29% by colin
// roc 2007-08 004cda00  unit: RBX::Render::VMaterial::?$WeakReferenceCountedPointer  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cda00
//
// 004cda00  6aff                 push -1
// 004cda02  68f8b57500           push 0x75b5f8
// 004cda07  64a100000000         mov eax, dword ptr fs:[0]
// 004cda0d  50                   push eax
// 004cda0e  64892500000000       mov dword ptr fs:[0], esp
// 004cda15  51                   push ecx
// 004cda16  56                   push esi
// 004cda17  8bf1                 mov esi, ecx
// 004cda19  89742404             mov dword ptr [esp + 4], esi
// 004cda1d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cda21  33c9                 xor ecx, ecx
// 004cda23  c70640f07900         mov dword ptr [esi], 0x79f040
// 004cda29  894e04               mov dword ptr [esi + 4], ecx
// 004cda2c  894e08               mov dword ptr [esi + 8], ecx
// 004cda2f  894e0c               mov dword ptr [esi + 0xc], ecx
// 004cda32  3908                 cmp dword ptr [eax], ecx
// 004cda34  894c2410             mov dword ptr [esp + 0x10], ecx
// 004cda38  741a                 je 0x4cda54
// 004cda3a  8b5008               mov edx, dword ptr [eax + 8]
// 004cda3d  89560c               mov dword ptr [esi + 0xc], edx
// 004cda40  8b10                 mov edx, dword ptr [eax]
// 004cda42  895604               mov dword ptr [esi + 4], edx
// 004cda45  8b10                 mov edx, dword ptr [eax]
// 004cda47  51                   push ecx
// 004cda48  8b4804               mov ecx, dword ptr [eax + 4]
// 004cda4b  51                   push ecx
// 004cda4c  ffd2                 call edx
// 004cda4e  83c408               add esp, 8
// 004cda51  894608               mov dword ptr [esi + 8], eax
// 004cda54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cda58  8bc6                 mov eax, esi
// 004cda5a  5e                   pop esi
// 004cda5b  64890d00000000       mov dword ptr fs:[0], ecx
// 004cda62  83c410               add esp, 0x10
// 004cda65  c20400               ret 4

struct VMaterial {
    void *vtable;
    int field_4;
    int field_8;
    int field_c;
    void *method(void *);
};

void *VMaterial::method(void *arg) {
    vtable = (void *)0x79f040;
    field_4 = 0;
    field_8 = 0;
    field_c = 0;
    if (*(int *)arg != 0) {
        field_c = *(int *)((char *)arg + 8);
        field_4 = *(int *)arg;
        int (*fn)(int, int) = *(int (**)(int, int))arg;
        field_8 = fn(*(int *)((char *)arg + 4), 0);
    }
    return this;
}
