// from server: 100% by tester
// roc 2008-06 00600c40  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600c40
//
// 00600c40  55                   push ebp
// 00600c41  8bec                 mov ebp, esp
// 00600c43  6aff                 push -1
// 00600c45  6820827d00           push 0x7d8220
// 00600c4a  64a100000000         mov eax, dword ptr fs:[0]
// 00600c50  50                   push eax
// 00600c51  64892500000000       mov dword ptr fs:[0], esp
// 00600c58  51                   push ecx
// 00600c59  53                   push ebx
// 00600c5a  56                   push esi
// 00600c5b  57                   push edi
// 00600c5c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600c5f  8bf1                 mov esi, ecx
// 00600c61  6a14                 push 0x14
// 00600c63  c70600000000         mov dword ptr [esi], 0
// 00600c69  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600c70  e8abfc0900           call 0x6a0920
// 00600c75  83c404               add esp, 4
// 00600c78  85c0                 test eax, eax
// 00600c7a  7419                 je 0x600c95
// 00600c7c  b901000000           mov ecx, 1
// 00600c81  894804               mov dword ptr [eax + 4], ecx
// 00600c84  894808               mov dword ptr [eax + 8], ecx
// 00600c87  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600c8a  c700741f8400         mov dword ptr [eax], 0x841f74
// 00600c90  89480c               mov dword ptr [eax + 0xc], ecx
// 00600c93  eb02                 jmp 0x600c97
// 00600c95  33c0                 xor eax, eax
// 00600c97  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600c9a  8906                 mov dword ptr [esi], eax
// 00600c9c  5f                   pop edi
// 00600c9d  8bc6                 mov eax, esi
// 00600c9f  5e                   pop esi
// 00600ca0  64890d00000000       mov dword ptr fs:[0], ecx
// 00600ca7  5b                   pop ebx
// 00600ca8  8be5                 mov esp, ebp
// 00600caa  5d                   pop ebp
// 00600cab  c20800               ret 8
// 00600cae  8b5508               mov edx, dword ptr [ebp + 8]
// 00600cb1  52                   push edx
// 00600cb2  8d4d0c               lea ecx, [ebp + 0xc]
// 00600cb5  e87651e0ff           call 0x405e30
// 00600cba  6a00                 push 0
// 00600cbc  6a00                 push 0
// 00600cbe  e8c9080a00           call 0x6a158c

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
