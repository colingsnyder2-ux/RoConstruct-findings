// from server: 100% by king_originala
// roc 2008-06 006353c0  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006353c0
//
// 006353c0  55                   push ebp
// 006353c1  8bec                 mov ebp, esp
// 006353c3  6aff                 push -1
// 006353c5  6830a07d00           push 0x7da030
// 006353ca  64a100000000         mov eax, dword ptr fs:[0]
// 006353d0  50                   push eax
// 006353d1  64892500000000       mov dword ptr fs:[0], esp
// 006353d8  51                   push ecx
// 006353d9  53                   push ebx
// 006353da  56                   push esi
// 006353db  57                   push edi
// 006353dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006353df  8bf1                 mov esi, ecx
// 006353e1  6a14                 push 0x14
// 006353e3  c70600000000         mov dword ptr [esi], 0
// 006353e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006353f0  e82bb50600           call 0x6a0920
// 006353f5  83c404               add esp, 4
// 006353f8  85c0                 test eax, eax
// 006353fa  7419                 je 0x635415
// 006353fc  b901000000           mov ecx, 1
// 00635401  894804               mov dword ptr [eax + 4], ecx
// 00635404  894808               mov dword ptr [eax + 8], ecx
// 00635407  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063540a  c700d0858400         mov dword ptr [eax], 0x8485d0
// 00635410  89480c               mov dword ptr [eax + 0xc], ecx
// 00635413  eb02                 jmp 0x635417
// 00635415  33c0                 xor eax, eax
// 00635417  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063541a  8906                 mov dword ptr [esi], eax
// 0063541c  5f                   pop edi
// 0063541d  8bc6                 mov eax, esi
// 0063541f  5e                   pop esi
// 00635420  64890d00000000       mov dword ptr fs:[0], ecx
// 00635427  5b                   pop ebx
// 00635428  8be5                 mov esp, ebp
// 0063542a  5d                   pop ebp
// 0063542b  c20800               ret 8

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Control {
    unsigned long table;
    long strong;
    long weak;
    void* object;
    unsigned long unused;
};

struct S {
    Control* control;
    S(void* object, int deleter);
};

S::S(void* object, int deleter)
{
    control = 0;
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = 0x8485d0;
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
