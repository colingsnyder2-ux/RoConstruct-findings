// from server: 100% by king_originala
// roc 2008-06 0040c260  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c260
//
// 0040c260  55                   push ebp
// 0040c261  8bec                 mov ebp, esp
// 0040c263  6aff                 push -1
// 0040c265  6880d27b00           push 0x7bd280
// 0040c26a  64a100000000         mov eax, dword ptr fs:[0]
// 0040c270  50                   push eax
// 0040c271  64892500000000       mov dword ptr fs:[0], esp
// 0040c278  51                   push ecx
// 0040c279  53                   push ebx
// 0040c27a  56                   push esi
// 0040c27b  57                   push edi
// 0040c27c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040c27f  8bf1                 mov esi, ecx
// 0040c281  6a14                 push 0x14
// 0040c283  c70600000000         mov dword ptr [esi], 0
// 0040c289  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040c290  e88b462900           call 0x6a0920
// 0040c295  83c404               add esp, 4
// 0040c298  85c0                 test eax, eax
// 0040c29a  7419                 je 0x40c2b5
// 0040c29c  b901000000           mov ecx, 1
// 0040c2a1  894804               mov dword ptr [eax + 4], ecx
// 0040c2a4  894808               mov dword ptr [eax + 8], ecx
// 0040c2a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040c2aa  c70070c18000         mov dword ptr [eax], 0x80c170
// 0040c2b0  89480c               mov dword ptr [eax + 0xc], ecx
// 0040c2b3  eb02                 jmp 0x40c2b7
// 0040c2b5  33c0                 xor eax, eax
// 0040c2b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040c2ba  8906                 mov dword ptr [esi], eax
// 0040c2bc  5f                   pop edi
// 0040c2bd  8bc6                 mov eax, esi
// 0040c2bf  5e                   pop esi
// 0040c2c0  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c2c7  5b                   pop ebx
// 0040c2c8  8be5                 mov esp, ebp
// 0040c2ca  5d                   pop ebp
// 0040c2cb  c20800               ret 8
// 0040c2ce  8b5508               mov edx, dword ptr [ebp + 8]
// 0040c2d1  52                   push edx
// 0040c2d2  8d4d0c               lea ecx, [ebp + 0xc]
// 0040c2d5  e8569bffff           call 0x405e30
// 0040c2da  6a00                 push 0
// 0040c2dc  6a00                 push 0
// 0040c2de  e8a9522900           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



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
