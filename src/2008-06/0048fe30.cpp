// from server: 100% by king_originala
// roc 2008-06 0048fe30  unit: RBX::VShirt::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fe30
//
// 0048fe30  55                   push ebp
// 0048fe31  8bec                 mov ebp, esp
// 0048fe33  6aff                 push -1
// 0048fe35  68f0637c00           push 0x7c63f0
// 0048fe3a  64a100000000         mov eax, dword ptr fs:[0]
// 0048fe40  50                   push eax
// 0048fe41  64892500000000       mov dword ptr fs:[0], esp
// 0048fe48  51                   push ecx
// 0048fe49  53                   push ebx
// 0048fe4a  56                   push esi
// 0048fe4b  57                   push edi
// 0048fe4c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048fe4f  8bf1                 mov esi, ecx
// 0048fe51  6a14                 push 0x14
// 0048fe53  c70600000000         mov dword ptr [esi], 0
// 0048fe59  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048fe60  e8bb0a2100           call 0x6a0920
// 0048fe65  83c404               add esp, 4
// 0048fe68  85c0                 test eax, eax
// 0048fe6a  7419                 je 0x48fe85
// 0048fe6c  b901000000           mov ecx, 1
// 0048fe71  894804               mov dword ptr [eax + 4], ecx
// 0048fe74  894808               mov dword ptr [eax + 8], ecx
// 0048fe77  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048fe7a  c700dc1a8200         mov dword ptr [eax], 0x821adc
// 0048fe80  89480c               mov dword ptr [eax + 0xc], ecx
// 0048fe83  eb02                 jmp 0x48fe87
// 0048fe85  33c0                 xor eax, eax
// 0048fe87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048fe8a  8906                 mov dword ptr [esi], eax
// 0048fe8c  5f                   pop edi
// 0048fe8d  8bc6                 mov eax, esi
// 0048fe8f  5e                   pop esi
// 0048fe90  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fe97  5b                   pop ebx
// 0048fe98  8be5                 mov esp, ebp
// 0048fe9a  5d                   pop ebp
// 0048fe9b  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const void* control_vtable[];

struct Control {
    const void** vtable;
    long strong;
    long weak;
    void* object;
    unsigned char deleter;
};

struct S {
    Control* control;
    S(void* object, int);
};

S::S(void* object, int) : control(0)
{
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->vtable = control_vtable;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        operator delete(object);
        throw;
    }
}
