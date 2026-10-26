// from server: 100% by tester
// roc 2008-06 004ac0d0  unit: RBX::Network::Replicator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac0d0
//
// 004ac0d0  55                   push ebp
// 004ac0d1  8bec                 mov ebp, esp
// 004ac0d3  6aff                 push -1
// 004ac0d5  6830837c00           push 0x7c8330
// 004ac0da  64a100000000         mov eax, dword ptr fs:[0]
// 004ac0e0  50                   push eax
// 004ac0e1  64892500000000       mov dword ptr fs:[0], esp
// 004ac0e8  51                   push ecx
// 004ac0e9  53                   push ebx
// 004ac0ea  56                   push esi
// 004ac0eb  57                   push edi
// 004ac0ec  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac0ef  8bf1                 mov esi, ecx
// 004ac0f1  6a10                 push 0x10
// 004ac0f3  c70600000000         mov dword ptr [esi], 0
// 004ac0f9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac100  e81b481f00           call 0x6a0920
// 004ac105  83c404               add esp, 4
// 004ac108  85c0                 test eax, eax
// 004ac10a  7419                 je 0x4ac125
// 004ac10c  b901000000           mov ecx, 1
// 004ac111  894804               mov dword ptr [eax + 4], ecx
// 004ac114  894808               mov dword ptr [eax + 8], ecx
// 004ac117  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac11a  c7001c478200         mov dword ptr [eax], 0x82471c
// 004ac120  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac123  eb02                 jmp 0x4ac127
// 004ac125  33c0                 xor eax, eax
// 004ac127  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac12a  8906                 mov dword ptr [esi], eax
// 004ac12c  5f                   pop edi
// 004ac12d  8bc6                 mov eax, esi
// 004ac12f  5e                   pop esi
// 004ac130  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac137  5b                   pop ebx
// 004ac138  8be5                 mov esp, ebp
// 004ac13a  5d                   pop ebp
// 004ac13b  c20400               ret 4
// 004ac13e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac141  52                   push edx
// 004ac142  e829baf7ff           call 0x427b70
// 004ac147  83c404               add esp, 4
// 004ac14a  6a00                 push 0
// 004ac14c  6a00                 push 0
// 004ac14e  e839541f00           call 0x6a158c

extern void* __cdecl operator new(unsigned int);
extern const unsigned char control_table[];

struct Object {
    virtual ~Object();
};

struct Deleter {};

struct Control {
    const void* table;
    long strong;
    long weak;
    Object* object;
};

struct S {
    Control* control;
    S(Object* object);
};

S::S(Object* object) : control(0)
{
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = control_table;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        delete object;
        throw;
    }
}
