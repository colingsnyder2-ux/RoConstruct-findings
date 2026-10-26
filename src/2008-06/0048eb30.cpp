// from server: 100% by tester
// roc 2008-06 0048eb30  unit: RBX::VStarterPackService::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048eb30
//
// 0048eb30  55                   push ebp
// 0048eb31  8bec                 mov ebp, esp
// 0048eb33  6aff                 push -1
// 0048eb35  6860637c00           push 0x7c6360
// 0048eb3a  64a100000000         mov eax, dword ptr fs:[0]
// 0048eb40  50                   push eax
// 0048eb41  64892500000000       mov dword ptr fs:[0], esp
// 0048eb48  51                   push ecx
// 0048eb49  53                   push ebx
// 0048eb4a  56                   push esi
// 0048eb4b  57                   push edi
// 0048eb4c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048eb4f  8bf1                 mov esi, ecx
// 0048eb51  6a14                 push 0x14
// 0048eb53  c70600000000         mov dword ptr [esi], 0
// 0048eb59  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048eb60  e8bb1d2100           call 0x6a0920
// 0048eb65  83c404               add esp, 4
// 0048eb68  85c0                 test eax, eax
// 0048eb6a  7419                 je 0x48eb85
// 0048eb6c  b901000000           mov ecx, 1
// 0048eb71  894804               mov dword ptr [eax + 4], ecx
// 0048eb74  894808               mov dword ptr [eax + 8], ecx
// 0048eb77  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048eb7a  c700a8178200         mov dword ptr [eax], 0x8217a8
// 0048eb80  89480c               mov dword ptr [eax + 0xc], ecx
// 0048eb83  eb02                 jmp 0x48eb87
// 0048eb85  33c0                 xor eax, eax
// 0048eb87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048eb8a  8906                 mov dword ptr [esi], eax
// 0048eb8c  5f                   pop edi
// 0048eb8d  8bc6                 mov eax, esi
// 0048eb8f  5e                   pop esi
// 0048eb90  64890d00000000       mov dword ptr fs:[0], ecx
// 0048eb97  5b                   pop ebx
// 0048eb98  8be5                 mov esp, ebp
// 0048eb9a  5d                   pop ebp
// 0048eb9b  c20800               ret 8
// 0048eb9e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048eba1  52                   push edx
// 0048eba2  8d4d0c               lea ecx, [ebp + 0xc]
// 0048eba5  e88672f7ff           call 0x405e30
// 0048ebaa  6a00                 push 0
// 0048ebac  6a00                 push 0
// 0048ebae  e8d9292100           call 0x6a158c

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
