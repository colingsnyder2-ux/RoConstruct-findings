// from server: 100% by tester
// roc 2008-06 004b29c0  unit: RBX::VGlue::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b29c0
//
// 004b29c0  55                   push ebp
// 004b29c1  8bec                 mov ebp, esp
// 004b29c3  6aff                 push -1
// 004b29c5  6870877c00           push 0x7c8770
// 004b29ca  64a100000000         mov eax, dword ptr fs:[0]
// 004b29d0  50                   push eax
// 004b29d1  64892500000000       mov dword ptr fs:[0], esp
// 004b29d8  51                   push ecx
// 004b29d9  53                   push ebx
// 004b29da  56                   push esi
// 004b29db  57                   push edi
// 004b29dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b29df  8bf1                 mov esi, ecx
// 004b29e1  6a14                 push 0x14
// 004b29e3  c70600000000         mov dword ptr [esi], 0
// 004b29e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b29f0  e82bdf1e00           call 0x6a0920
// 004b29f5  83c404               add esp, 4
// 004b29f8  85c0                 test eax, eax
// 004b29fa  7419                 je 0x4b2a15
// 004b29fc  b901000000           mov ecx, 1
// 004b2a01  894804               mov dword ptr [eax + 4], ecx
// 004b2a04  894808               mov dword ptr [eax + 8], ecx
// 004b2a07  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b2a0a  c700104c8200         mov dword ptr [eax], 0x824c10
// 004b2a10  89480c               mov dword ptr [eax + 0xc], ecx
// 004b2a13  eb02                 jmp 0x4b2a17
// 004b2a15  33c0                 xor eax, eax
// 004b2a17  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b2a1a  8906                 mov dword ptr [esi], eax
// 004b2a1c  5f                   pop edi
// 004b2a1d  8bc6                 mov eax, esi
// 004b2a1f  5e                   pop esi
// 004b2a20  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2a27  5b                   pop ebx
// 004b2a28  8be5                 mov esp, ebp
// 004b2a2a  5d                   pop ebp
// 004b2a2b  c20800               ret 8
// 004b2a2e  8b5508               mov edx, dword ptr [ebp + 8]
// 004b2a31  52                   push edx
// 004b2a32  8d4d0c               lea ecx, [ebp + 0xc]
// 004b2a35  e8f633f5ff           call 0x405e30
// 004b2a3a  6a00                 push 0
// 004b2a3c  6a00                 push 0
// 004b2a3e  e849eb1e00           call 0x6a158c

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
