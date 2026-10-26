// from server: 100% by tester
// roc 2008-06 0048f0e0  unit: RBX::VSpawnLocation::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f0e0
//
// 0048f0e0  55                   push ebp
// 0048f0e1  8bec                 mov ebp, esp
// 0048f0e3  6aff                 push -1
// 0048f0e5  6880637c00           push 0x7c6380
// 0048f0ea  64a100000000         mov eax, dword ptr fs:[0]
// 0048f0f0  50                   push eax
// 0048f0f1  64892500000000       mov dword ptr fs:[0], esp
// 0048f0f8  51                   push ecx
// 0048f0f9  53                   push ebx
// 0048f0fa  56                   push esi
// 0048f0fb  57                   push edi
// 0048f0fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048f0ff  8bf1                 mov esi, ecx
// 0048f101  6a14                 push 0x14
// 0048f103  c70600000000         mov dword ptr [esi], 0
// 0048f109  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048f110  e80b182100           call 0x6a0920
// 0048f115  83c404               add esp, 4
// 0048f118  85c0                 test eax, eax
// 0048f11a  7419                 je 0x48f135
// 0048f11c  b901000000           mov ecx, 1
// 0048f121  894804               mov dword ptr [eax + 4], ecx
// 0048f124  894808               mov dword ptr [eax + 8], ecx
// 0048f127  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048f12a  c700e8178200         mov dword ptr [eax], 0x8217e8
// 0048f130  89480c               mov dword ptr [eax + 0xc], ecx
// 0048f133  eb02                 jmp 0x48f137
// 0048f135  33c0                 xor eax, eax
// 0048f137  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048f13a  8906                 mov dword ptr [esi], eax
// 0048f13c  5f                   pop edi
// 0048f13d  8bc6                 mov eax, esi
// 0048f13f  5e                   pop esi
// 0048f140  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f147  5b                   pop ebx
// 0048f148  8be5                 mov esp, ebp
// 0048f14a  5d                   pop ebp
// 0048f14b  c20800               ret 8
// 0048f14e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048f151  52                   push edx
// 0048f152  8d4d0c               lea ecx, [ebp + 0xc]
// 0048f155  e8d66cf7ff           call 0x405e30
// 0048f15a  6a00                 push 0
// 0048f15c  6a00                 push 0
// 0048f15e  e829242100           call 0x6a158c

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
