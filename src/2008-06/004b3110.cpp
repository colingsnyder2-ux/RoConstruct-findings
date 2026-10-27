// from server: 100% by king_originala
// roc 2008-06 004b3110  unit: RBX::VRotateV::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3110
//
// 004b3110  55                   push ebp
// 004b3111  8bec                 mov ebp, esp
// 004b3113  6aff                 push -1
// 004b3115  68a0877c00           push 0x7c87a0
// 004b311a  64a100000000         mov eax, dword ptr fs:[0]
// 004b3120  50                   push eax
// 004b3121  64892500000000       mov dword ptr fs:[0], esp
// 004b3128  51                   push ecx
// 004b3129  53                   push ebx
// 004b312a  56                   push esi
// 004b312b  57                   push edi
// 004b312c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b312f  8bf1                 mov esi, ecx
// 004b3131  6a14                 push 0x14
// 004b3133  c70600000000         mov dword ptr [esi], 0
// 004b3139  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b3140  e8dbd71e00           call 0x6a0920
// 004b3145  83c404               add esp, 4
// 004b3148  85c0                 test eax, eax
// 004b314a  7419                 je 0x4b3165
// 004b314c  b901000000           mov ecx, 1
// 004b3151  894804               mov dword ptr [eax + 4], ecx
// 004b3154  894808               mov dword ptr [eax + 8], ecx
// 004b3157  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b315a  c700644c8200         mov dword ptr [eax], 0x824c64
// 004b3160  89480c               mov dword ptr [eax + 0xc], ecx
// 004b3163  eb02                 jmp 0x4b3167
// 004b3165  33c0                 xor eax, eax
// 004b3167  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b316a  8906                 mov dword ptr [esi], eax
// 004b316c  5f                   pop edi
// 004b316d  8bc6                 mov eax, esi
// 004b316f  5e                   pop esi
// 004b3170  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3177  5b                   pop ebx
// 004b3178  8be5                 mov esp, ebp
// 004b317a  5d                   pop ebp
// 004b317b  c20800               ret 8
// 004b317e  8b5508               mov edx, dword ptr [ebp + 8]
// 004b3181  52                   push edx
// 004b3182  8d4d0c               lea ecx, [ebp + 0xc]
// 004b3185  e8a62cf5ff           call 0x405e30
// 004b318a  6a00                 push 0
// 004b318c  6a00                 push 0
// 004b318e  e8f9e31e00           call 0x6a158c

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
