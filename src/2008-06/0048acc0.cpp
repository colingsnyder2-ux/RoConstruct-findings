// from server: 100% by tester
// roc 2008-06 0048acc0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048acc0
//
// 0048acc0  55                   push ebp
// 0048acc1  8bec                 mov ebp, esp
// 0048acc3  6aff                 push -1
// 0048acc5  68f0607c00           push 0x7c60f0
// 0048acca  64a100000000         mov eax, dword ptr fs:[0]
// 0048acd0  50                   push eax
// 0048acd1  64892500000000       mov dword ptr fs:[0], esp
// 0048acd8  51                   push ecx
// 0048acd9  53                   push ebx
// 0048acda  56                   push esi
// 0048acdb  57                   push edi
// 0048acdc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048acdf  8bf1                 mov esi, ecx
// 0048ace1  6a14                 push 0x14
// 0048ace3  c70600000000         mov dword ptr [esi], 0
// 0048ace9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048acf0  e82b5c2100           call 0x6a0920
// 0048acf5  83c404               add esp, 4
// 0048acf8  85c0                 test eax, eax
// 0048acfa  7419                 je 0x48ad15
// 0048acfc  b901000000           mov ecx, 1
// 0048ad01  894804               mov dword ptr [eax + 4], ecx
// 0048ad04  894808               mov dword ptr [eax + 8], ecx
// 0048ad07  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048ad0a  c700b0158200         mov dword ptr [eax], 0x8215b0
// 0048ad10  89480c               mov dword ptr [eax + 0xc], ecx
// 0048ad13  eb02                 jmp 0x48ad17
// 0048ad15  33c0                 xor eax, eax
// 0048ad17  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048ad1a  8906                 mov dword ptr [esi], eax
// 0048ad1c  5f                   pop edi
// 0048ad1d  8bc6                 mov eax, esi
// 0048ad1f  5e                   pop esi
// 0048ad20  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ad27  5b                   pop ebx
// 0048ad28  8be5                 mov esp, ebp
// 0048ad2a  5d                   pop ebp
// 0048ad2b  c20800               ret 8
// 0048ad2e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048ad31  52                   push edx
// 0048ad32  8d4d0c               lea ecx, [ebp + 0xc]
// 0048ad35  e8f6b0f7ff           call 0x405e30
// 0048ad3a  6a00                 push 0
// 0048ad3c  6a00                 push 0
// 0048ad3e  e849682100           call 0x6a158c

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
