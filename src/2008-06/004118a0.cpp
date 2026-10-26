// from server: 100% by tester
// roc 2008-06 004118a0  unit: ChatEnter  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004118a0
//
// 004118a0  55                   push ebp
// 004118a1  8bec                 mov ebp, esp
// 004118a3  6aff                 push -1
// 004118a5  6800d77b00           push 0x7bd700
// 004118aa  64a100000000         mov eax, dword ptr fs:[0]
// 004118b0  50                   push eax
// 004118b1  64892500000000       mov dword ptr fs:[0], esp
// 004118b8  51                   push ecx
// 004118b9  53                   push ebx
// 004118ba  56                   push esi
// 004118bb  57                   push edi
// 004118bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004118bf  8bf1                 mov esi, ecx
// 004118c1  6a14                 push 0x14
// 004118c3  c70600000000         mov dword ptr [esi], 0
// 004118c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004118d0  e84bf02800           call 0x6a0920
// 004118d5  83c404               add esp, 4
// 004118d8  85c0                 test eax, eax
// 004118da  7419                 je 0x4118f5
// 004118dc  b901000000           mov ecx, 1
// 004118e1  894804               mov dword ptr [eax + 4], ecx
// 004118e4  894808               mov dword ptr [eax + 8], ecx
// 004118e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004118ea  c70080e08000         mov dword ptr [eax], 0x80e080
// 004118f0  89480c               mov dword ptr [eax + 0xc], ecx
// 004118f3  eb02                 jmp 0x4118f7
// 004118f5  33c0                 xor eax, eax
// 004118f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004118fa  8906                 mov dword ptr [esi], eax
// 004118fc  5f                   pop edi
// 004118fd  8bc6                 mov eax, esi
// 004118ff  5e                   pop esi
// 00411900  64890d00000000       mov dword ptr fs:[0], ecx
// 00411907  5b                   pop ebx
// 00411908  8be5                 mov esp, ebp
// 0041190a  5d                   pop ebp
// 0041190b  c20800               ret 8
// 0041190e  8b5508               mov edx, dword ptr [ebp + 8]
// 00411911  52                   push edx
// 00411912  8d4d0c               lea ecx, [ebp + 0xc]
// 00411915  e81645ffff           call 0x405e30
// 0041191a  6a00                 push 0
// 0041191c  6a00                 push 0
// 0041191e  e869fc2800           call 0x6a158c

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
