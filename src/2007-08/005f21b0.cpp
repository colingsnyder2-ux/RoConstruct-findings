// from server: 29% by colin
// roc 2007-08 005f21b0  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f21b0
//
// 005f21b0  6aff                 push -1
// 005f21b2  68f8b57500           push 0x75b5f8
// 005f21b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f21bd  50                   push eax
// 005f21be  64892500000000       mov dword ptr fs:[0], esp
// 005f21c5  51                   push ecx
// 005f21c6  56                   push esi
// 005f21c7  8bf1                 mov esi, ecx
// 005f21c9  89742404             mov dword ptr [esp + 4], esi
// 005f21cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f21d1  33c9                 xor ecx, ecx
// 005f21d3  c706fc077c00         mov dword ptr [esi], 0x7c07fc
// 005f21d9  894e04               mov dword ptr [esi + 4], ecx
// 005f21dc  894e08               mov dword ptr [esi + 8], ecx
// 005f21df  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f21e2  3908                 cmp dword ptr [eax], ecx
// 005f21e4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f21e8  741a                 je 0x5f2204
// 005f21ea  8b5008               mov edx, dword ptr [eax + 8]
// 005f21ed  89560c               mov dword ptr [esi + 0xc], edx
// 005f21f0  8b10                 mov edx, dword ptr [eax]
// 005f21f2  895604               mov dword ptr [esi + 4], edx
// 005f21f5  8b10                 mov edx, dword ptr [eax]
// 005f21f7  51                   push ecx
// 005f21f8  8b4804               mov ecx, dword ptr [eax + 4]
// 005f21fb  51                   push ecx
// 005f21fc  ffd2                 call edx
// 005f21fe  83c408               add esp, 8
// 005f2201  894608               mov dword ptr [esi + 8], eax
// 005f2204  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2208  8bc6                 mov eax, esi
// 005f220a  5e                   pop esi
// 005f220b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2212  83c410               add esp, 0x10
// 005f2215  c20400               ret 4

struct S_func_005f21b0 {
    int m0;
    int m4;
    int m8;
    int mC;
    S_func_005f21b0* ctor(int* p);
};

S_func_005f21b0* S_func_005f21b0::ctor(int* p)
{
    m0 = 0x7c07fc;
    m4 = 0;
    m8 = 0;
    mC = 0;
    if (*p != 0) {
        mC = p[2];
        m4 = p[0];
        int (*fn)(int, int) = (int (*)(int, int))p[0];
        m8 = fn(p[1], 0);
    }
    return this;
}
