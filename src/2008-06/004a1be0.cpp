// from server: 100% by king_originala
// roc 2008-06 004a1be0  unit: RBX::Network::P8Players::?$GetImpl  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1be0
//
// 004a1be0  55                   push ebp
// 004a1be1  8bec                 mov ebp, esp
// 004a1be3  6aff                 push -1
// 004a1be5  68607b7c00           push 0x7c7b60
// 004a1bea  64a100000000         mov eax, dword ptr fs:[0]
// 004a1bf0  50                   push eax
// 004a1bf1  64892500000000       mov dword ptr fs:[0], esp
// 004a1bf8  51                   push ecx
// 004a1bf9  53                   push ebx
// 004a1bfa  56                   push esi
// 004a1bfb  57                   push edi
// 004a1bfc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a1bff  8bf1                 mov esi, ecx
// 004a1c01  6a14                 push 0x14
// 004a1c03  c70600000000         mov dword ptr [esi], 0
// 004a1c09  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a1c10  e80bed1f00           call 0x6a0920
// 004a1c15  83c404               add esp, 4
// 004a1c18  85c0                 test eax, eax
// 004a1c1a  7419                 je 0x4a1c35
// 004a1c1c  b901000000           mov ecx, 1
// 004a1c21  894804               mov dword ptr [eax + 4], ecx
// 004a1c24  894808               mov dword ptr [eax + 8], ecx
// 004a1c27  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a1c2a  c700b0338200         mov dword ptr [eax], 0x8233b0
// 004a1c30  89480c               mov dword ptr [eax + 0xc], ecx
// 004a1c33  eb02                 jmp 0x4a1c37
// 004a1c35  33c0                 xor eax, eax
// 004a1c37  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a1c3a  8906                 mov dword ptr [esi], eax
// 004a1c3c  5f                   pop edi
// 004a1c3d  8bc6                 mov eax, esi
// 004a1c3f  5e                   pop esi
// 004a1c40  64890d00000000       mov dword ptr fs:[0], ecx
// 004a1c47  5b                   pop ebx
// 004a1c48  8be5                 mov esp, ebp
// 004a1c4a  5d                   pop ebp
// 004a1c4b  c20800               ret 8
// 004a1c4e  8b5508               mov edx, dword ptr [ebp + 8]
// 004a1c51  52                   push edx
// 004a1c52  8d4d0c               lea ecx, [ebp + 0xc]
// 004a1c55  e8d641f6ff           call 0x405e30
// 004a1c5a  6a00                 push 0
// 004a1c5c  6a00                 push 0
// 004a1c5e  e829f91f00           call 0x6a158c

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
