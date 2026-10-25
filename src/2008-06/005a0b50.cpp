// from server: 100% by tester
// roc 2008-06 005a0b50  unit: RBX::RootInstance  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0b50
//
// 005a0b50  55                   push ebp
// 005a0b51  8bec                 mov ebp, esp
// 005a0b53  6aff                 push -1
// 005a0b55  6830297d00           push 0x7d2930
// 005a0b5a  64a100000000         mov eax, dword ptr fs:[0]
// 005a0b60  50                   push eax
// 005a0b61  64892500000000       mov dword ptr fs:[0], esp
// 005a0b68  51                   push ecx
// 005a0b69  53                   push ebx
// 005a0b6a  56                   push esi
// 005a0b6b  57                   push edi
// 005a0b6c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a0b6f  8bf1                 mov esi, ecx
// 005a0b71  6a14                 push 0x14
// 005a0b73  c70600000000         mov dword ptr [esi], 0
// 005a0b79  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a0b80  e89bfd0f00           call 0x6a0920
// 005a0b85  83c404               add esp, 4
// 005a0b88  85c0                 test eax, eax
// 005a0b8a  7419                 je 0x5a0ba5
// 005a0b8c  b901000000           mov ecx, 1
// 005a0b91  894804               mov dword ptr [eax + 4], ecx
// 005a0b94  894808               mov dword ptr [eax + 8], ecx
// 005a0b97  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005a0b9a  c7004c368300         mov dword ptr [eax], 0x83364c
// 005a0ba0  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0ba3  eb02                 jmp 0x5a0ba7
// 005a0ba5  33c0                 xor eax, eax
// 005a0ba7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a0baa  8906                 mov dword ptr [esi], eax
// 005a0bac  5f                   pop edi
// 005a0bad  8bc6                 mov eax, esi
// 005a0baf  5e                   pop esi
// 005a0bb0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0bb7  5b                   pop ebx
// 005a0bb8  8be5                 mov esp, ebp
// 005a0bba  5d                   pop ebp
// 005a0bbb  c20800               ret 8

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
