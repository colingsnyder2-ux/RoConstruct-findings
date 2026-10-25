// from server: 100% by tester
// roc 2008-06 00600cd0  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600cd0
//
// 00600cd0  55                   push ebp
// 00600cd1  8bec                 mov ebp, esp
// 00600cd3  6aff                 push -1
// 00600cd5  6830827d00           push 0x7d8230
// 00600cda  64a100000000         mov eax, dword ptr fs:[0]
// 00600ce0  50                   push eax
// 00600ce1  64892500000000       mov dword ptr fs:[0], esp
// 00600ce8  51                   push ecx
// 00600ce9  53                   push ebx
// 00600cea  56                   push esi
// 00600ceb  57                   push edi
// 00600cec  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600cef  8bf1                 mov esi, ecx
// 00600cf1  6a14                 push 0x14
// 00600cf3  c70600000000         mov dword ptr [esi], 0
// 00600cf9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600d00  e81bfc0900           call 0x6a0920
// 00600d05  83c404               add esp, 4
// 00600d08  85c0                 test eax, eax
// 00600d0a  7419                 je 0x600d25
// 00600d0c  b901000000           mov ecx, 1
// 00600d11  894804               mov dword ptr [eax + 4], ecx
// 00600d14  894808               mov dword ptr [eax + 8], ecx
// 00600d17  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600d1a  c700881f8400         mov dword ptr [eax], 0x841f88
// 00600d20  89480c               mov dword ptr [eax + 0xc], ecx
// 00600d23  eb02                 jmp 0x600d27
// 00600d25  33c0                 xor eax, eax
// 00600d27  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600d2a  8906                 mov dword ptr [esi], eax
// 00600d2c  5f                   pop edi
// 00600d2d  8bc6                 mov eax, esi
// 00600d2f  5e                   pop esi
// 00600d30  64890d00000000       mov dword ptr fs:[0], ecx
// 00600d37  5b                   pop ebx
// 00600d38  8be5                 mov esp, ebp
// 00600d3a  5d                   pop ebp
// 00600d3b  c20800               ret 8

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
