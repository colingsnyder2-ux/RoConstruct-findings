// from server: 100% by tester
// roc 2008-06 004b2750  unit: RBX::VWeld::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2750
//
// 004b2750  55                   push ebp
// 004b2751  8bec                 mov ebp, esp
// 004b2753  6aff                 push -1
// 004b2755  6860877c00           push 0x7c8760
// 004b275a  64a100000000         mov eax, dword ptr fs:[0]
// 004b2760  50                   push eax
// 004b2761  64892500000000       mov dword ptr fs:[0], esp
// 004b2768  51                   push ecx
// 004b2769  53                   push ebx
// 004b276a  56                   push esi
// 004b276b  57                   push edi
// 004b276c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b276f  8bf1                 mov esi, ecx
// 004b2771  6a14                 push 0x14
// 004b2773  c70600000000         mov dword ptr [esi], 0
// 004b2779  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b2780  e89be11e00           call 0x6a0920
// 004b2785  83c404               add esp, 4
// 004b2788  85c0                 test eax, eax
// 004b278a  7419                 je 0x4b27a5
// 004b278c  b901000000           mov ecx, 1
// 004b2791  894804               mov dword ptr [eax + 4], ecx
// 004b2794  894808               mov dword ptr [eax + 8], ecx
// 004b2797  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b279a  c700f44b8200         mov dword ptr [eax], 0x824bf4
// 004b27a0  89480c               mov dword ptr [eax + 0xc], ecx
// 004b27a3  eb02                 jmp 0x4b27a7
// 004b27a5  33c0                 xor eax, eax
// 004b27a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b27aa  8906                 mov dword ptr [esi], eax
// 004b27ac  5f                   pop edi
// 004b27ad  8bc6                 mov eax, esi
// 004b27af  5e                   pop esi
// 004b27b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004b27b7  5b                   pop ebx
// 004b27b8  8be5                 mov esp, ebp
// 004b27ba  5d                   pop ebp
// 004b27bb  c20800               ret 8

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
