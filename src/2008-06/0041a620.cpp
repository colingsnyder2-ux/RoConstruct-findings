// from server: 100% by tester
// roc 2008-06 0041a620  unit: boost::X::U?$last_value::?$holder  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a620
//
// 0041a620  55                   push ebp
// 0041a621  8bec                 mov ebp, esp
// 0041a623  6aff                 push -1
// 0041a625  6840df7b00           push 0x7bdf40
// 0041a62a  64a100000000         mov eax, dword ptr fs:[0]
// 0041a630  50                   push eax
// 0041a631  64892500000000       mov dword ptr fs:[0], esp
// 0041a638  51                   push ecx
// 0041a639  53                   push ebx
// 0041a63a  56                   push esi
// 0041a63b  57                   push edi
// 0041a63c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041a63f  8bf1                 mov esi, ecx
// 0041a641  6a10                 push 0x10
// 0041a643  c70600000000         mov dword ptr [esi], 0
// 0041a649  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041a650  e8cb622800           call 0x6a0920
// 0041a655  83c404               add esp, 4
// 0041a658  85c0                 test eax, eax
// 0041a65a  7419                 je 0x41a675
// 0041a65c  b901000000           mov ecx, 1
// 0041a661  894804               mov dword ptr [eax + 4], ecx
// 0041a664  894808               mov dword ptr [eax + 8], ecx
// 0041a667  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041a66a  c700e8ec8000         mov dword ptr [eax], 0x80ece8
// 0041a670  89480c               mov dword ptr [eax + 0xc], ecx
// 0041a673  eb02                 jmp 0x41a677
// 0041a675  33c0                 xor eax, eax
// 0041a677  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041a67a  8906                 mov dword ptr [esi], eax
// 0041a67c  5f                   pop edi
// 0041a67d  8bc6                 mov eax, esi
// 0041a67f  5e                   pop esi
// 0041a680  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a687  5b                   pop ebx
// 0041a688  8be5                 mov esp, ebp
// 0041a68a  5d                   pop ebp
// 0041a68b  c20400               ret 4
// 0041a68e  8b5508               mov edx, dword ptr [ebp + 8]
// 0041a691  52                   push edx
// 0041a692  e8d9d40000           call 0x427b70
// 0041a697  83c404               add esp, 4
// 0041a69a  6a00                 push 0
// 0041a69c  6a00                 push 0
// 0041a69e  e8e96e2800           call 0x6a158c

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
