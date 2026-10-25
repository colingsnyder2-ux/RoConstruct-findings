// from server: 100% by tester
// roc 2008-06 004ac040  unit: RBX::Network::Replicator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac040
//
// 004ac040  55                   push ebp
// 004ac041  8bec                 mov ebp, esp
// 004ac043  6aff                 push -1
// 004ac045  6820837c00           push 0x7c8320
// 004ac04a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac050  50                   push eax
// 004ac051  64892500000000       mov dword ptr fs:[0], esp
// 004ac058  51                   push ecx
// 004ac059  53                   push ebx
// 004ac05a  56                   push esi
// 004ac05b  57                   push edi
// 004ac05c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac05f  8bf1                 mov esi, ecx
// 004ac061  6a10                 push 0x10
// 004ac063  c70600000000         mov dword ptr [esi], 0
// 004ac069  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac070  e8ab481f00           call 0x6a0920
// 004ac075  83c404               add esp, 4
// 004ac078  85c0                 test eax, eax
// 004ac07a  7419                 je 0x4ac095
// 004ac07c  b901000000           mov ecx, 1
// 004ac081  894804               mov dword ptr [eax + 4], ecx
// 004ac084  894808               mov dword ptr [eax + 8], ecx
// 004ac087  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac08a  c700f4468200         mov dword ptr [eax], 0x8246f4
// 004ac090  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac093  eb02                 jmp 0x4ac097
// 004ac095  33c0                 xor eax, eax
// 004ac097  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac09a  8906                 mov dword ptr [esi], eax
// 004ac09c  5f                   pop edi
// 004ac09d  8bc6                 mov eax, esi
// 004ac09f  5e                   pop esi
// 004ac0a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac0a7  5b                   pop ebx
// 004ac0a8  8be5                 mov esp, ebp
// 004ac0aa  5d                   pop ebp
// 004ac0ab  c20400               ret 4

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
