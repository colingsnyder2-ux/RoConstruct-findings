// from server: 100% by king_originala
// roc 2008-06 005766c0  unit: RBX::DataModel  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005766c0
//
// 005766c0  55                   push ebp
// 005766c1  8bec                 mov ebp, esp
// 005766c3  6aff                 push -1
// 005766c5  6840067d00           push 0x7d0640
// 005766ca  64a100000000         mov eax, dword ptr fs:[0]
// 005766d0  50                   push eax
// 005766d1  64892500000000       mov dword ptr fs:[0], esp
// 005766d8  51                   push ecx
// 005766d9  53                   push ebx
// 005766da  56                   push esi
// 005766db  57                   push edi
// 005766dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005766df  8bf1                 mov esi, ecx
// 005766e1  6a14                 push 0x14
// 005766e3  c70600000000         mov dword ptr [esi], 0
// 005766e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005766f0  e82ba21200           call 0x6a0920
// 005766f5  83c404               add esp, 4
// 005766f8  85c0                 test eax, eax
// 005766fa  7419                 je 0x576715
// 005766fc  b901000000           mov ecx, 1
// 00576701  894804               mov dword ptr [eax + 4], ecx
// 00576704  894808               mov dword ptr [eax + 8], ecx
// 00576707  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057670a  c700d4fd8200         mov dword ptr [eax], 0x82fdd4
// 00576710  89480c               mov dword ptr [eax + 0xc], ecx
// 00576713  eb02                 jmp 0x576717
// 00576715  33c0                 xor eax, eax
// 00576717  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057671a  8906                 mov dword ptr [esi], eax
// 0057671c  5f                   pop edi
// 0057671d  8bc6                 mov eax, esi
// 0057671f  5e                   pop esi
// 00576720  64890d00000000       mov dword ptr fs:[0], ecx
// 00576727  5b                   pop ebx
// 00576728  8be5                 mov esp, ebp
// 0057672a  5d                   pop ebp
// 0057672b  c20800               ret 8
// 0057672e  8b5508               mov edx, dword ptr [ebp + 8]
// 00576731  52                   push edx
// 00576732  8d4d0c               lea ecx, [ebp + 0xc]
// 00576735  e8f6f6e8ff           call 0x405e30
// 0057673a  6a00                 push 0
// 0057673c  6a00                 push 0
// 0057673e  e849ae1200           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};

inline void Deleter::operator()(void*) const {}

struct Control {
    void** vtable;
    int strong;
    int weak;
    void* object;
    Deleter deleter;

    Control(void*, const Deleter&);
};

inline Control::Control(void* p, const Deleter& d)
    : strong(1), weak(1), deleter(d)
{
    vtable = controlVtable;
    object = p;
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
