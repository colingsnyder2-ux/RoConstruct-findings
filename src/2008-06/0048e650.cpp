// from server: 100% by king_originala
// roc 2008-06 0048e650  unit: RBX::VRunService::?$SignalDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e650
//
// 0048e650  55                   push ebp
// 0048e651  8bec                 mov ebp, esp
// 0048e653  6aff                 push -1
// 0048e655  6840637c00           push 0x7c6340
// 0048e65a  64a100000000         mov eax, dword ptr fs:[0]
// 0048e660  50                   push eax
// 0048e661  64892500000000       mov dword ptr fs:[0], esp
// 0048e668  51                   push ecx
// 0048e669  53                   push ebx
// 0048e66a  56                   push esi
// 0048e66b  57                   push edi
// 0048e66c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048e66f  8bf1                 mov esi, ecx
// 0048e671  6a14                 push 0x14
// 0048e673  c70600000000         mov dword ptr [esi], 0
// 0048e679  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048e680  e89b222100           call 0x6a0920
// 0048e685  83c404               add esp, 4
// 0048e688  85c0                 test eax, eax
// 0048e68a  7419                 je 0x48e6a5
// 0048e68c  b901000000           mov ecx, 1
// 0048e691  894804               mov dword ptr [eax + 4], ecx
// 0048e694  894808               mov dword ptr [eax + 8], ecx
// 0048e697  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048e69a  c70070178200         mov dword ptr [eax], 0x821770
// 0048e6a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0048e6a3  eb02                 jmp 0x48e6a7
// 0048e6a5  33c0                 xor eax, eax
// 0048e6a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048e6aa  8906                 mov dword ptr [esi], eax
// 0048e6ac  5f                   pop edi
// 0048e6ad  8bc6                 mov eax, esi
// 0048e6af  5e                   pop esi
// 0048e6b0  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e6b7  5b                   pop ebx
// 0048e6b8  8be5                 mov esp, ebp
// 0048e6ba  5d                   pop ebp
// 0048e6bb  c20800               ret 8
// 0048e6be  8b5508               mov edx, dword ptr [ebp + 8]
// 0048e6c1  52                   push edx
// 0048e6c2  8d4d0c               lea ecx, [ebp + 0xc]
// 0048e6c5  e86677f7ff           call 0x405e30
// 0048e6ca  6a00                 push 0
// 0048e6cc  6a00                 push 0
// 0048e6ce  e8b92e2100           call 0x6a158c

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
