// from server: 100% by tester
// roc 2008-06 005b7510  unit: P8CRenderSettings::?$GetSetImpl  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7510
//
// 005b7510  55                   push ebp
// 005b7511  8bec                 mov ebp, esp
// 005b7513  6aff                 push -1
// 005b7515  68e0397d00           push 0x7d39e0
// 005b751a  64a100000000         mov eax, dword ptr fs:[0]
// 005b7520  50                   push eax
// 005b7521  64892500000000       mov dword ptr fs:[0], esp
// 005b7528  51                   push ecx
// 005b7529  53                   push ebx
// 005b752a  56                   push esi
// 005b752b  57                   push edi
// 005b752c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005b752f  8bf1                 mov esi, ecx
// 005b7531  6a14                 push 0x14
// 005b7533  c70600000000         mov dword ptr [esi], 0
// 005b7539  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005b7540  e8db930e00           call 0x6a0920
// 005b7545  83c404               add esp, 4
// 005b7548  85c0                 test eax, eax
// 005b754a  7419                 je 0x5b7565
// 005b754c  b901000000           mov ecx, 1
// 005b7551  894804               mov dword ptr [eax + 4], ecx
// 005b7554  894808               mov dword ptr [eax + 8], ecx
// 005b7557  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b755a  c700d4758300         mov dword ptr [eax], 0x8375d4
// 005b7560  89480c               mov dword ptr [eax + 0xc], ecx
// 005b7563  eb02                 jmp 0x5b7567
// 005b7565  33c0                 xor eax, eax
// 005b7567  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005b756a  8906                 mov dword ptr [esi], eax
// 005b756c  5f                   pop edi
// 005b756d  8bc6                 mov eax, esi
// 005b756f  5e                   pop esi
// 005b7570  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7577  5b                   pop ebx
// 005b7578  8be5                 mov esp, ebp
// 005b757a  5d                   pop ebp
// 005b757b  c20800               ret 8

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
