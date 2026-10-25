// from server: 100% by tester
// roc 2008-06 0040c430  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c430
//
// 0040c430  55                   push ebp
// 0040c431  8bec                 mov ebp, esp
// 0040c433  6aff                 push -1
// 0040c435  68b0d27b00           push 0x7bd2b0
// 0040c43a  64a100000000         mov eax, dword ptr fs:[0]
// 0040c440  50                   push eax
// 0040c441  64892500000000       mov dword ptr fs:[0], esp
// 0040c448  51                   push ecx
// 0040c449  53                   push ebx
// 0040c44a  56                   push esi
// 0040c44b  57                   push edi
// 0040c44c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040c44f  8bf1                 mov esi, ecx
// 0040c451  6a14                 push 0x14
// 0040c453  c70600000000         mov dword ptr [esi], 0
// 0040c459  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040c460  e8bb442900           call 0x6a0920
// 0040c465  83c404               add esp, 4
// 0040c468  85c0                 test eax, eax
// 0040c46a  7419                 je 0x40c485
// 0040c46c  b901000000           mov ecx, 1
// 0040c471  894804               mov dword ptr [eax + 4], ecx
// 0040c474  894808               mov dword ptr [eax + 8], ecx
// 0040c477  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040c47a  c70050c28000         mov dword ptr [eax], 0x80c250
// 0040c480  89480c               mov dword ptr [eax + 0xc], ecx
// 0040c483  eb02                 jmp 0x40c487
// 0040c485  33c0                 xor eax, eax
// 0040c487  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040c48a  8906                 mov dword ptr [esi], eax
// 0040c48c  5f                   pop edi
// 0040c48d  8bc6                 mov eax, esi
// 0040c48f  5e                   pop esi
// 0040c490  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c497  5b                   pop ebx
// 0040c498  8be5                 mov esp, ebp
// 0040c49a  5d                   pop ebp
// 0040c49b  c20800               ret 8

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
    Deleter deleter;
};

struct S {
    Control* control;
    S(Object* object, Deleter deleter);
};

S::S(Object* object, Deleter deleter) : control(0)
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
