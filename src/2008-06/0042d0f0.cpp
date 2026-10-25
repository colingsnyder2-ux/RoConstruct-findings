// from server: 100% by tester
// roc 2008-06 0042d0f0  unit: boost::any::H::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d0f0
//
// 0042d0f0  55                   push ebp
// 0042d0f1  8bec                 mov ebp, esp
// 0042d0f3  6aff                 push -1
// 0042d0f5  6850f87b00           push 0x7bf850
// 0042d0fa  64a100000000         mov eax, dword ptr fs:[0]
// 0042d100  50                   push eax
// 0042d101  64892500000000       mov dword ptr fs:[0], esp
// 0042d108  51                   push ecx
// 0042d109  53                   push ebx
// 0042d10a  56                   push esi
// 0042d10b  57                   push edi
// 0042d10c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042d10f  8bf1                 mov esi, ecx
// 0042d111  6a14                 push 0x14
// 0042d113  c70600000000         mov dword ptr [esi], 0
// 0042d119  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042d120  e8fb372700           call 0x6a0920
// 0042d125  83c404               add esp, 4
// 0042d128  85c0                 test eax, eax
// 0042d12a  7419                 je 0x42d145
// 0042d12c  b901000000           mov ecx, 1
// 0042d131  894804               mov dword ptr [eax + 4], ecx
// 0042d134  894808               mov dword ptr [eax + 8], ecx
// 0042d137  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0042d13a  c700dc068100         mov dword ptr [eax], 0x8106dc
// 0042d140  89480c               mov dword ptr [eax + 0xc], ecx
// 0042d143  eb02                 jmp 0x42d147
// 0042d145  33c0                 xor eax, eax
// 0042d147  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0042d14a  8906                 mov dword ptr [esi], eax
// 0042d14c  5f                   pop edi
// 0042d14d  8bc6                 mov eax, esi
// 0042d14f  5e                   pop esi
// 0042d150  64890d00000000       mov dword ptr fs:[0], ecx
// 0042d157  5b                   pop ebx
// 0042d158  8be5                 mov esp, ebp
// 0042d15a  5d                   pop ebp
// 0042d15b  c20800               ret 8

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
