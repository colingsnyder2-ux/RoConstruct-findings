// from server: 100% by tester
// roc 2008-06 0044d4b0  unit: CRobloxApp  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d4b0
//
// 0044d4b0  55                   push ebp
// 0044d4b1  8bec                 mov ebp, esp
// 0044d4b3  6aff                 push -1
// 0044d4b5  6850147c00           push 0x7c1450
// 0044d4ba  64a100000000         mov eax, dword ptr fs:[0]
// 0044d4c0  50                   push eax
// 0044d4c1  64892500000000       mov dword ptr fs:[0], esp
// 0044d4c8  51                   push ecx
// 0044d4c9  53                   push ebx
// 0044d4ca  56                   push esi
// 0044d4cb  57                   push edi
// 0044d4cc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044d4cf  8bf1                 mov esi, ecx
// 0044d4d1  6a10                 push 0x10
// 0044d4d3  c70600000000         mov dword ptr [esi], 0
// 0044d4d9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044d4e0  e83b342500           call 0x6a0920
// 0044d4e5  83c404               add esp, 4
// 0044d4e8  85c0                 test eax, eax
// 0044d4ea  7419                 je 0x44d505
// 0044d4ec  b901000000           mov ecx, 1
// 0044d4f1  894804               mov dword ptr [eax + 4], ecx
// 0044d4f4  894808               mov dword ptr [eax + 8], ecx
// 0044d4f7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0044d4fa  c70000698100         mov dword ptr [eax], 0x816900
// 0044d500  89480c               mov dword ptr [eax + 0xc], ecx
// 0044d503  eb02                 jmp 0x44d507
// 0044d505  33c0                 xor eax, eax
// 0044d507  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044d50a  8906                 mov dword ptr [esi], eax
// 0044d50c  5f                   pop edi
// 0044d50d  8bc6                 mov eax, esi
// 0044d50f  5e                   pop esi
// 0044d510  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d517  5b                   pop ebx
// 0044d518  8be5                 mov esp, ebp
// 0044d51a  5d                   pop ebp
// 0044d51b  c20400               ret 4
// 0044d51e  8b5508               mov edx, dword ptr [ebp + 8]
// 0044d521  52                   push edx
// 0044d522  e869ffffff           call 0x44d490
// 0044d527  83c404               add esp, 4
// 0044d52a  6a00                 push 0
// 0044d52c  6a00                 push 0
// 0044d52e  e859402500           call 0x6a158c

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
