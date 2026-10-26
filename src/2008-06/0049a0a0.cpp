// from server: 100% by tester
// roc 2008-06 0049a0a0  unit: RBX::VInstance::?$SignalDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a0a0
//
// 0049a0a0  55                   push ebp
// 0049a0a1  8bec                 mov ebp, esp
// 0049a0a3  6aff                 push -1
// 0049a0a5  68e06f7c00           push 0x7c6fe0
// 0049a0aa  64a100000000         mov eax, dword ptr fs:[0]
// 0049a0b0  50                   push eax
// 0049a0b1  64892500000000       mov dword ptr fs:[0], esp
// 0049a0b8  51                   push ecx
// 0049a0b9  53                   push ebx
// 0049a0ba  56                   push esi
// 0049a0bb  57                   push edi
// 0049a0bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049a0bf  8bf1                 mov esi, ecx
// 0049a0c1  6a14                 push 0x14
// 0049a0c3  c70600000000         mov dword ptr [esi], 0
// 0049a0c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049a0d0  e84b682000           call 0x6a0920
// 0049a0d5  83c404               add esp, 4
// 0049a0d8  85c0                 test eax, eax
// 0049a0da  7419                 je 0x49a0f5
// 0049a0dc  b901000000           mov ecx, 1
// 0049a0e1  894804               mov dword ptr [eax + 4], ecx
// 0049a0e4  894808               mov dword ptr [eax + 8], ecx
// 0049a0e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049a0ea  c70020288200         mov dword ptr [eax], 0x822820
// 0049a0f0  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a0f3  eb02                 jmp 0x49a0f7
// 0049a0f5  33c0                 xor eax, eax
// 0049a0f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049a0fa  8906                 mov dword ptr [esi], eax
// 0049a0fc  5f                   pop edi
// 0049a0fd  8bc6                 mov eax, esi
// 0049a0ff  5e                   pop esi
// 0049a100  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a107  5b                   pop ebx
// 0049a108  8be5                 mov esp, ebp
// 0049a10a  5d                   pop ebp
// 0049a10b  c20800               ret 8
// 0049a10e  8b5508               mov edx, dword ptr [ebp + 8]
// 0049a111  52                   push edx
// 0049a112  8d4d0c               lea ecx, [ebp + 0xc]
// 0049a115  e816bdf6ff           call 0x405e30
// 0049a11a  6a00                 push 0
// 0049a11c  6a00                 push 0
// 0049a11e  e869742000           call 0x6a158c

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
