// from server: 100% by tester
// roc 2008-06 005800f0  unit: RBX::VMotorFeature::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005800f0
//
// 005800f0  55                   push ebp
// 005800f1  8bec                 mov ebp, esp
// 005800f3  6aff                 push -1
// 005800f5  6850107d00           push 0x7d1050
// 005800fa  64a100000000         mov eax, dword ptr fs:[0]
// 00580100  50                   push eax
// 00580101  64892500000000       mov dword ptr fs:[0], esp
// 00580108  51                   push ecx
// 00580109  53                   push ebx
// 0058010a  56                   push esi
// 0058010b  57                   push edi
// 0058010c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0058010f  8bf1                 mov esi, ecx
// 00580111  6a14                 push 0x14
// 00580113  c70600000000         mov dword ptr [esi], 0
// 00580119  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00580120  e8fb071200           call 0x6a0920
// 00580125  83c404               add esp, 4
// 00580128  85c0                 test eax, eax
// 0058012a  7419                 je 0x580145
// 0058012c  b901000000           mov ecx, 1
// 00580131  894804               mov dword ptr [eax + 4], ecx
// 00580134  894808               mov dword ptr [eax + 8], ecx
// 00580137  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0058013a  c700400b8300         mov dword ptr [eax], 0x830b40
// 00580140  89480c               mov dword ptr [eax + 0xc], ecx
// 00580143  eb02                 jmp 0x580147
// 00580145  33c0                 xor eax, eax
// 00580147  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0058014a  8906                 mov dword ptr [esi], eax
// 0058014c  5f                   pop edi
// 0058014d  8bc6                 mov eax, esi
// 0058014f  5e                   pop esi
// 00580150  64890d00000000       mov dword ptr fs:[0], ecx
// 00580157  5b                   pop ebx
// 00580158  8be5                 mov esp, ebp
// 0058015a  5d                   pop ebp
// 0058015b  c20800               ret 8

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
