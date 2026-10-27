// from server: 100% by king_originala
// roc 2008-06 005b7480  unit: P8CRenderSettings::?$GetSetImpl  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7480
//
// 005b7480  55                   push ebp
// 005b7481  8bec                 mov ebp, esp
// 005b7483  6aff                 push -1
// 005b7485  68d0397d00           push 0x7d39d0
// 005b748a  64a100000000         mov eax, dword ptr fs:[0]
// 005b7490  50                   push eax
// 005b7491  64892500000000       mov dword ptr fs:[0], esp
// 005b7498  51                   push ecx
// 005b7499  53                   push ebx
// 005b749a  56                   push esi
// 005b749b  57                   push edi
// 005b749c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005b749f  8bf1                 mov esi, ecx
// 005b74a1  6a14                 push 0x14
// 005b74a3  c70600000000         mov dword ptr [esi], 0
// 005b74a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005b74b0  e86b940e00           call 0x6a0920
// 005b74b5  83c404               add esp, 4
// 005b74b8  85c0                 test eax, eax
// 005b74ba  7419                 je 0x5b74d5
// 005b74bc  b901000000           mov ecx, 1
// 005b74c1  894804               mov dword ptr [eax + 4], ecx
// 005b74c4  894808               mov dword ptr [eax + 8], ecx
// 005b74c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b74ca  c700c0758300         mov dword ptr [eax], 0x8375c0
// 005b74d0  89480c               mov dword ptr [eax + 0xc], ecx
// 005b74d3  eb02                 jmp 0x5b74d7
// 005b74d5  33c0                 xor eax, eax
// 005b74d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005b74da  8906                 mov dword ptr [esi], eax
// 005b74dc  5f                   pop edi
// 005b74dd  8bc6                 mov eax, esi
// 005b74df  5e                   pop esi
// 005b74e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b74e7  5b                   pop ebx
// 005b74e8  8be5                 mov esp, ebp
// 005b74ea  5d                   pop ebp
// 005b74eb  c20800               ret 8
// 005b74ee  8b5508               mov edx, dword ptr [ebp + 8]
// 005b74f1  52                   push edx
// 005b74f2  8d4d0c               lea ecx, [ebp + 0xc]
// 005b74f5  e836e9e4ff           call 0x405e30
// 005b74fa  6a00                 push 0
// 005b74fc  6a00                 push 0
// 005b74fe  e889a00e00           call 0x6a158c

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
