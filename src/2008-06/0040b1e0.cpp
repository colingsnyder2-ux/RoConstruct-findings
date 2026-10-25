// from server: 100% by tester
// roc 2008-06 0040b1e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b1e0
//
// 0040b1e0  55                   push ebp
// 0040b1e1  8bec                 mov ebp, esp
// 0040b1e3  6aff                 push -1
// 0040b1e5  6870d17b00           push 0x7bd170
// 0040b1ea  64a100000000         mov eax, dword ptr fs:[0]
// 0040b1f0  50                   push eax
// 0040b1f1  64892500000000       mov dword ptr fs:[0], esp
// 0040b1f8  51                   push ecx
// 0040b1f9  53                   push ebx
// 0040b1fa  56                   push esi
// 0040b1fb  57                   push edi
// 0040b1fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040b1ff  8bf1                 mov esi, ecx
// 0040b201  6a14                 push 0x14
// 0040b203  c70600000000         mov dword ptr [esi], 0
// 0040b209  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040b210  e80b572900           call 0x6a0920
// 0040b215  83c404               add esp, 4
// 0040b218  85c0                 test eax, eax
// 0040b21a  7419                 je 0x40b235
// 0040b21c  b901000000           mov ecx, 1
// 0040b221  894804               mov dword ptr [eax + 4], ecx
// 0040b224  894808               mov dword ptr [eax + 8], ecx
// 0040b227  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040b22a  c70054bc8000         mov dword ptr [eax], 0x80bc54
// 0040b230  89480c               mov dword ptr [eax + 0xc], ecx
// 0040b233  eb02                 jmp 0x40b237
// 0040b235  33c0                 xor eax, eax
// 0040b237  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040b23a  8906                 mov dword ptr [esi], eax
// 0040b23c  5f                   pop edi
// 0040b23d  8bc6                 mov eax, esi
// 0040b23f  5e                   pop esi
// 0040b240  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b247  5b                   pop ebx
// 0040b248  8be5                 mov esp, ebp
// 0040b24a  5d                   pop ebp
// 0040b24b  c20800               ret 8

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
