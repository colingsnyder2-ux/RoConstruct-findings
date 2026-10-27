// from server: 100% by king_originala
// roc 2008-06 004b2c30  unit: RBX::VRotate::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2c30
//
// 004b2c30  55                   push ebp
// 004b2c31  8bec                 mov ebp, esp
// 004b2c33  6aff                 push -1
// 004b2c35  6880877c00           push 0x7c8780
// 004b2c3a  64a100000000         mov eax, dword ptr fs:[0]
// 004b2c40  50                   push eax
// 004b2c41  64892500000000       mov dword ptr fs:[0], esp
// 004b2c48  51                   push ecx
// 004b2c49  53                   push ebx
// 004b2c4a  56                   push esi
// 004b2c4b  57                   push edi
// 004b2c4c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b2c4f  8bf1                 mov esi, ecx
// 004b2c51  6a14                 push 0x14
// 004b2c53  c70600000000         mov dword ptr [esi], 0
// 004b2c59  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b2c60  e8bbdc1e00           call 0x6a0920
// 004b2c65  83c404               add esp, 4
// 004b2c68  85c0                 test eax, eax
// 004b2c6a  7419                 je 0x4b2c85
// 004b2c6c  b901000000           mov ecx, 1
// 004b2c71  894804               mov dword ptr [eax + 4], ecx
// 004b2c74  894808               mov dword ptr [eax + 8], ecx
// 004b2c77  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b2c7a  c7002c4c8200         mov dword ptr [eax], 0x824c2c
// 004b2c80  89480c               mov dword ptr [eax + 0xc], ecx
// 004b2c83  eb02                 jmp 0x4b2c87
// 004b2c85  33c0                 xor eax, eax
// 004b2c87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b2c8a  8906                 mov dword ptr [esi], eax
// 004b2c8c  5f                   pop edi
// 004b2c8d  8bc6                 mov eax, esi
// 004b2c8f  5e                   pop esi
// 004b2c90  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2c97  5b                   pop ebx
// 004b2c98  8be5                 mov esp, ebp
// 004b2c9a  5d                   pop ebp
// 004b2c9b  c20800               ret 8
// 004b2c9e  8b5508               mov edx, dword ptr [ebp + 8]
// 004b2ca1  52                   push edx
// 004b2ca2  8d4d0c               lea ecx, [ebp + 0xc]
// 004b2ca5  e88631f5ff           call 0x405e30
// 004b2caa  6a00                 push 0
// 004b2cac  6a00                 push 0
// 004b2cae  e8d9e81e00           call 0x6a158c

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
