// from server: 100% by king_originala
// roc 2008-06 004a3710  unit: RBX::Network::Server  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3710
//
// 004a3710  55                   push ebp
// 004a3711  8bec                 mov ebp, esp
// 004a3713  6aff                 push -1
// 004a3715  68e07c7c00           push 0x7c7ce0
// 004a371a  64a100000000         mov eax, dword ptr fs:[0]
// 004a3720  50                   push eax
// 004a3721  64892500000000       mov dword ptr fs:[0], esp
// 004a3728  51                   push ecx
// 004a3729  53                   push ebx
// 004a372a  56                   push esi
// 004a372b  57                   push edi
// 004a372c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a372f  8bf1                 mov esi, ecx
// 004a3731  6a14                 push 0x14
// 004a3733  c70600000000         mov dword ptr [esi], 0
// 004a3739  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a3740  e8dbd11f00           call 0x6a0920
// 004a3745  83c404               add esp, 4
// 004a3748  85c0                 test eax, eax
// 004a374a  7419                 je 0x4a3765
// 004a374c  b901000000           mov ecx, 1
// 004a3751  894804               mov dword ptr [eax + 4], ecx
// 004a3754  894808               mov dword ptr [eax + 8], ecx
// 004a3757  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a375a  c700c8368200         mov dword ptr [eax], 0x8236c8
// 004a3760  89480c               mov dword ptr [eax + 0xc], ecx
// 004a3763  eb02                 jmp 0x4a3767
// 004a3765  33c0                 xor eax, eax
// 004a3767  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a376a  8906                 mov dword ptr [esi], eax
// 004a376c  5f                   pop edi
// 004a376d  8bc6                 mov eax, esi
// 004a376f  5e                   pop esi
// 004a3770  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3777  5b                   pop ebx
// 004a3778  8be5                 mov esp, ebp
// 004a377a  5d                   pop ebp
// 004a377b  c20800               ret 8
// 004a377e  8b5508               mov edx, dword ptr [ebp + 8]
// 004a3781  52                   push edx
// 004a3782  8d4d0c               lea ecx, [ebp + 0xc]
// 004a3785  e8a626f6ff           call 0x405e30
// 004a378a  6a00                 push 0
// 004a378c  6a00                 push 0
// 004a378e  e8f9dd1f00           call 0x6a158c

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
