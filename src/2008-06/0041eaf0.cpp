// from server: 100% by king_originala
// roc 2008-06 0041eaf0  unit: RBX::VPartInstance::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041eaf0
//
// 0041eaf0  55                   push ebp
// 0041eaf1  8bec                 mov ebp, esp
// 0041eaf3  6aff                 push -1
// 0041eaf5  6830e57b00           push 0x7be530
// 0041eafa  64a100000000         mov eax, dword ptr fs:[0]
// 0041eb00  50                   push eax
// 0041eb01  64892500000000       mov dword ptr fs:[0], esp
// 0041eb08  51                   push ecx
// 0041eb09  53                   push ebx
// 0041eb0a  56                   push esi
// 0041eb0b  57                   push edi
// 0041eb0c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041eb0f  8bf1                 mov esi, ecx
// 0041eb11  6a14                 push 0x14
// 0041eb13  c70600000000         mov dword ptr [esi], 0
// 0041eb19  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041eb20  e8fb1d2800           call 0x6a0920
// 0041eb25  83c404               add esp, 4
// 0041eb28  85c0                 test eax, eax
// 0041eb2a  7419                 je 0x41eb45
// 0041eb2c  b901000000           mov ecx, 1
// 0041eb31  894804               mov dword ptr [eax + 4], ecx
// 0041eb34  894808               mov dword ptr [eax + 8], ecx
// 0041eb37  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041eb3a  c700e8f18000         mov dword ptr [eax], 0x80f1e8
// 0041eb40  89480c               mov dword ptr [eax + 0xc], ecx
// 0041eb43  eb02                 jmp 0x41eb47
// 0041eb45  33c0                 xor eax, eax
// 0041eb47  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041eb4a  8906                 mov dword ptr [esi], eax
// 0041eb4c  5f                   pop edi
// 0041eb4d  8bc6                 mov eax, esi
// 0041eb4f  5e                   pop esi
// 0041eb50  64890d00000000       mov dword ptr fs:[0], ecx
// 0041eb57  5b                   pop ebx
// 0041eb58  8be5                 mov esp, ebp
// 0041eb5a  5d                   pop ebp
// 0041eb5b  c20800               ret 8
// 0041eb5e  8b5508               mov edx, dword ptr [ebp + 8]
// 0041eb61  52                   push edx
// 0041eb62  8d4d0c               lea ecx, [ebp + 0xc]
// 0041eb65  e8c672feff           call 0x405e30
// 0041eb6a  6a00                 push 0
// 0041eb6c  6a00                 push 0
// 0041eb6e  e8192a2800           call 0x6a158c

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
