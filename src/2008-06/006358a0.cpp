// from server: 100% by tester
// roc 2008-06 006358a0  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006358a0
//
// 006358a0  55                   push ebp
// 006358a1  8bec                 mov ebp, esp
// 006358a3  6aff                 push -1
// 006358a5  6850a07d00           push 0x7da050
// 006358aa  64a100000000         mov eax, dword ptr fs:[0]
// 006358b0  50                   push eax
// 006358b1  64892500000000       mov dword ptr fs:[0], esp
// 006358b8  51                   push ecx
// 006358b9  53                   push ebx
// 006358ba  56                   push esi
// 006358bb  57                   push edi
// 006358bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006358bf  8bf1                 mov esi, ecx
// 006358c1  6a14                 push 0x14
// 006358c3  c70600000000         mov dword ptr [esi], 0
// 006358c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006358d0  e84bb00600           call 0x6a0920
// 006358d5  83c404               add esp, 4
// 006358d8  85c0                 test eax, eax
// 006358da  7419                 je 0x6358f5
// 006358dc  b901000000           mov ecx, 1
// 006358e1  894804               mov dword ptr [eax + 4], ecx
// 006358e4  894808               mov dword ptr [eax + 8], ecx
// 006358e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006358ea  c70090878400         mov dword ptr [eax], 0x848790
// 006358f0  89480c               mov dword ptr [eax + 0xc], ecx
// 006358f3  eb02                 jmp 0x6358f7
// 006358f5  33c0                 xor eax, eax
// 006358f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006358fa  8906                 mov dword ptr [esi], eax
// 006358fc  5f                   pop edi
// 006358fd  8bc6                 mov eax, esi
// 006358ff  5e                   pop esi
// 00635900  64890d00000000       mov dword ptr fs:[0], ecx
// 00635907  5b                   pop ebx
// 00635908  8be5                 mov esp, ebp
// 0063590a  5d                   pop ebp
// 0063590b  c20800               ret 8
// 0063590e  8b5508               mov edx, dword ptr [ebp + 8]
// 00635911  52                   push edx
// 00635912  8d4d0c               lea ecx, [ebp + 0xc]
// 00635915  e81605ddff           call 0x405e30
// 0063591a  6a00                 push 0
// 0063591c  6a00                 push 0
// 0063591e  e869bc0600           call 0x6a158c

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
