// from server: 100% by tester
// roc 2008-06 005c2cd0  unit: RBX::VObjectValue::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2cd0
//
// 005c2cd0  55                   push ebp
// 005c2cd1  8bec                 mov ebp, esp
// 005c2cd3  6aff                 push -1
// 005c2cd5  6880467d00           push 0x7d4680
// 005c2cda  64a100000000         mov eax, dword ptr fs:[0]
// 005c2ce0  50                   push eax
// 005c2ce1  64892500000000       mov dword ptr fs:[0], esp
// 005c2ce8  51                   push ecx
// 005c2ce9  53                   push ebx
// 005c2cea  56                   push esi
// 005c2ceb  57                   push edi
// 005c2cec  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c2cef  8bf1                 mov esi, ecx
// 005c2cf1  6a14                 push 0x14
// 005c2cf3  c70600000000         mov dword ptr [esi], 0
// 005c2cf9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2d00  e81bdc0d00           call 0x6a0920
// 005c2d05  83c404               add esp, 4
// 005c2d08  85c0                 test eax, eax
// 005c2d0a  7419                 je 0x5c2d25
// 005c2d0c  b901000000           mov ecx, 1
// 005c2d11  894804               mov dword ptr [eax + 4], ecx
// 005c2d14  894808               mov dword ptr [eax + 8], ecx
// 005c2d17  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2d1a  c7007c8a8300         mov dword ptr [eax], 0x838a7c
// 005c2d20  89480c               mov dword ptr [eax + 0xc], ecx
// 005c2d23  eb02                 jmp 0x5c2d27
// 005c2d25  33c0                 xor eax, eax
// 005c2d27  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c2d2a  8906                 mov dword ptr [esi], eax
// 005c2d2c  5f                   pop edi
// 005c2d2d  8bc6                 mov eax, esi
// 005c2d2f  5e                   pop esi
// 005c2d30  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2d37  5b                   pop ebx
// 005c2d38  8be5                 mov esp, ebp
// 005c2d3a  5d                   pop ebp
// 005c2d3b  c20800               ret 8
// 005c2d3e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2d41  52                   push edx
// 005c2d42  8d4d0c               lea ecx, [ebp + 0xc]
// 005c2d45  e8e630e4ff           call 0x405e30
// 005c2d4a  6a00                 push 0
// 005c2d4c  6a00                 push 0
// 005c2d4e  e839e80d00           call 0x6a158c

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
