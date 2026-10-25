// from server: 100% by tester
// roc 2008-06 00408d90  unit: RBX::VDebugSettings::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408d90
//
// 00408d90  55                   push ebp
// 00408d91  8bec                 mov ebp, esp
// 00408d93  6aff                 push -1
// 00408d95  68a0cf7b00           push 0x7bcfa0
// 00408d9a  64a100000000         mov eax, dword ptr fs:[0]
// 00408da0  50                   push eax
// 00408da1  64892500000000       mov dword ptr fs:[0], esp
// 00408da8  51                   push ecx
// 00408da9  53                   push ebx
// 00408daa  56                   push esi
// 00408dab  57                   push edi
// 00408dac  8965f0               mov dword ptr [ebp - 0x10], esp
// 00408daf  8bf1                 mov esi, ecx
// 00408db1  6a14                 push 0x14
// 00408db3  c70600000000         mov dword ptr [esi], 0
// 00408db9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00408dc0  e85b7b2900           call 0x6a0920
// 00408dc5  83c404               add esp, 4
// 00408dc8  85c0                 test eax, eax
// 00408dca  7419                 je 0x408de5
// 00408dcc  b901000000           mov ecx, 1
// 00408dd1  894804               mov dword ptr [eax + 4], ecx
// 00408dd4  894808               mov dword ptr [eax + 8], ecx
// 00408dd7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00408dda  c7007cb68000         mov dword ptr [eax], 0x80b67c
// 00408de0  89480c               mov dword ptr [eax + 0xc], ecx
// 00408de3  eb02                 jmp 0x408de7
// 00408de5  33c0                 xor eax, eax
// 00408de7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408dea  8906                 mov dword ptr [esi], eax
// 00408dec  5f                   pop edi
// 00408ded  8bc6                 mov eax, esi
// 00408def  5e                   pop esi
// 00408df0  64890d00000000       mov dword ptr fs:[0], ecx
// 00408df7  5b                   pop ebx
// 00408df8  8be5                 mov esp, ebp
// 00408dfa  5d                   pop ebp
// 00408dfb  c20800               ret 8

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
