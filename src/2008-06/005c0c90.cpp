// from server: 100% by king_originala
// roc 2008-06 005c0c90  unit: RBX::VClickDetector::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0c90
//
// 005c0c90  55                   push ebp
// 005c0c91  8bec                 mov ebp, esp
// 005c0c93  6aff                 push -1
// 005c0c95  6870457d00           push 0x7d4570
// 005c0c9a  64a100000000         mov eax, dword ptr fs:[0]
// 005c0ca0  50                   push eax
// 005c0ca1  64892500000000       mov dword ptr fs:[0], esp
// 005c0ca8  51                   push ecx
// 005c0ca9  53                   push ebx
// 005c0caa  56                   push esi
// 005c0cab  57                   push edi
// 005c0cac  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c0caf  8bf1                 mov esi, ecx
// 005c0cb1  6a14                 push 0x14
// 005c0cb3  c70600000000         mov dword ptr [esi], 0
// 005c0cb9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c0cc0  e85bfc0d00           call 0x6a0920
// 005c0cc5  83c404               add esp, 4
// 005c0cc8  85c0                 test eax, eax
// 005c0cca  7419                 je 0x5c0ce5
// 005c0ccc  b901000000           mov ecx, 1
// 005c0cd1  894804               mov dword ptr [eax + 4], ecx
// 005c0cd4  894808               mov dword ptr [eax + 8], ecx
// 005c0cd7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c0cda  c70050888300         mov dword ptr [eax], 0x838850
// 005c0ce0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c0ce3  eb02                 jmp 0x5c0ce7
// 005c0ce5  33c0                 xor eax, eax
// 005c0ce7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c0cea  8906                 mov dword ptr [esi], eax
// 005c0cec  5f                   pop edi
// 005c0ced  8bc6                 mov eax, esi
// 005c0cef  5e                   pop esi
// 005c0cf0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0cf7  5b                   pop ebx
// 005c0cf8  8be5                 mov esp, ebp
// 005c0cfa  5d                   pop ebp
// 005c0cfb  c20800               ret 8
// 005c0cfe  8b5508               mov edx, dword ptr [ebp + 8]
// 005c0d01  52                   push edx
// 005c0d02  8d4d0c               lea ecx, [ebp + 0xc]
// 005c0d05  e82651e4ff           call 0x405e30
// 005c0d0a  6a00                 push 0
// 005c0d0c  6a00                 push 0
// 005c0d0e  e879080e00           call 0x6a158c

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
