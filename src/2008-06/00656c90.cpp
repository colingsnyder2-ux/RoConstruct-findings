// from server: 100% by tester
// roc 2008-06 00656c90  unit: RBX::ArrowPanel  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656c90
//
// 00656c90  55                   push ebp
// 00656c91  8bec                 mov ebp, esp
// 00656c93  6aff                 push -1
// 00656c95  68b0bb7d00           push 0x7dbbb0
// 00656c9a  64a100000000         mov eax, dword ptr fs:[0]
// 00656ca0  50                   push eax
// 00656ca1  64892500000000       mov dword ptr fs:[0], esp
// 00656ca8  51                   push ecx
// 00656ca9  53                   push ebx
// 00656caa  56                   push esi
// 00656cab  57                   push edi
// 00656cac  8965f0               mov dword ptr [ebp - 0x10], esp
// 00656caf  8bf1                 mov esi, ecx
// 00656cb1  6a14                 push 0x14
// 00656cb3  c70600000000         mov dword ptr [esi], 0
// 00656cb9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00656cc0  e85b9c0400           call 0x6a0920
// 00656cc5  83c404               add esp, 4
// 00656cc8  85c0                 test eax, eax
// 00656cca  7419                 je 0x656ce5
// 00656ccc  b901000000           mov ecx, 1
// 00656cd1  894804               mov dword ptr [eax + 4], ecx
// 00656cd4  894808               mov dword ptr [eax + 8], ecx
// 00656cd7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00656cda  c7004cbf8400         mov dword ptr [eax], 0x84bf4c
// 00656ce0  89480c               mov dword ptr [eax + 0xc], ecx
// 00656ce3  eb02                 jmp 0x656ce7
// 00656ce5  33c0                 xor eax, eax
// 00656ce7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00656cea  8906                 mov dword ptr [esi], eax
// 00656cec  5f                   pop edi
// 00656ced  8bc6                 mov eax, esi
// 00656cef  5e                   pop esi
// 00656cf0  64890d00000000       mov dword ptr fs:[0], ecx
// 00656cf7  5b                   pop ebx
// 00656cf8  8be5                 mov esp, ebp
// 00656cfa  5d                   pop ebp
// 00656cfb  c20800               ret 8

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
