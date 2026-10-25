// from server: 100% by tester
// roc 2008-06 00600df0  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600df0
//
// 00600df0  55                   push ebp
// 00600df1  8bec                 mov ebp, esp
// 00600df3  6aff                 push -1
// 00600df5  6860827d00           push 0x7d8260
// 00600dfa  64a100000000         mov eax, dword ptr fs:[0]
// 00600e00  50                   push eax
// 00600e01  64892500000000       mov dword ptr fs:[0], esp
// 00600e08  51                   push ecx
// 00600e09  53                   push ebx
// 00600e0a  56                   push esi
// 00600e0b  57                   push edi
// 00600e0c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600e0f  8bf1                 mov esi, ecx
// 00600e11  6a14                 push 0x14
// 00600e13  c70600000000         mov dword ptr [esi], 0
// 00600e19  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600e20  e8fbfa0900           call 0x6a0920
// 00600e25  83c404               add esp, 4
// 00600e28  85c0                 test eax, eax
// 00600e2a  7419                 je 0x600e45
// 00600e2c  b901000000           mov ecx, 1
// 00600e31  894804               mov dword ptr [eax + 4], ecx
// 00600e34  894808               mov dword ptr [eax + 8], ecx
// 00600e37  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600e3a  c7009c1f8400         mov dword ptr [eax], 0x841f9c
// 00600e40  89480c               mov dword ptr [eax + 0xc], ecx
// 00600e43  eb02                 jmp 0x600e47
// 00600e45  33c0                 xor eax, eax
// 00600e47  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600e4a  8906                 mov dword ptr [esi], eax
// 00600e4c  5f                   pop edi
// 00600e4d  8bc6                 mov eax, esi
// 00600e4f  5e                   pop esi
// 00600e50  64890d00000000       mov dword ptr fs:[0], ecx
// 00600e57  5b                   pop ebx
// 00600e58  8be5                 mov esp, ebp
// 00600e5a  5d                   pop ebp
// 00600e5b  c20800               ret 8

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
