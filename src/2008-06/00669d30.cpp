// from server: 100% by king_originala
// roc 2008-06 00669d30  unit: RBX::TreeStage  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669d30
//
// 00669d30  64a100000000         mov eax, dword ptr fs:[0]
// 00669d36  6aff                 push -1
// 00669d38  683beb7d00           push 0x7deb3b
// 00669d3d  50                   push eax
// 00669d3e  64892500000000       mov dword ptr fs:[0], esp
// 00669d45  83ec60               sub esp, 0x60
// 00669d48  53                   push ebx
// 00669d49  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00669d4d  55                   push ebp
// 00669d4e  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 00669d55  8b8cabb8000000       mov ecx, dword ptr [ebx + ebp*4 + 0xb8]
// 00669d5c  56                   push esi
// 00669d5d  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 00669d64  57                   push edi
// 00669d65  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 00669d6c  8b84b7b8000000       mov eax, dword ptr [edi + esi*4 + 0xb8]
// 00669d73  83f803               cmp eax, 3
// 00669d76  751a                 jne 0x669d92
// 00669d78  83f904               cmp ecx, 4
// 00669d7b  741f                 je 0x669d9c
// 00669d7d  33c0                 xor eax, eax
// 00669d7f  5f                   pop edi
// 00669d80  5e                   pop esi
// 00669d81  5d                   pop ebp
// 00669d82  5b                   pop ebx
// 00669d83  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00669d87  64890d00000000       mov dword ptr fs:[0], ecx
// 00669d8e  83c46c               add esp, 0x6c
// 00669d91  c3                   ret 
// 00669d92  83f804               cmp eax, 4
// 00669d95  75e6                 jne 0x669d7d
// 00669d97  83f903               cmp ecx, 3
// 00669d9a  75e1                 jne 0x669d7d
// 00669d9c  55                   push ebp
// 00669d9d  56                   push esi
// 00669d9e  53                   push ebx
// 00669d9f  57                   push edi
// 00669da0  e8bbb7fdff           call 0x645560
// 00669da5  83c410               add esp, 0x10
// 00669da8  84c0                 test al, al
// 00669daa  74d1                 je 0x669d7d
// 00669dac  8d4c2440             lea ecx, [esp + 0x40]
// 00669db0  e81be5e0ff           call 0x4782d0
// 00669db5  8d4c2410             lea ecx, [esp + 0x10]
// 00669db9  e812e5e0ff           call 0x4782d0
// 00669dbe  8d442410             lea eax, [esp + 0x10]
// 00669dc2  50                   push eax
// 00669dc3  8d4c2444             lea ecx, [esp + 0x44]
// 00669dc7  51                   push ecx
// 00669dc8  55                   push ebp
// 00669dc9  56                   push esi
// 00669dca  53                   push ebx
// 00669dcb  57                   push edi
// 00669dcc  e8afbbfdff           call 0x645980
// 00669dd1  6888000000           push 0x88
// 00669dd6  e8456b0300           call 0x6a0920
// 00669ddb  8bf0                 mov esi, eax
// 00669ddd  83c41c               add esp, 0x1c
// 00669de0  89b42480000000       mov dword ptr [esp + 0x80], esi
// 00669de7  33c0                 xor eax, eax
// 00669de9  89442478             mov dword ptr [esp + 0x78], eax
// 00669ded  3bf0                 cmp esi, eax
// 00669def  748e                 je 0x669d7f
// 00669df1  8d542410             lea edx, [esp + 0x10]
// 00669df5  52                   push edx
// 00669df6  8d442444             lea eax, [esp + 0x44]
// 00669dfa  50                   push eax
// 00669dfb  53                   push ebx
// 00669dfc  57                   push edi
// 00669dfd  8bce                 mov ecx, esi
// 00669dff  e8bcb7fdff           call 0x6455c0
// 00669e04  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00669e08  5f                   pop edi
// 00669e09  c706fce08300         mov dword ptr [esi], 0x83e0fc
// 00669e0f  8bc6                 mov eax, esi
// 00669e11  5e                   pop esi
// 00669e12  5d                   pop ebp
// 00669e13  5b                   pop ebx
// 00669e14  64890d00000000       mov dword ptr fs:[0], ecx
// 00669e1b  83c46c               add esp, 0x6c
// 00669e1e  c3                   ret 

struct Part
{
    unsigned char padding[0xb8];
    int state[1];
};

struct Frame
{
    unsigned char data[0x30];
    Frame();
};

extern bool __cdecl compatible(Part*, Part*, int, int);
extern void __cdecl getFrames(Part*, Part*, int, int, Frame*, Frame*);

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct JointBase
{
    unsigned char data[0x84];
    JointBase(Part*, Part*, const Frame&, const Frame&);
    virtual void type();
};

struct Joint : JointBase
{
    Joint(Part*, Part*, const Frame&, const Frame&);
    virtual void type();
};

__forceinline Joint::Joint(Part* a, Part* b, const Frame& x, const Frame& y)
    : JointBase(a, b, x, y)
{
}

Joint* __cdecl func_00669d30(Part* a, Part* b, int i, int j)
{
    int left = a->state[i];
    int right = b->state[j];

    if (left == 3)
    {
        if (right != 4)
            return 0;
    }
    else
    {
        if (left != 4 || right != 3)
            return 0;
    }

    if (!compatible(a, b, i, j))
        return 0;

    Frame x;
    Frame y;
    getFrames(a, b, i, j, &x, &y);
    return new Joint(a, b, x, y);
}
