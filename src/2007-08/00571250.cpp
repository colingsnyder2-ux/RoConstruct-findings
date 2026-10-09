// from server: 38% by colin
// roc 2007-08 00571250  unit: RBX::Reflection::ClassDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571250
//
// 00571250  6aff                 push -1
// 00571252  68416e7500           push 0x756e41
// 00571257  64a100000000         mov eax, dword ptr fs:[0]
// 0057125d  50                   push eax
// 0057125e  64892500000000       mov dword ptr fs:[0], esp
// 00571265  51                   push ecx
// 00571266  56                   push esi
// 00571267  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057126b  89742418             mov dword ptr [esp + 0x18], esi
// 0057126f  89742404             mov dword ptr [esp + 4], esi
// 00571273  33c9                 xor ecx, ecx
// 00571275  3bf1                 cmp esi, ecx
// 00571277  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057127b  7429                 je 0x5712a6
// 0057127d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00571281  890e                 mov dword ptr [esi], ecx
// 00571283  894e04               mov dword ptr [esi + 4], ecx
// 00571286  894e08               mov dword ptr [esi + 8], ecx
// 00571289  3908                 cmp dword ptr [eax], ecx
// 0057128b  7419                 je 0x5712a6
// 0057128d  8b5008               mov edx, dword ptr [eax + 8]
// 00571290  895608               mov dword ptr [esi + 8], edx
// 00571293  8b10                 mov edx, dword ptr [eax]
// 00571295  8916                 mov dword ptr [esi], edx
// 00571297  8b10                 mov edx, dword ptr [eax]
// 00571299  51                   push ecx
// 0057129a  8b4804               mov ecx, dword ptr [eax + 4]
// 0057129d  51                   push ecx
// 0057129e  ffd2                 call edx
// 005712a0  83c408               add esp, 8
// 005712a3  894604               mov dword ptr [esi + 4], eax
// 005712a6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005712aa  5e                   pop esi
// 005712ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005712b2  83c410               add esp, 0x10
// 005712b5  c3                   ret 

struct Descriptor {
    int pad0;
    int pad4;
    int pad8;
};

struct S {
    int pad0;
    int pad4;
    int pad8;
    void f(Descriptor* src);
};

void S::f(Descriptor* src)
{
    if (this == 0)
        return;
    this->pad0 = 0;
    this->pad4 = 0;
    this->pad8 = 0;
    if (src->pad0 == 0)
        return;
    this->pad8 = src->pad8;
    this->pad0 = src->pad0;
    int (*fn)(int, int) = (int (*)(int, int))src->pad0;
    this->pad4 = fn(0, src->pad4);
}
