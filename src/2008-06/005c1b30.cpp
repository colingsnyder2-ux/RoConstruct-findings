// from server: 100% by tester
// roc 2008-06 005c1b30  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1b30
//
// 005c1b30  55                   push ebp
// 005c1b31  8bec                 mov ebp, esp
// 005c1b33  6aff                 push -1
// 005c1b35  68d0457d00           push 0x7d45d0
// 005c1b3a  64a100000000         mov eax, dword ptr fs:[0]
// 005c1b40  50                   push eax
// 005c1b41  64892500000000       mov dword ptr fs:[0], esp
// 005c1b48  51                   push ecx
// 005c1b49  53                   push ebx
// 005c1b4a  56                   push esi
// 005c1b4b  57                   push edi
// 005c1b4c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c1b4f  8bf1                 mov esi, ecx
// 005c1b51  6a14                 push 0x14
// 005c1b53  c70600000000         mov dword ptr [esi], 0
// 005c1b59  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c1b60  e8bbed0d00           call 0x6a0920
// 005c1b65  83c404               add esp, 4
// 005c1b68  85c0                 test eax, eax
// 005c1b6a  7419                 je 0x5c1b85
// 005c1b6c  b901000000           mov ecx, 1
// 005c1b71  894804               mov dword ptr [eax + 4], ecx
// 005c1b74  894808               mov dword ptr [eax + 8], ecx
// 005c1b77  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c1b7a  c700f8888300         mov dword ptr [eax], 0x8388f8
// 005c1b80  89480c               mov dword ptr [eax + 0xc], ecx
// 005c1b83  eb02                 jmp 0x5c1b87
// 005c1b85  33c0                 xor eax, eax
// 005c1b87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c1b8a  8906                 mov dword ptr [esi], eax
// 005c1b8c  5f                   pop edi
// 005c1b8d  8bc6                 mov eax, esi
// 005c1b8f  5e                   pop esi
// 005c1b90  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1b97  5b                   pop ebx
// 005c1b98  8be5                 mov esp, ebp
// 005c1b9a  5d                   pop ebp
// 005c1b9b  c20800               ret 8
// 005c1b9e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c1ba1  52                   push edx
// 005c1ba2  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1ba5  e88642e4ff           call 0x405e30
// 005c1baa  6a00                 push 0
// 005c1bac  6a00                 push 0
// 005c1bae  e8d9f90d00           call 0x6a158c

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
