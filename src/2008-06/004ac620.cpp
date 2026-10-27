// from server: 100% by king_originala
// roc 2008-06 004ac620  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac620
//
// 004ac620  55                   push ebp
// 004ac621  8bec                 mov ebp, esp
// 004ac623  6aff                 push -1
// 004ac625  68a0837c00           push 0x7c83a0
// 004ac62a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac630  50                   push eax
// 004ac631  64892500000000       mov dword ptr fs:[0], esp
// 004ac638  51                   push ecx
// 004ac639  53                   push ebx
// 004ac63a  56                   push esi
// 004ac63b  57                   push edi
// 004ac63c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac63f  8bf1                 mov esi, ecx
// 004ac641  6a14                 push 0x14
// 004ac643  c70600000000         mov dword ptr [esi], 0
// 004ac649  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac650  e8cb421f00           call 0x6a0920
// 004ac655  83c404               add esp, 4
// 004ac658  85c0                 test eax, eax
// 004ac65a  7419                 je 0x4ac675
// 004ac65c  b901000000           mov ecx, 1
// 004ac661  894804               mov dword ptr [eax + 4], ecx
// 004ac664  894808               mov dword ptr [eax + 8], ecx
// 004ac667  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac66a  c700a8478200         mov dword ptr [eax], 0x8247a8
// 004ac670  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac673  eb02                 jmp 0x4ac677
// 004ac675  33c0                 xor eax, eax
// 004ac677  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac67a  8906                 mov dword ptr [esi], eax
// 004ac67c  5f                   pop edi
// 004ac67d  8bc6                 mov eax, esi
// 004ac67f  5e                   pop esi
// 004ac680  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac687  5b                   pop ebx
// 004ac688  8be5                 mov esp, ebp
// 004ac68a  5d                   pop ebp
// 004ac68b  c20800               ret 8
// 004ac68e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac691  52                   push edx
// 004ac692  8d4d0c               lea ecx, [ebp + 0xc]
// 004ac695  e89697f5ff           call 0x405e30
// 004ac69a  6a00                 push 0
// 004ac69c  6a00                 push 0
// 004ac69e  e8e94e1f00           call 0x6a158c

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
