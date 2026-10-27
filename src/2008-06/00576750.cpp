// from server: 100% by king_originala
// roc 2008-06 00576750  unit: RBX::DataModel  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576750
//
// 00576750  55                   push ebp
// 00576751  8bec                 mov ebp, esp
// 00576753  6aff                 push -1
// 00576755  6850067d00           push 0x7d0650
// 0057675a  64a100000000         mov eax, dword ptr fs:[0]
// 00576760  50                   push eax
// 00576761  64892500000000       mov dword ptr fs:[0], esp
// 00576768  51                   push ecx
// 00576769  53                   push ebx
// 0057676a  56                   push esi
// 0057676b  57                   push edi
// 0057676c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057676f  8bf1                 mov esi, ecx
// 00576771  6a14                 push 0x14
// 00576773  c70600000000         mov dword ptr [esi], 0
// 00576779  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00576780  e89ba11200           call 0x6a0920
// 00576785  83c404               add esp, 4
// 00576788  85c0                 test eax, eax
// 0057678a  7419                 je 0x5767a5
// 0057678c  b901000000           mov ecx, 1
// 00576791  894804               mov dword ptr [eax + 4], ecx
// 00576794  894808               mov dword ptr [eax + 8], ecx
// 00576797  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057679a  c700e8fd8200         mov dword ptr [eax], 0x82fde8
// 005767a0  89480c               mov dword ptr [eax + 0xc], ecx
// 005767a3  eb02                 jmp 0x5767a7
// 005767a5  33c0                 xor eax, eax
// 005767a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005767aa  8906                 mov dword ptr [esi], eax
// 005767ac  5f                   pop edi
// 005767ad  8bc6                 mov eax, esi
// 005767af  5e                   pop esi
// 005767b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005767b7  5b                   pop ebx
// 005767b8  8be5                 mov esp, ebp
// 005767ba  5d                   pop ebp
// 005767bb  c20800               ret 8
// 005767be  8b5508               mov edx, dword ptr [ebp + 8]
// 005767c1  52                   push edx
// 005767c2  8d4d0c               lea ecx, [ebp + 0xc]
// 005767c5  e866f6e8ff           call 0x405e30
// 005767ca  6a00                 push 0
// 005767cc  6a00                 push 0
// 005767ce  e8b9ad1200           call 0x6a158c

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
