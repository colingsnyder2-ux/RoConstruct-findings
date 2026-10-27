// from server: 100% by tester
// roc 2008-06 0040bf70  unit: RBX::P8Tool::?$GetSetImpl  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bf70
//
// 0040bf70  55                   push ebp
// 005fd9a1  8bec                 mov ebp, esp
// 005fd9a3  6aff                 push -1
// 005fd9a5  68d07e7d00           push 0x7d7ed0
// 005fd9aa  64a100000000         mov eax, dword ptr fs:[0]
// 005fd9b0  50                   push eax
// 005fd9b1  64892500000000       mov dword ptr fs:[0], esp
// 005fd9b8  51                   push ecx
// 005fd9b9  53                   push ebx
// 005fd9ba  56                   push esi
// 005fd9bb  57                   push edi
// 005fd9bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005fd9bf  8bf1                 mov esi, ecx
// 005fd9c1  6a14                 push 0x14
// 005fd9c3  c70600000000         mov dword ptr [esi], 0
// 005fd9c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005fd9d0  e84b2f0a00           call 0x6a0920
// 005fd9d5  83c404               add esp, 4
// 005fd9d8  85c0                 test eax, eax
// 005fd9da  7419                 je 0x5fd9f5
// 005fd9dc  b901000000           mov ecx, 1
// 005fd9e1  894804               mov dword ptr [eax + 4], ecx
// 005fd9e4  894808               mov dword ptr [eax + 8], ecx
// 005fd9e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005fd9ea  c700c0178400         mov dword ptr [eax], 0x8417c0
// 005fd9f0  89480c               mov dword ptr [eax + 0xc], ecx
// 005fd9f3  eb02                 jmp 0x5fd9f7
// 005fd9f5  33c0                 xor eax, eax
// 005fd9f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005fd9fa  8906                 mov dword ptr [esi], eax
// 005fd9fc  5f                   pop edi
// 005fd9fd  8bc6                 mov eax, esi
// 005fd9ff  5e                   pop esi
// 005fda00  64890d00000000       mov dword ptr fs:[0], ecx
// 005fda07  5b                   pop ebx
// 005fda08  8be5                 mov esp, ebp
// 005fda0a  5d                   pop ebp
// 005fda0b  c20800               ret 8
// 005fda0e  8b5508               mov edx, dword ptr [ebp + 8]
// 005fda11  52                   push edx
// 005fda12  8d4d0c               lea ecx, [ebp + 0xc]
// 005fda15  e81684e0ff           call 0x405e30
// 005fda1a  6a00                 push 0
// 005fda1c  6a00                 push 0
// 005fda1e  e8693b0a00           call 0x6a158c

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
