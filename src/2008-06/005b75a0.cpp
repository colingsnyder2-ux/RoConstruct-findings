// from server: 100% by tester
// roc 2008-06 005b75a0  unit: P8CRenderSettings::?$GetSetImpl  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b75a0
//
// 005b75a0  55                   push ebp
// 005b75a1  8bec                 mov ebp, esp
// 005b75a3  6aff                 push -1
// 005b75a5  68f0397d00           push 0x7d39f0
// 005b75aa  64a100000000         mov eax, dword ptr fs:[0]
// 005b75b0  50                   push eax
// 005b75b1  64892500000000       mov dword ptr fs:[0], esp
// 005b75b8  51                   push ecx
// 005b75b9  53                   push ebx
// 005b75ba  56                   push esi
// 005b75bb  57                   push edi
// 005b75bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005b75bf  8bf1                 mov esi, ecx
// 005b75c1  6a14                 push 0x14
// 005b75c3  c70600000000         mov dword ptr [esi], 0
// 005b75c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005b75d0  e84b930e00           call 0x6a0920
// 005b75d5  83c404               add esp, 4
// 005b75d8  85c0                 test eax, eax
// 005b75da  7419                 je 0x5b75f5
// 005b75dc  b901000000           mov ecx, 1
// 005b75e1  894804               mov dword ptr [eax + 4], ecx
// 005b75e4  894808               mov dword ptr [eax + 8], ecx
// 005b75e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b75ea  c700e8758300         mov dword ptr [eax], 0x8375e8
// 005b75f0  89480c               mov dword ptr [eax + 0xc], ecx
// 005b75f3  eb02                 jmp 0x5b75f7
// 005b75f5  33c0                 xor eax, eax
// 005b75f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005b75fa  8906                 mov dword ptr [esi], eax
// 005b75fc  5f                   pop edi
// 005b75fd  8bc6                 mov eax, esi
// 005b75ff  5e                   pop esi
// 005b7600  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7607  5b                   pop ebx
// 005b7608  8be5                 mov esp, ebp
// 005b760a  5d                   pop ebp
// 005b760b  c20800               ret 8

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
