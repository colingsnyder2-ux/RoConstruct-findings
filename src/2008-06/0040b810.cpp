// from server: 100% by tester
// roc 2008-06 0040b810  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b810
//
// 0040b810  55                   push ebp
// 00600a01  8bec                 mov ebp, esp
// 00600a03  6aff                 push -1
// 00600a05  68e0817d00           push 0x7d81e0
// 00600a0a  64a100000000         mov eax, dword ptr fs:[0]
// 00600a10  50                   push eax
// 00600a11  64892500000000       mov dword ptr fs:[0], esp
// 00600a18  51                   push ecx
// 00600a19  53                   push ebx
// 00600a1a  56                   push esi
// 00600a1b  57                   push edi
// 00600a1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600a1f  8bf1                 mov esi, ecx
// 00600a21  6a14                 push 0x14
// 00600a23  c70600000000         mov dword ptr [esi], 0
// 00600a29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600a30  e8ebfe0900           call 0x6a0920
// 00600a35  83c404               add esp, 4
// 00600a38  85c0                 test eax, eax
// 00600a3a  7419                 je 0x600a55
// 00600a3c  b901000000           mov ecx, 1
// 00600a41  894804               mov dword ptr [eax + 4], ecx
// 00600a44  894808               mov dword ptr [eax + 8], ecx
// 00600a47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600a4a  c700241f8400         mov dword ptr [eax], 0x841f24
// 00600a50  89480c               mov dword ptr [eax + 0xc], ecx
// 00600a53  eb02                 jmp 0x600a57
// 00600a55  33c0                 xor eax, eax
// 00600a57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600a5a  8906                 mov dword ptr [esi], eax
// 00600a5c  5f                   pop edi
// 00600a5d  8bc6                 mov eax, esi
// 00600a5f  5e                   pop esi
// 00600a60  64890d00000000       mov dword ptr fs:[0], ecx
// 00600a67  5b                   pop ebx
// 00600a68  8be5                 mov esp, ebp
// 00600a6a  5d                   pop ebp
// 00600a6b  c20800               ret 8
// 00600a6e  8b5508               mov edx, dword ptr [ebp + 8]
// 00600a71  52                   push edx
// 00600a72  8d4d0c               lea ecx, [ebp + 0xc]
// 00600a75  e8b653e0ff           call 0x405e30
// 00600a7a  6a00                 push 0
// 00600a7c  6a00                 push 0
// 00600a7e  e8090b0a00           call 0x6a158c

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
