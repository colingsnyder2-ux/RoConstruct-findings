// from server: 100% by tester
// roc 2008-06 0040c620  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c620
//
// 0040c620  55                   push ebp
// 0040c621  8bec                 mov ebp, esp
// 0040c623  6aff                 push -1
// 0040c625  68c0d27b00           push 0x7bd2c0
// 0040c62a  64a100000000         mov eax, dword ptr fs:[0]
// 0040c630  50                   push eax
// 0040c631  64892500000000       mov dword ptr fs:[0], esp
// 0040c638  51                   push ecx
// 0040c639  53                   push ebx
// 0040c63a  56                   push esi
// 0040c63b  57                   push edi
// 0040c63c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040c63f  8bf1                 mov esi, ecx
// 0040c641  6a14                 push 0x14
// 0040c643  c70600000000         mov dword ptr [esi], 0
// 0040c649  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040c650  e8cb422900           call 0x6a0920
// 0040c655  83c404               add esp, 4
// 0040c658  85c0                 test eax, eax
// 0040c65a  7419                 je 0x40c675
// 0040c65c  b901000000           mov ecx, 1
// 0040c661  894804               mov dword ptr [eax + 4], ecx
// 0040c664  894808               mov dword ptr [eax + 8], ecx
// 0040c667  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040c66a  c70030c38000         mov dword ptr [eax], 0x80c330
// 0040c670  89480c               mov dword ptr [eax + 0xc], ecx
// 0040c673  eb02                 jmp 0x40c677
// 0040c675  33c0                 xor eax, eax
// 0040c677  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040c67a  8906                 mov dword ptr [esi], eax
// 0040c67c  5f                   pop edi
// 0040c67d  8bc6                 mov eax, esi
// 0040c67f  5e                   pop esi
// 0040c680  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c687  5b                   pop ebx
// 0040c688  8be5                 mov esp, ebp
// 0040c68a  5d                   pop ebp
// 0040c68b  c20800               ret 8
// 0040c68e  8b5508               mov edx, dword ptr [ebp + 8]
// 0040c691  52                   push edx
// 0040c692  8d4d0c               lea ecx, [ebp + 0xc]
// 0040c695  e89697ffff           call 0x405e30
// 0040c69a  6a00                 push 0
// 0040c69c  6a00                 push 0
// 0040c69e  e8e94e2900           call 0x6a158c

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
