// from server: 100% by tester
// roc 2008-06 005c31b0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c31b0
//
// 005c31b0  55                   push ebp
// 005c31b1  8bec                 mov ebp, esp
// 005c31b3  6aff                 push -1
// 005c31b5  68a0467d00           push 0x7d46a0
// 005c31ba  64a100000000         mov eax, dword ptr fs:[0]
// 005c31c0  50                   push eax
// 005c31c1  64892500000000       mov dword ptr fs:[0], esp
// 005c31c8  51                   push ecx
// 005c31c9  53                   push ebx
// 005c31ca  56                   push esi
// 005c31cb  57                   push edi
// 005c31cc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c31cf  8bf1                 mov esi, ecx
// 005c31d1  6a14                 push 0x14
// 005c31d3  c70600000000         mov dword ptr [esi], 0
// 005c31d9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c31e0  e83bd70d00           call 0x6a0920
// 005c31e5  83c404               add esp, 4
// 005c31e8  85c0                 test eax, eax
// 005c31ea  7419                 je 0x5c3205
// 005c31ec  b901000000           mov ecx, 1
// 005c31f1  894804               mov dword ptr [eax + 4], ecx
// 005c31f4  894808               mov dword ptr [eax + 8], ecx
// 005c31f7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c31fa  c700b48a8300         mov dword ptr [eax], 0x838ab4
// 005c3200  89480c               mov dword ptr [eax + 0xc], ecx
// 005c3203  eb02                 jmp 0x5c3207
// 005c3205  33c0                 xor eax, eax
// 005c3207  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c320a  8906                 mov dword ptr [esi], eax
// 005c320c  5f                   pop edi
// 005c320d  8bc6                 mov eax, esi
// 005c320f  5e                   pop esi
// 005c3210  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3217  5b                   pop ebx
// 005c3218  8be5                 mov esp, ebp
// 005c321a  5d                   pop ebp
// 005c321b  c20800               ret 8

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
