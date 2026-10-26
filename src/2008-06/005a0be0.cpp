// from server: 100% by king_originala
// roc 2008-06 005a0be0  unit: RBX::RootInstance  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0be0
//
// 005a0be0  55                   push ebp
// 005a0be1  8bec                 mov ebp, esp
// 005a0be3  6aff                 push -1
// 005a0be5  6840297d00           push 0x7d2940
// 005a0bea  64a100000000         mov eax, dword ptr fs:[0]
// 005a0bf0  50                   push eax
// 005a0bf1  64892500000000       mov dword ptr fs:[0], esp
// 005a0bf8  51                   push ecx
// 005a0bf9  53                   push ebx
// 005a0bfa  56                   push esi
// 005a0bfb  57                   push edi
// 005a0bfc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a0bff  8bf1                 mov esi, ecx
// 005a0c01  6a14                 push 0x14
// 005a0c03  c70600000000         mov dword ptr [esi], 0
// 005a0c09  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a0c10  e80bfd0f00           call 0x6a0920
// 005a0c15  83c404               add esp, 4
// 005a0c18  85c0                 test eax, eax
// 005a0c1a  7419                 je 0x5a0c35
// 005a0c1c  b901000000           mov ecx, 1
// 005a0c21  894804               mov dword ptr [eax + 4], ecx
// 005a0c24  894808               mov dword ptr [eax + 8], ecx
// 005a0c27  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005a0c2a  c70060368300         mov dword ptr [eax], 0x833660
// 005a0c30  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0c33  eb02                 jmp 0x5a0c37
// 005a0c35  33c0                 xor eax, eax
// 005a0c37  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a0c3a  8906                 mov dword ptr [esi], eax
// 005a0c3c  5f                   pop edi
// 005a0c3d  8bc6                 mov eax, esi
// 005a0c3f  5e                   pop esi
// 005a0c40  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0c47  5b                   pop ebx
// 005a0c48  8be5                 mov esp, ebp
// 005a0c4a  5d                   pop ebp
// 005a0c4b  c20800               ret 8
// 005a0c4e  8b5508               mov edx, dword ptr [ebp + 8]
// 005a0c51  52                   push edx
// 005a0c52  8d4d0c               lea ecx, [ebp + 0xc]
// 005a0c55  e8d651e6ff           call 0x405e30
// 005a0c5a  6a00                 push 0
// 005a0c5c  6a00                 push 0
// 005a0c5e  e829091000           call 0x6a158c

void * __cdecl operator new(unsigned int);

extern void *controlTable[];

struct Deleter {
    void operator()(void *) const;
};

struct Control {
    void **table;
    long strong;
    long weak;
    void *pointer;
    unsigned char unused[4];

    Control(void *);
};

inline Control::Control(void *p)
    : table(controlTable), strong(1), weak(1), pointer(p)
{
}

struct S {
    Control *control;
    S(void *, Deleter);
};

S::S(void *p, Deleter d)
    : control(0)
{
    try {
        control = new Control(p);
    } catch (...) {
        d(p);
        throw;
    }
}
