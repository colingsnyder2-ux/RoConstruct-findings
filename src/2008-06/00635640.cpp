// from server: 100% by king_originala
// roc 2008-06 00635640  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635640
//
// 00635640  55                   push ebp
// 00635641  8bec                 mov ebp, esp
// 00635643  6aff                 push -1
// 00635645  6840a07d00           push 0x7da040
// 0063564a  64a100000000         mov eax, dword ptr fs:[0]
// 00635650  50                   push eax
// 00635651  64892500000000       mov dword ptr fs:[0], esp
// 00635658  51                   push ecx
// 00635659  53                   push ebx
// 0063565a  56                   push esi
// 0063565b  57                   push edi
// 0063565c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0063565f  8bf1                 mov esi, ecx
// 00635661  6a14                 push 0x14
// 00635663  c70600000000         mov dword ptr [esi], 0
// 00635669  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00635670  e8abb20600           call 0x6a0920
// 00635675  83c404               add esp, 4
// 00635678  85c0                 test eax, eax
// 0063567a  7419                 je 0x635695
// 0063567c  b901000000           mov ecx, 1
// 00635681  894804               mov dword ptr [eax + 4], ecx
// 00635684  894808               mov dword ptr [eax + 8], ecx
// 00635687  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063568a  c700b0868400         mov dword ptr [eax], 0x8486b0
// 00635690  89480c               mov dword ptr [eax + 0xc], ecx
// 00635693  eb02                 jmp 0x635697
// 00635695  33c0                 xor eax, eax
// 00635697  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063569a  8906                 mov dword ptr [esi], eax
// 0063569c  5f                   pop edi
// 0063569d  8bc6                 mov eax, esi
// 0063569f  5e                   pop esi
// 006356a0  64890d00000000       mov dword ptr fs:[0], ecx
// 006356a7  5b                   pop ebx
// 006356a8  8be5                 mov esp, ebp
// 006356aa  5d                   pop ebp
// 006356ab  c20800               ret 8
// 006356ae  8b5508               mov edx, dword ptr [ebp + 8]
// 006356b1  52                   push edx
// 006356b2  8d4d0c               lea ecx, [ebp + 0xc]
// 006356b5  e87607ddff           call 0x405e30
// 006356ba  6a00                 push 0
// 006356bc  6a00                 push 0
// 006356be  e8c9be0600           call 0x6a158c

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
