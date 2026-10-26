// from server: 100% by tester
// roc 2008-06 005c1650  unit: RBX::VForceField::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1650
//
// 005c1650  55                   push ebp
// 005c1651  8bec                 mov ebp, esp
// 005c1653  6aff                 push -1
// 005c1655  68b0457d00           push 0x7d45b0
// 005c165a  64a100000000         mov eax, dword ptr fs:[0]
// 005c1660  50                   push eax
// 005c1661  64892500000000       mov dword ptr fs:[0], esp
// 005c1668  51                   push ecx
// 005c1669  53                   push ebx
// 005c166a  56                   push esi
// 005c166b  57                   push edi
// 005c166c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c166f  8bf1                 mov esi, ecx
// 005c1671  6a14                 push 0x14
// 005c1673  c70600000000         mov dword ptr [esi], 0
// 005c1679  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c1680  e89bf20d00           call 0x6a0920
// 005c1685  83c404               add esp, 4
// 005c1688  85c0                 test eax, eax
// 005c168a  7419                 je 0x5c16a5
// 005c168c  b901000000           mov ecx, 1
// 005c1691  894804               mov dword ptr [eax + 4], ecx
// 005c1694  894808               mov dword ptr [eax + 8], ecx
// 005c1697  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c169a  c700c0888300         mov dword ptr [eax], 0x8388c0
// 005c16a0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c16a3  eb02                 jmp 0x5c16a7
// 005c16a5  33c0                 xor eax, eax
// 005c16a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c16aa  8906                 mov dword ptr [esi], eax
// 005c16ac  5f                   pop edi
// 005c16ad  8bc6                 mov eax, esi
// 005c16af  5e                   pop esi
// 005c16b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c16b7  5b                   pop ebx
// 005c16b8  8be5                 mov esp, ebp
// 005c16ba  5d                   pop ebp
// 005c16bb  c20800               ret 8
// 005c16be  8b5508               mov edx, dword ptr [ebp + 8]
// 005c16c1  52                   push edx
// 005c16c2  8d4d0c               lea ecx, [ebp + 0xc]
// 005c16c5  e86647e4ff           call 0x405e30
// 005c16ca  6a00                 push 0
// 005c16cc  6a00                 push 0
// 005c16ce  e8b9fe0d00           call 0x6a158c

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
