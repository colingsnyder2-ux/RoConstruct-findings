// from server: 100% by king_originala
// roc 2008-06 005c24f0  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c24f0
//
// 005c24f0  55                   push ebp
// 005c24f1  8bec                 mov ebp, esp
// 005c24f3  6aff                 push -1
// 005c24f5  6810467d00           push 0x7d4610
// 005c24fa  64a100000000         mov eax, dword ptr fs:[0]
// 005c2500  50                   push eax
// 005c2501  64892500000000       mov dword ptr fs:[0], esp
// 005c2508  51                   push ecx
// 005c2509  53                   push ebx
// 005c250a  56                   push esi
// 005c250b  57                   push edi
// 005c250c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c250f  8bf1                 mov esi, ecx
// 005c2511  6a14                 push 0x14
// 005c2513  c70600000000         mov dword ptr [esi], 0
// 005c2519  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2520  e8fbe30d00           call 0x6a0920
// 005c2525  83c404               add esp, 4
// 005c2528  85c0                 test eax, eax
// 005c252a  7419                 je 0x5c2545
// 005c252c  b901000000           mov ecx, 1
// 005c2531  894804               mov dword ptr [eax + 4], ecx
// 005c2534  894808               mov dword ptr [eax + 8], ecx
// 005c2537  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c253a  c70068898300         mov dword ptr [eax], 0x838968
// 005c2540  89480c               mov dword ptr [eax + 0xc], ecx
// 005c2543  eb02                 jmp 0x5c2547
// 005c2545  33c0                 xor eax, eax
// 005c2547  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c254a  8906                 mov dword ptr [esi], eax
// 005c254c  5f                   pop edi
// 005c254d  8bc6                 mov eax, esi
// 005c254f  5e                   pop esi
// 005c2550  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2557  5b                   pop ebx
// 005c2558  8be5                 mov esp, ebp
// 005c255a  5d                   pop ebp
// 005c255b  c20800               ret 8
// 005c255e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2561  52                   push edx
// 005c2562  8d4d0c               lea ecx, [ebp + 0xc]
// 005c2565  e8c638e4ff           call 0x405e30
// 005c256a  6a00                 push 0
// 005c256c  6a00                 push 0
// 005c256e  e819f00d00           call 0x6a158c

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
