// from server: 100% by tester
// roc 2008-06 00580360  unit: RBX::VHole::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580360
//
// 00580360  55                   push ebp
// 00580361  8bec                 mov ebp, esp
// 00580363  6aff                 push -1
// 00580365  6860107d00           push 0x7d1060
// 0058036a  64a100000000         mov eax, dword ptr fs:[0]
// 00580370  50                   push eax
// 00580371  64892500000000       mov dword ptr fs:[0], esp
// 00580378  51                   push ecx
// 00580379  53                   push ebx
// 0058037a  56                   push esi
// 0058037b  57                   push edi
// 0058037c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0058037f  8bf1                 mov esi, ecx
// 00580381  6a14                 push 0x14
// 00580383  c70600000000         mov dword ptr [esi], 0
// 00580389  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00580390  e88b051200           call 0x6a0920
// 00580395  83c404               add esp, 4
// 00580398  85c0                 test eax, eax
// 0058039a  7419                 je 0x5803b5
// 0058039c  b901000000           mov ecx, 1
// 005803a1  894804               mov dword ptr [eax + 4], ecx
// 005803a4  894808               mov dword ptr [eax + 8], ecx
// 005803a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005803aa  c7005c0b8300         mov dword ptr [eax], 0x830b5c
// 005803b0  89480c               mov dword ptr [eax + 0xc], ecx
// 005803b3  eb02                 jmp 0x5803b7
// 005803b5  33c0                 xor eax, eax
// 005803b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005803ba  8906                 mov dword ptr [esi], eax
// 005803bc  5f                   pop edi
// 005803bd  8bc6                 mov eax, esi
// 005803bf  5e                   pop esi
// 005803c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005803c7  5b                   pop ebx
// 005803c8  8be5                 mov esp, ebp
// 005803ca  5d                   pop ebp
// 005803cb  c20800               ret 8

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
