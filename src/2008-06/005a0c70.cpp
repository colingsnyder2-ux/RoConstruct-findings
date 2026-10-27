// from server: 100% by king_originala
// roc 2008-06 005a0c70  unit: RBX::RootInstance  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0c70
//
// 005a0c70  55                   push ebp
// 005a0c71  8bec                 mov ebp, esp
// 005a0c73  6aff                 push -1
// 005a0c75  6850297d00           push 0x7d2950
// 005a0c7a  64a100000000         mov eax, dword ptr fs:[0]
// 005a0c80  50                   push eax
// 005a0c81  64892500000000       mov dword ptr fs:[0], esp
// 005a0c88  51                   push ecx
// 005a0c89  53                   push ebx
// 005a0c8a  56                   push esi
// 005a0c8b  57                   push edi
// 005a0c8c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a0c8f  8bf1                 mov esi, ecx
// 005a0c91  6a14                 push 0x14
// 005a0c93  c70600000000         mov dword ptr [esi], 0
// 005a0c99  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a0ca0  e87bfc0f00           call 0x6a0920
// 005a0ca5  83c404               add esp, 4
// 005a0ca8  85c0                 test eax, eax
// 005a0caa  7419                 je 0x5a0cc5
// 005a0cac  b901000000           mov ecx, 1
// 005a0cb1  894804               mov dword ptr [eax + 4], ecx
// 005a0cb4  894808               mov dword ptr [eax + 8], ecx
// 005a0cb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005a0cba  c70074368300         mov dword ptr [eax], 0x833674
// 005a0cc0  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0cc3  eb02                 jmp 0x5a0cc7
// 005a0cc5  33c0                 xor eax, eax
// 005a0cc7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a0cca  8906                 mov dword ptr [esi], eax
// 005a0ccc  5f                   pop edi
// 005a0ccd  8bc6                 mov eax, esi
// 005a0ccf  5e                   pop esi
// 005a0cd0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0cd7  5b                   pop ebx
// 005a0cd8  8be5                 mov esp, ebp
// 005a0cda  5d                   pop ebp
// 005a0cdb  c20800               ret 8
// 005a0cde  8b5508               mov edx, dword ptr [ebp + 8]
// 005a0ce1  52                   push edx
// 005a0ce2  8d4d0c               lea ecx, [ebp + 0xc]
// 005a0ce5  e84651e6ff           call 0x405e30
// 005a0cea  6a00                 push 0
// 005a0cec  6a00                 push 0
// 005a0cee  e899081000           call 0x6a158c

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
