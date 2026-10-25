// from server: 100% by tester
// roc 2008-06 00405e60  unit: boost::detail::sp_counted_base  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405e60
//
// 00405e60  55                   push ebp
// 00405e61  8bec                 mov ebp, esp
// 00405e63  6aff                 push -1
// 00405e65  68d0cd7b00           push 0x7bcdd0
// 00405e6a  64a100000000         mov eax, dword ptr fs:[0]
// 00405e70  50                   push eax
// 00405e71  64892500000000       mov dword ptr fs:[0], esp
// 00405e78  51                   push ecx
// 00405e79  53                   push ebx
// 00405e7a  56                   push esi
// 00405e7b  57                   push edi
// 00405e7c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405e7f  8bf1                 mov esi, ecx
// 00405e81  6a14                 push 0x14
// 00405e83  c70600000000         mov dword ptr [esi], 0
// 00405e89  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00405e90  e88baa2900           call 0x6a0920
// 00405e95  83c404               add esp, 4
// 00405e98  85c0                 test eax, eax
// 00405e9a  7419                 je 0x405eb5
// 00405e9c  b901000000           mov ecx, 1
// 00405ea1  894804               mov dword ptr [eax + 4], ecx
// 00405ea4  894808               mov dword ptr [eax + 8], ecx
// 00405ea7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405eaa  c70004b38000         mov dword ptr [eax], 0x80b304
// 00405eb0  89480c               mov dword ptr [eax + 0xc], ecx
// 00405eb3  eb02                 jmp 0x405eb7
// 00405eb5  33c0                 xor eax, eax
// 00405eb7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405eba  8906                 mov dword ptr [esi], eax
// 00405ebc  5f                   pop edi
// 00405ebd  8bc6                 mov eax, esi
// 00405ebf  5e                   pop esi
// 00405ec0  64890d00000000       mov dword ptr fs:[0], ecx
// 00405ec7  5b                   pop ebx
// 00405ec8  8be5                 mov esp, ebp
// 00405eca  5d                   pop ebp
// 00405ecb  c20800               ret 8

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
