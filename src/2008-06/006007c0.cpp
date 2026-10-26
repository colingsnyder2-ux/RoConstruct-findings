// from server: 100% by tester
// roc 2008-06 006007c0  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006007c0
//
// 006007c0  55                   push ebp
// 006007c1  8bec                 mov ebp, esp
// 006007c3  6aff                 push -1
// 006007c5  68a0817d00           push 0x7d81a0
// 006007ca  64a100000000         mov eax, dword ptr fs:[0]
// 006007d0  50                   push eax
// 006007d1  64892500000000       mov dword ptr fs:[0], esp
// 006007d8  51                   push ecx
// 006007d9  53                   push ebx
// 006007da  56                   push esi
// 006007db  57                   push edi
// 006007dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006007df  8bf1                 mov esi, ecx
// 006007e1  6a14                 push 0x14
// 006007e3  c70600000000         mov dword ptr [esi], 0
// 006007e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006007f0  e82b010a00           call 0x6a0920
// 006007f5  83c404               add esp, 4
// 006007f8  85c0                 test eax, eax
// 006007fa  7419                 je 0x600815
// 006007fc  b901000000           mov ecx, 1
// 00600801  894804               mov dword ptr [eax + 4], ecx
// 00600804  894808               mov dword ptr [eax + 8], ecx
// 00600807  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0060080a  c700d41e8400         mov dword ptr [eax], 0x841ed4
// 00600810  89480c               mov dword ptr [eax + 0xc], ecx
// 00600813  eb02                 jmp 0x600817
// 00600815  33c0                 xor eax, eax
// 00600817  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0060081a  8906                 mov dword ptr [esi], eax
// 0060081c  5f                   pop edi
// 0060081d  8bc6                 mov eax, esi
// 0060081f  5e                   pop esi
// 00600820  64890d00000000       mov dword ptr fs:[0], ecx
// 00600827  5b                   pop ebx
// 00600828  8be5                 mov esp, ebp
// 0060082a  5d                   pop ebp
// 0060082b  c20800               ret 8
// 0060082e  8b5508               mov edx, dword ptr [ebp + 8]
// 00600831  52                   push edx
// 00600832  8d4d0c               lea ecx, [ebp + 0xc]
// 00600835  e8f655e0ff           call 0x405e30
// 0060083a  6a00                 push 0
// 0060083c  6a00                 push 0
// 0060083e  e8490d0a00           call 0x6a158c

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
