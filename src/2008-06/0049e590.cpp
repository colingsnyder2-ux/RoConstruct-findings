// from server: 100% by king_originala
// roc 2008-06 0049e590  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e590
//
// 0049e590  55                   push ebp
// 0049e591  8bec                 mov ebp, esp
// 0049e593  6aff                 push -1
// 0049e595  68d0757c00           push 0x7c75d0
// 0049e59a  64a100000000         mov eax, dword ptr fs:[0]
// 0049e5a0  50                   push eax
// 0049e5a1  64892500000000       mov dword ptr fs:[0], esp
// 0049e5a8  51                   push ecx
// 0049e5a9  53                   push ebx
// 0049e5aa  56                   push esi
// 0049e5ab  57                   push edi
// 0049e5ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049e5af  8bf1                 mov esi, ecx
// 0049e5b1  6a14                 push 0x14
// 0049e5b3  c70600000000         mov dword ptr [esi], 0
// 0049e5b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049e5c0  e85b232000           call 0x6a0920
// 0049e5c5  83c404               add esp, 4
// 0049e5c8  85c0                 test eax, eax
// 0049e5ca  7419                 je 0x49e5e5
// 0049e5cc  b901000000           mov ecx, 1
// 0049e5d1  894804               mov dword ptr [eax + 4], ecx
// 0049e5d4  894808               mov dword ptr [eax + 8], ecx
// 0049e5d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049e5da  c700c42c8200         mov dword ptr [eax], 0x822cc4
// 0049e5e0  89480c               mov dword ptr [eax + 0xc], ecx
// 0049e5e3  eb02                 jmp 0x49e5e7
// 0049e5e5  33c0                 xor eax, eax
// 0049e5e7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049e5ea  8906                 mov dword ptr [esi], eax
// 0049e5ec  5f                   pop edi
// 0049e5ed  8bc6                 mov eax, esi
// 0049e5ef  5e                   pop esi
// 0049e5f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e5f7  5b                   pop ebx
// 0049e5f8  8be5                 mov esp, ebp
// 0049e5fa  5d                   pop ebp
// 0049e5fb  c20800               ret 8
// 0049e5fe  8b5508               mov edx, dword ptr [ebp + 8]
// 0049e601  52                   push edx
// 0049e602  8d4d0c               lea ecx, [ebp + 0xc]
// 0049e605  e82678f6ff           call 0x405e30
// 0049e60a  6a00                 push 0
// 0049e60c  6a00                 push 0
// 0049e60e  e8792f2000           call 0x6a158c

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
