// from server: 100% by tester
// roc 2008-06 005c1da0  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1da0
//
// 005c1da0  55                   push ebp
// 005c1da1  8bec                 mov ebp, esp
// 005c1da3  6aff                 push -1
// 005c1da5  68e0457d00           push 0x7d45e0
// 005c1daa  64a100000000         mov eax, dword ptr fs:[0]
// 005c1db0  50                   push eax
// 005c1db1  64892500000000       mov dword ptr fs:[0], esp
// 005c1db8  51                   push ecx
// 005c1db9  53                   push ebx
// 005c1dba  56                   push esi
// 005c1dbb  57                   push edi
// 005c1dbc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c1dbf  8bf1                 mov esi, ecx
// 005c1dc1  6a14                 push 0x14
// 005c1dc3  c70600000000         mov dword ptr [esi], 0
// 005c1dc9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c1dd0  e84beb0d00           call 0x6a0920
// 005c1dd5  83c404               add esp, 4
// 005c1dd8  85c0                 test eax, eax
// 005c1dda  7419                 je 0x5c1df5
// 005c1ddc  b901000000           mov ecx, 1
// 005c1de1  894804               mov dword ptr [eax + 4], ecx
// 005c1de4  894808               mov dword ptr [eax + 8], ecx
// 005c1de7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1dea  c70014898300         mov dword ptr [eax], 0x838914
// 005c1df0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c1df3  eb02                 jmp 0x5c1df7
// 005c1df5  33c0                 xor eax, eax
// 005c1df7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c1dfa  8906                 mov dword ptr [esi], eax
// 005c1dfc  5f                   pop edi
// 005c1dfd  8bc6                 mov eax, esi
// 005c1dff  5e                   pop esi
// 005c1e00  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1e07  5b                   pop ebx
// 005c1e08  8be5                 mov esp, ebp
// 005c1e0a  5d                   pop ebp
// 005c1e0b  c20800               ret 8
// 005c1e0e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c1e11  52                   push edx
// 005c1e12  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1e15  e81640e4ff           call 0x405e30
// 005c1e1a  6a00                 push 0
// 005c1e1c  6a00                 push 0
// 005c1e1e  e869f70d00           call 0x6a158c

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
