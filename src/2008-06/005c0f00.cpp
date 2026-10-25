// from server: 100% by tester
// roc 2008-06 005c0f00  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0f00
//
// 005c0f00  55                   push ebp
// 005c0f01  8bec                 mov ebp, esp
// 005c0f03  6aff                 push -1
// 005c0f05  6880457d00           push 0x7d4580
// 005c0f0a  64a100000000         mov eax, dword ptr fs:[0]
// 005c0f10  50                   push eax
// 005c0f11  64892500000000       mov dword ptr fs:[0], esp
// 005c0f18  51                   push ecx
// 005c0f19  53                   push ebx
// 005c0f1a  56                   push esi
// 005c0f1b  57                   push edi
// 005c0f1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c0f1f  8bf1                 mov esi, ecx
// 005c0f21  6a14                 push 0x14
// 005c0f23  c70600000000         mov dword ptr [esi], 0
// 005c0f29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c0f30  e8ebf90d00           call 0x6a0920
// 005c0f35  83c404               add esp, 4
// 005c0f38  85c0                 test eax, eax
// 005c0f3a  7419                 je 0x5c0f55
// 005c0f3c  b901000000           mov ecx, 1
// 005c0f41  894804               mov dword ptr [eax + 4], ecx
// 005c0f44  894808               mov dword ptr [eax + 8], ecx
// 005c0f47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c0f4a  c7006c888300         mov dword ptr [eax], 0x83886c
// 005c0f50  89480c               mov dword ptr [eax + 0xc], ecx
// 005c0f53  eb02                 jmp 0x5c0f57
// 005c0f55  33c0                 xor eax, eax
// 005c0f57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c0f5a  8906                 mov dword ptr [esi], eax
// 005c0f5c  5f                   pop edi
// 005c0f5d  8bc6                 mov eax, esi
// 005c0f5f  5e                   pop esi
// 005c0f60  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0f67  5b                   pop ebx
// 005c0f68  8be5                 mov esp, ebp
// 005c0f6a  5d                   pop ebp
// 005c0f6b  c20800               ret 8

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
