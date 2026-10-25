// from server: 100% by tester
// roc 2008-06 004d8b50  unit: RBX::ViewBase  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8b50
//
// 004d8b50  55                   push ebp
// 004d8b51  8bec                 mov ebp, esp
// 004d8b53  6aff                 push -1
// 004d8b55  68e09c7c00           push 0x7c9ce0
// 004d8b5a  64a100000000         mov eax, dword ptr fs:[0]
// 004d8b60  50                   push eax
// 004d8b61  64892500000000       mov dword ptr fs:[0], esp
// 004d8b68  51                   push ecx
// 004d8b69  53                   push ebx
// 004d8b6a  56                   push esi
// 004d8b6b  57                   push edi
// 004d8b6c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004d8b6f  8bf1                 mov esi, ecx
// 004d8b71  6a14                 push 0x14
// 004d8b73  c70600000000         mov dword ptr [esi], 0
// 004d8b79  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004d8b80  e89b7d1c00           call 0x6a0920
// 004d8b85  83c404               add esp, 4
// 004d8b88  85c0                 test eax, eax
// 004d8b8a  7419                 je 0x4d8ba5
// 004d8b8c  b901000000           mov ecx, 1
// 004d8b91  894804               mov dword ptr [eax + 4], ecx
// 004d8b94  894808               mov dword ptr [eax + 8], ecx
// 004d8b97  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004d8b9a  c7005c6c8200         mov dword ptr [eax], 0x826c5c
// 004d8ba0  89480c               mov dword ptr [eax + 0xc], ecx
// 004d8ba3  eb02                 jmp 0x4d8ba7
// 004d8ba5  33c0                 xor eax, eax
// 004d8ba7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004d8baa  8906                 mov dword ptr [esi], eax
// 004d8bac  5f                   pop edi
// 004d8bad  8bc6                 mov eax, esi
// 004d8baf  5e                   pop esi
// 004d8bb0  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8bb7  5b                   pop ebx
// 004d8bb8  8be5                 mov esp, ebp
// 004d8bba  5d                   pop ebp
// 004d8bbb  c20800               ret 8

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
