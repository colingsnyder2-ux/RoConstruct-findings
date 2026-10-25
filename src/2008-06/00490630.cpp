// from server: 100% by tester
// roc 2008-06 00490630  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490630
//
// 00490630  55                   push ebp
// 00490631  8bec                 mov ebp, esp
// 00490633  6aff                 push -1
// 00490635  6820647c00           push 0x7c6420
// 0049063a  64a100000000         mov eax, dword ptr fs:[0]
// 00490640  50                   push eax
// 00490641  64892500000000       mov dword ptr fs:[0], esp
// 00490648  51                   push ecx
// 00490649  53                   push ebx
// 0049064a  56                   push esi
// 0049064b  57                   push edi
// 0049064c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049064f  8bf1                 mov esi, ecx
// 00490651  6a14                 push 0x14
// 00490653  c70600000000         mov dword ptr [esi], 0
// 00490659  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00490660  e8bb022100           call 0x6a0920
// 00490665  83c404               add esp, 4
// 00490668  85c0                 test eax, eax
// 0049066a  7419                 je 0x490685
// 0049066c  b901000000           mov ecx, 1
// 00490671  894804               mov dword ptr [eax + 4], ecx
// 00490674  894808               mov dword ptr [eax + 8], ecx
// 00490677  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049067a  c700381b8200         mov dword ptr [eax], 0x821b38
// 00490680  89480c               mov dword ptr [eax + 0xc], ecx
// 00490683  eb02                 jmp 0x490687
// 00490685  33c0                 xor eax, eax
// 00490687  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049068a  8906                 mov dword ptr [esi], eax
// 0049068c  5f                   pop edi
// 0049068d  8bc6                 mov eax, esi
// 0049068f  5e                   pop esi
// 00490690  64890d00000000       mov dword ptr fs:[0], ecx
// 00490697  5b                   pop ebx
// 00490698  8be5                 mov esp, ebp
// 0049069a  5d                   pop ebp
// 0049069b  c20800               ret 8

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
