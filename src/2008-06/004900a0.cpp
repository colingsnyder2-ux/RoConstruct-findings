// from server: 100% by king_originala
// roc 2008-06 004900a0  unit: RBX::VBodyColors::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004900a0
//
// 004900a0  55                   push ebp
// 004900a1  8bec                 mov ebp, esp
// 004900a3  6aff                 push -1
// 004900a5  6800647c00           push 0x7c6400
// 004900aa  64a100000000         mov eax, dword ptr fs:[0]
// 004900b0  50                   push eax
// 004900b1  64892500000000       mov dword ptr fs:[0], esp
// 004900b8  51                   push ecx
// 004900b9  53                   push ebx
// 004900ba  56                   push esi
// 004900bb  57                   push edi
// 004900bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004900bf  8bf1                 mov esi, ecx
// 004900c1  6a14                 push 0x14
// 004900c3  c70600000000         mov dword ptr [esi], 0
// 004900c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004900d0  e84b082100           call 0x6a0920
// 004900d5  83c404               add esp, 4
// 004900d8  85c0                 test eax, eax
// 004900da  7419                 je 0x4900f5
// 004900dc  b901000000           mov ecx, 1
// 004900e1  894804               mov dword ptr [eax + 4], ecx
// 004900e4  894808               mov dword ptr [eax + 8], ecx
// 004900e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004900ea  c700f81a8200         mov dword ptr [eax], 0x821af8
// 004900f0  89480c               mov dword ptr [eax + 0xc], ecx
// 004900f3  eb02                 jmp 0x4900f7
// 004900f5  33c0                 xor eax, eax
// 004900f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004900fa  8906                 mov dword ptr [esi], eax
// 004900fc  5f                   pop edi
// 004900fd  8bc6                 mov eax, esi
// 004900ff  5e                   pop esi
// 00490100  64890d00000000       mov dword ptr fs:[0], ecx
// 00490107  5b                   pop ebx
// 00490108  8be5                 mov esp, ebp
// 0049010a  5d                   pop ebp
// 0049010b  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

struct ControlBlock {
    void* table;
    long strong;
    long weak;
    Object* object;
    int deleter;
};

struct S {
    ControlBlock* control;
    S(Object* object, int deleter);
};

S::S(Object* object, int deleter)
    : control(0)
{
    try {
        ControlBlock* p =
            static_cast<ControlBlock*>(operator new(sizeof(ControlBlock)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = reinterpret_cast<void*>(0x00821af8);
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
