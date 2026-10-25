// from server: 100% by tester
// roc 2008-06 005d7c80  unit: RBX::P8Humanoid::?$GetSetImpl  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7c80
//
// 005d7c80  55                   push ebp
// 005d7c81  8bec                 mov ebp, esp
// 005d7c83  6aff                 push -1
// 005d7c85  68005d7d00           push 0x7d5d00
// 005d7c8a  64a100000000         mov eax, dword ptr fs:[0]
// 005d7c90  50                   push eax
// 005d7c91  64892500000000       mov dword ptr fs:[0], esp
// 005d7c98  51                   push ecx
// 005d7c99  53                   push ebx
// 005d7c9a  56                   push esi
// 005d7c9b  57                   push edi
// 005d7c9c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005d7c9f  8bf1                 mov esi, ecx
// 005d7ca1  6a14                 push 0x14
// 005d7ca3  c70600000000         mov dword ptr [esi], 0
// 005d7ca9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005d7cb0  e86b8c0c00           call 0x6a0920
// 005d7cb5  83c404               add esp, 4
// 005d7cb8  85c0                 test eax, eax
// 005d7cba  7419                 je 0x5d7cd5
// 005d7cbc  b901000000           mov ecx, 1
// 005d7cc1  894804               mov dword ptr [eax + 4], ecx
// 005d7cc4  894808               mov dword ptr [eax + 8], ecx
// 005d7cc7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005d7cca  c700e0d28300         mov dword ptr [eax], 0x83d2e0
// 005d7cd0  89480c               mov dword ptr [eax + 0xc], ecx
// 005d7cd3  eb02                 jmp 0x5d7cd7
// 005d7cd5  33c0                 xor eax, eax
// 005d7cd7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005d7cda  8906                 mov dword ptr [esi], eax
// 005d7cdc  5f                   pop edi
// 005d7cdd  8bc6                 mov eax, esi
// 005d7cdf  5e                   pop esi
// 005d7ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 005d7ce7  5b                   pop ebx
// 005d7ce8  8be5                 mov esp, ebp
// 005d7cea  5d                   pop ebp
// 005d7ceb  c20800               ret 8

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
