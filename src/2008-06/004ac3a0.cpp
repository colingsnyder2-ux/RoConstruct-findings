// from server: 100% by tester
// roc 2008-06 004ac3a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac3a0
//
// 004ac3a0  55                   push ebp
// 004ac3a1  8bec                 mov ebp, esp
// 004ac3a3  6aff                 push -1
// 004ac3a5  6870837c00           push 0x7c8370
// 004ac3aa  64a100000000         mov eax, dword ptr fs:[0]
// 004ac3b0  50                   push eax
// 004ac3b1  64892500000000       mov dword ptr fs:[0], esp
// 004ac3b8  51                   push ecx
// 004ac3b9  53                   push ebx
// 004ac3ba  56                   push esi
// 004ac3bb  57                   push edi
// 004ac3bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac3bf  8bf1                 mov esi, ecx
// 004ac3c1  6a14                 push 0x14
// 004ac3c3  c70600000000         mov dword ptr [esi], 0
// 004ac3c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac3d0  e84b451f00           call 0x6a0920
// 004ac3d5  83c404               add esp, 4
// 004ac3d8  85c0                 test eax, eax
// 004ac3da  7419                 je 0x4ac3f5
// 004ac3dc  b901000000           mov ecx, 1
// 004ac3e1  894804               mov dword ptr [eax + 4], ecx
// 004ac3e4  894808               mov dword ptr [eax + 8], ecx
// 004ac3e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac3ea  c7006c478200         mov dword ptr [eax], 0x82476c
// 004ac3f0  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac3f3  eb02                 jmp 0x4ac3f7
// 004ac3f5  33c0                 xor eax, eax
// 004ac3f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac3fa  8906                 mov dword ptr [esi], eax
// 004ac3fc  5f                   pop edi
// 004ac3fd  8bc6                 mov eax, esi
// 004ac3ff  5e                   pop esi
// 004ac400  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac407  5b                   pop ebx
// 004ac408  8be5                 mov esp, ebp
// 004ac40a  5d                   pop ebp
// 004ac40b  c20800               ret 8
// 004ac40e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac411  52                   push edx
// 004ac412  8d4d0c               lea ecx, [ebp + 0xc]
// 004ac415  e8169af5ff           call 0x405e30
// 004ac41a  6a00                 push 0
// 004ac41c  6a00                 push 0
// 004ac41e  e869511f00           call 0x6a158c

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
