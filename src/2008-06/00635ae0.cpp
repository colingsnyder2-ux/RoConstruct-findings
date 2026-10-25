// from server: 100% by tester
// roc 2008-06 00635ae0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635ae0
//
// 00635ae0  55                   push ebp
// 00635ae1  8bec                 mov ebp, esp
// 00635ae3  6aff                 push -1
// 00635ae5  6860a07d00           push 0x7da060
// 00635aea  64a100000000         mov eax, dword ptr fs:[0]
// 00635af0  50                   push eax
// 00635af1  64892500000000       mov dword ptr fs:[0], esp
// 00635af8  51                   push ecx
// 00635af9  53                   push ebx
// 00635afa  56                   push esi
// 00635afb  57                   push edi
// 00635afc  8965f0               mov dword ptr [ebp - 0x10], esp
// 00635aff  8bf1                 mov esi, ecx
// 00635b01  6a14                 push 0x14
// 00635b03  c70600000000         mov dword ptr [esi], 0
// 00635b09  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00635b10  e80bae0600           call 0x6a0920
// 00635b15  83c404               add esp, 4
// 00635b18  85c0                 test eax, eax
// 00635b1a  7419                 je 0x635b35
// 00635b1c  b901000000           mov ecx, 1
// 00635b21  894804               mov dword ptr [eax + 4], ecx
// 00635b24  894808               mov dword ptr [eax + 8], ecx
// 00635b27  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00635b2a  c70070888400         mov dword ptr [eax], 0x848870
// 00635b30  89480c               mov dword ptr [eax + 0xc], ecx
// 00635b33  eb02                 jmp 0x635b37
// 00635b35  33c0                 xor eax, eax
// 00635b37  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00635b3a  8906                 mov dword ptr [esi], eax
// 00635b3c  5f                   pop edi
// 00635b3d  8bc6                 mov eax, esi
// 00635b3f  5e                   pop esi
// 00635b40  64890d00000000       mov dword ptr fs:[0], ecx
// 00635b47  5b                   pop ebx
// 00635b48  8be5                 mov esp, ebp
// 00635b4a  5d                   pop ebp
// 00635b4b  c20800               ret 8

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
