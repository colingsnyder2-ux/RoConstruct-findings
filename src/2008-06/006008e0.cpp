// from server: 100% by tester
// roc 2008-06 006008e0  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006008e0
//
// 006008e0  55                   push ebp
// 006008e1  8bec                 mov ebp, esp
// 006008e3  6aff                 push -1
// 006008e5  68c0817d00           push 0x7d81c0
// 006008ea  64a100000000         mov eax, dword ptr fs:[0]
// 006008f0  50                   push eax
// 006008f1  64892500000000       mov dword ptr fs:[0], esp
// 006008f8  51                   push ecx
// 006008f9  53                   push ebx
// 006008fa  56                   push esi
// 006008fb  57                   push edi
// 006008fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006008ff  8bf1                 mov esi, ecx
// 00600901  6a14                 push 0x14
// 00600903  c70600000000         mov dword ptr [esi], 0
// 00600909  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600910  e80b000a00           call 0x6a0920
// 00600915  83c404               add esp, 4
// 00600918  85c0                 test eax, eax
// 0060091a  7419                 je 0x600935
// 0060091c  b901000000           mov ecx, 1
// 00600921  894804               mov dword ptr [eax + 4], ecx
// 00600924  894808               mov dword ptr [eax + 8], ecx
// 00600927  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0060092a  c700fc1e8400         mov dword ptr [eax], 0x841efc
// 00600930  89480c               mov dword ptr [eax + 0xc], ecx
// 00600933  eb02                 jmp 0x600937
// 00600935  33c0                 xor eax, eax
// 00600937  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0060093a  8906                 mov dword ptr [esi], eax
// 0060093c  5f                   pop edi
// 0060093d  8bc6                 mov eax, esi
// 0060093f  5e                   pop esi
// 00600940  64890d00000000       mov dword ptr fs:[0], ecx
// 00600947  5b                   pop ebx
// 00600948  8be5                 mov esp, ebp
// 0060094a  5d                   pop ebp
// 0060094b  c20800               ret 8

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
