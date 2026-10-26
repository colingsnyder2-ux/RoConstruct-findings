// from server: 100% by tester
// roc 2008-06 005c13e0  unit: RBX::VFlagStandService::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c13e0
//
// 005c13e0  55                   push ebp
// 005c13e1  8bec                 mov ebp, esp
// 005c13e3  6aff                 push -1
// 005c13e5  68a0457d00           push 0x7d45a0
// 005c13ea  64a100000000         mov eax, dword ptr fs:[0]
// 005c13f0  50                   push eax
// 005c13f1  64892500000000       mov dword ptr fs:[0], esp
// 005c13f8  51                   push ecx
// 005c13f9  53                   push ebx
// 005c13fa  56                   push esi
// 005c13fb  57                   push edi
// 005c13fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c13ff  8bf1                 mov esi, ecx
// 005c1401  6a14                 push 0x14
// 005c1403  c70600000000         mov dword ptr [esi], 0
// 005c1409  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c1410  e80bf50d00           call 0x6a0920
// 005c1415  83c404               add esp, 4
// 005c1418  85c0                 test eax, eax
// 005c141a  7419                 je 0x5c1435
// 005c141c  b901000000           mov ecx, 1
// 005c1421  894804               mov dword ptr [eax + 4], ecx
// 005c1424  894808               mov dword ptr [eax + 8], ecx
// 005c1427  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c142a  c700a4888300         mov dword ptr [eax], 0x8388a4
// 005c1430  89480c               mov dword ptr [eax + 0xc], ecx
// 005c1433  eb02                 jmp 0x5c1437
// 005c1435  33c0                 xor eax, eax
// 005c1437  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c143a  8906                 mov dword ptr [esi], eax
// 005c143c  5f                   pop edi
// 005c143d  8bc6                 mov eax, esi
// 005c143f  5e                   pop esi
// 005c1440  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1447  5b                   pop ebx
// 005c1448  8be5                 mov esp, ebp
// 005c144a  5d                   pop ebp
// 005c144b  c20800               ret 8
// 005c144e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c1451  52                   push edx
// 005c1452  8d4d0c               lea ecx, [ebp + 0xc]
// 005c1455  e8d649e4ff           call 0x405e30
// 005c145a  6a00                 push 0
// 005c145c  6a00                 push 0
// 005c145e  e829010e00           call 0x6a158c

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
