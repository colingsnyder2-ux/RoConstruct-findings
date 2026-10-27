// from server: 100% by king_originala
// roc 2008-06 004ac430  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac430
//
// 004ac430  55                   push ebp
// 004ac431  8bec                 mov ebp, esp
// 004ac433  6aff                 push -1
// 004ac435  6880837c00           push 0x7c8380
// 004ac43a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac440  50                   push eax
// 004ac441  64892500000000       mov dword ptr fs:[0], esp
// 004ac448  51                   push ecx
// 004ac449  53                   push ebx
// 004ac44a  56                   push esi
// 004ac44b  57                   push edi
// 004ac44c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac44f  8bf1                 mov esi, ecx
// 004ac451  6a14                 push 0x14
// 004ac453  c70600000000         mov dword ptr [esi], 0
// 004ac459  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac460  e8bb441f00           call 0x6a0920
// 004ac465  83c404               add esp, 4
// 004ac468  85c0                 test eax, eax
// 004ac46a  7419                 je 0x4ac485
// 004ac46c  b901000000           mov ecx, 1
// 004ac471  894804               mov dword ptr [eax + 4], ecx
// 004ac474  894808               mov dword ptr [eax + 8], ecx
// 004ac477  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac47a  c70080478200         mov dword ptr [eax], 0x824780
// 004ac480  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac483  eb02                 jmp 0x4ac487
// 004ac485  33c0                 xor eax, eax
// 004ac487  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac48a  8906                 mov dword ptr [esi], eax
// 004ac48c  5f                   pop edi
// 004ac48d  8bc6                 mov eax, esi
// 004ac48f  5e                   pop esi
// 004ac490  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac497  5b                   pop ebx
// 004ac498  8be5                 mov esp, ebp
// 004ac49a  5d                   pop ebp
// 004ac49b  c20800               ret 8
// 004ac49e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac4a1  52                   push edx
// 004ac4a2  8d4d0c               lea ecx, [ebp + 0xc]
// 004ac4a5  e88699f5ff           call 0x405e30
// 004ac4aa  6a00                 push 0
// 004ac4ac  6a00                 push 0
// 004ac4ae  e8d9501f00           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



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
