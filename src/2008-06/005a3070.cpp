// from server: 100% by king_originala
// roc 2008-06 005a3070  unit: RBX::Workspace  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3070
//
// 005a3070  55                   push ebp
// 005a3071  8bec                 mov ebp, esp
// 005a3073  6aff                 push -1
// 005a3075  68602b7d00           push 0x7d2b60
// 005a307a  64a100000000         mov eax, dword ptr fs:[0]
// 005a3080  50                   push eax
// 005a3081  64892500000000       mov dword ptr fs:[0], esp
// 005a3088  51                   push ecx
// 005a3089  53                   push ebx
// 005a308a  56                   push esi
// 005a308b  57                   push edi
// 005a308c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a308f  8bf1                 mov esi, ecx
// 005a3091  6a14                 push 0x14
// 005a3093  c70600000000         mov dword ptr [esi], 0
// 005a3099  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a30a0  e87bd80f00           call 0x6a0920
// 005a30a5  83c404               add esp, 4
// 005a30a8  85c0                 test eax, eax
// 005a30aa  7419                 je 0x5a30c5
// 005a30ac  b901000000           mov ecx, 1
// 005a30b1  894804               mov dword ptr [eax + 4], ecx
// 005a30b4  894808               mov dword ptr [eax + 8], ecx
// 005a30b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005a30ba  c700c83a8300         mov dword ptr [eax], 0x833ac8
// 005a30c0  89480c               mov dword ptr [eax + 0xc], ecx
// 005a30c3  eb02                 jmp 0x5a30c7
// 005a30c5  33c0                 xor eax, eax
// 005a30c7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a30ca  8906                 mov dword ptr [esi], eax
// 005a30cc  5f                   pop edi
// 005a30cd  8bc6                 mov eax, esi
// 005a30cf  5e                   pop esi
// 005a30d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a30d7  5b                   pop ebx
// 005a30d8  8be5                 mov esp, ebp
// 005a30da  5d                   pop ebp
// 005a30db  c20800               ret 8
// 005a30de  8b5508               mov edx, dword ptr [ebp + 8]
// 005a30e1  52                   push edx
// 005a30e2  8d4d0c               lea ecx, [ebp + 0xc]
// 005a30e5  e8462de6ff           call 0x405e30
// 005a30ea  6a00                 push 0
// 005a30ec  6a00                 push 0
// 005a30ee  e899e40f00           call 0x6a158c

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
