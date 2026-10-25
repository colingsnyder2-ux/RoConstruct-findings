// from server: 100% by tester
// roc 2008-06 00616410  unit: RBX::ArrowTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616410
//
// 00616410  55                   push ebp
// 00616411  8bec                 mov ebp, esp
// 00616413  6aff                 push -1
// 00616415  6820907d00           push 0x7d9020
// 0061641a  64a100000000         mov eax, dword ptr fs:[0]
// 00616420  50                   push eax
// 00616421  64892500000000       mov dword ptr fs:[0], esp
// 00616428  51                   push ecx
// 00616429  53                   push ebx
// 0061642a  56                   push esi
// 0061642b  57                   push edi
// 0061642c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061642f  8bf1                 mov esi, ecx
// 00616431  6a14                 push 0x14
// 00616433  c70600000000         mov dword ptr [esi], 0
// 00616439  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00616440  e8dba40800           call 0x6a0920
// 00616445  83c404               add esp, 4
// 00616448  85c0                 test eax, eax
// 0061644a  7419                 je 0x616465
// 0061644c  b901000000           mov ecx, 1
// 00616451  894804               mov dword ptr [eax + 4], ecx
// 00616454  894808               mov dword ptr [eax + 8], ecx
// 00616457  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0061645a  c700703a8400         mov dword ptr [eax], 0x843a70
// 00616460  89480c               mov dword ptr [eax + 0xc], ecx
// 00616463  eb02                 jmp 0x616467
// 00616465  33c0                 xor eax, eax
// 00616467  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0061646a  8906                 mov dword ptr [esi], eax
// 0061646c  5f                   pop edi
// 0061646d  8bc6                 mov eax, esi
// 0061646f  5e                   pop esi
// 00616470  64890d00000000       mov dword ptr fs:[0], ecx
// 00616477  5b                   pop ebx
// 00616478  8be5                 mov esp, ebp
// 0061647a  5d                   pop ebp
// 0061647b  c20800               ret 8

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
