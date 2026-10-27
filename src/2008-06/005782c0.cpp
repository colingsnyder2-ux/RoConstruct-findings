// from server: 100% by king_originala
// roc 2008-06 005782c0  unit: RBX::VLocalBackpack::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005782c0
//
// 005782c0  55                   push ebp
// 005782c1  8bec                 mov ebp, esp
// 005782c3  6aff                 push -1
// 005782c5  6810087d00           push 0x7d0810
// 005782ca  64a100000000         mov eax, dword ptr fs:[0]
// 005782d0  50                   push eax
// 005782d1  64892500000000       mov dword ptr fs:[0], esp
// 005782d8  51                   push ecx
// 005782d9  53                   push ebx
// 005782da  56                   push esi
// 005782db  57                   push edi
// 005782dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005782df  8bf1                 mov esi, ecx
// 005782e1  6a14                 push 0x14
// 005782e3  c70600000000         mov dword ptr [esi], 0
// 005782e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005782f0  e82b861200           call 0x6a0920
// 005782f5  83c404               add esp, 4
// 005782f8  85c0                 test eax, eax
// 005782fa  7419                 je 0x578315
// 005782fc  b901000000           mov ecx, 1
// 00578301  894804               mov dword ptr [eax + 4], ecx
// 00578304  894808               mov dword ptr [eax + 8], ecx
// 00578307  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057830a  c70028008300         mov dword ptr [eax], 0x830028
// 00578310  89480c               mov dword ptr [eax + 0xc], ecx
// 00578313  eb02                 jmp 0x578317
// 00578315  33c0                 xor eax, eax
// 00578317  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057831a  8906                 mov dword ptr [esi], eax
// 0057831c  5f                   pop edi
// 0057831d  8bc6                 mov eax, esi
// 0057831f  5e                   pop esi
// 00578320  64890d00000000       mov dword ptr fs:[0], ecx
// 00578327  5b                   pop ebx
// 00578328  8be5                 mov esp, ebp
// 0057832a  5d                   pop ebp
// 0057832b  c20800               ret 8
// 0057832e  8b5508               mov edx, dword ptr [ebp + 8]
// 00578331  52                   push edx
// 00578332  8d4d0c               lea ecx, [ebp + 0xc]
// 00578335  e8f6dae8ff           call 0x405e30
// 0057833a  6a00                 push 0
// 0057833c  6a00                 push 0
// 0057833e  e849921200           call 0x6a158c

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
