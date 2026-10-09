// from server: 29% by colin
// roc 2007-08 005f2770  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2770
//
// 005f2770  6aff                 push -1
// 005f2772  68f8b57500           push 0x75b5f8
// 005f2777  64a100000000         mov eax, dword ptr fs:[0]
// 005f277d  50                   push eax
// 005f277e  64892500000000       mov dword ptr fs:[0], esp
// 005f2785  51                   push ecx
// 005f2786  56                   push esi
// 005f2787  8bf1                 mov esi, ecx
// 005f2789  89742404             mov dword ptr [esp + 4], esi
// 005f278d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f2791  33c9                 xor ecx, ecx
// 005f2793  c7061c087c00         mov dword ptr [esi], 0x7c081c
// 005f2799  894e04               mov dword ptr [esi + 4], ecx
// 005f279c  894e08               mov dword ptr [esi + 8], ecx
// 005f279f  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f27a2  3908                 cmp dword ptr [eax], ecx
// 005f27a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f27a8  741a                 je 0x5f27c4
// 005f27aa  8b5008               mov edx, dword ptr [eax + 8]
// 005f27ad  89560c               mov dword ptr [esi + 0xc], edx
// 005f27b0  8b10                 mov edx, dword ptr [eax]
// 005f27b2  895604               mov dword ptr [esi + 4], edx
// 005f27b5  8b10                 mov edx, dword ptr [eax]
// 005f27b7  51                   push ecx
// 005f27b8  8b4804               mov ecx, dword ptr [eax + 4]
// 005f27bb  51                   push ecx
// 005f27bc  ffd2                 call edx
// 005f27be  83c408               add esp, 8
// 005f27c1  894608               mov dword ptr [esi + 8], eax
// 005f27c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f27c8  8bc6                 mov eax, esi
// 005f27ca  5e                   pop esi
// 005f27cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005f27d2  83c410               add esp, 0x10
// 005f27d5  c20400               ret 4

struct Color3 {
    float r, g, b;
};

struct VarBase {
    int pad0;
    int pad4;
    int pad8;
    int padc;
};

struct Var : VarBase {
    Var(const Color3& c);
};

Var::Var(const Color3& c)
{
    *(int*)((char*)this + 0x00) = 0x7c081c;
    *(int*)((char*)this + 0x04) = 0;
    *(int*)((char*)this + 0x08) = 0;
    *(int*)((char*)this + 0x0c) = 0;

    const Color3* p = &c;
    if (*(const int*)p != 0) {
        *(int*)((char*)this + 0x0c) = *(const int*)((const char*)p + 8);
        *(int*)((char*)this + 0x04) = *(const int*)p;
        int (*fn)(int, int) = (int (*)(int, int))*(const int*)p;
        *(int*)((char*)this + 0x08) = fn(*(const int*)((const char*)p + 4), 0);
    }
}
