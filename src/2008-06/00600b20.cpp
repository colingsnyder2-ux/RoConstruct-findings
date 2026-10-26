// from server: 100% by tester
// roc 2008-06 00600b20  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600b20
//
// 00600b20  55                   push ebp
// 00600b21  8bec                 mov ebp, esp
// 00600b23  6aff                 push -1
// 00600b25  6800827d00           push 0x7d8200
// 00600b2a  64a100000000         mov eax, dword ptr fs:[0]
// 00600b30  50                   push eax
// 00600b31  64892500000000       mov dword ptr fs:[0], esp
// 00600b38  51                   push ecx
// 00600b39  53                   push ebx
// 00600b3a  56                   push esi
// 00600b3b  57                   push edi
// 00600b3c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600b3f  8bf1                 mov esi, ecx
// 00600b41  6a14                 push 0x14
// 00600b43  c70600000000         mov dword ptr [esi], 0
// 00600b49  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600b50  e8cbfd0900           call 0x6a0920
// 00600b55  83c404               add esp, 4
// 00600b58  85c0                 test eax, eax
// 00600b5a  7419                 je 0x600b75
// 00600b5c  b901000000           mov ecx, 1
// 00600b61  894804               mov dword ptr [eax + 4], ecx
// 00600b64  894808               mov dword ptr [eax + 8], ecx
// 00600b67  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600b6a  c7004c1f8400         mov dword ptr [eax], 0x841f4c
// 00600b70  89480c               mov dword ptr [eax + 0xc], ecx
// 00600b73  eb02                 jmp 0x600b77
// 00600b75  33c0                 xor eax, eax
// 00600b77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600b7a  8906                 mov dword ptr [esi], eax
// 00600b7c  5f                   pop edi
// 00600b7d  8bc6                 mov eax, esi
// 00600b7f  5e                   pop esi
// 00600b80  64890d00000000       mov dword ptr fs:[0], ecx
// 00600b87  5b                   pop ebx
// 00600b88  8be5                 mov esp, ebp
// 00600b8a  5d                   pop ebp
// 00600b8b  c20800               ret 8
// 00600b8e  8b5508               mov edx, dword ptr [ebp + 8]
// 00600b91  52                   push edx
// 00600b92  8d4d0c               lea ecx, [ebp + 0xc]
// 00600b95  e89652e0ff           call 0x405e30
// 00600b9a  6a00                 push 0
// 00600b9c  6a00                 push 0
// 00600b9e  e8e9090a00           call 0x6a158c

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
