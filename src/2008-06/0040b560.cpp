// from server: 100% by tester
// roc 2008-06 0040b560  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b560
//
// 0040b560  55                   push ebp
// 0040b561  8bec                 mov ebp, esp
// 0040b563  6aff                 push -1
// 0040b565  6880d17b00           push 0x7bd180
// 0040b56a  64a100000000         mov eax, dword ptr fs:[0]
// 0040b570  50                   push eax
// 0040b571  64892500000000       mov dword ptr fs:[0], esp
// 0040b578  51                   push ecx
// 0040b579  53                   push ebx
// 0040b57a  56                   push esi
// 0040b57b  57                   push edi
// 0040b57c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040b57f  8bf1                 mov esi, ecx
// 0040b581  6a14                 push 0x14
// 0040b583  c70600000000         mov dword ptr [esi], 0
// 0040b589  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040b590  e88b532900           call 0x6a0920
// 0040b595  83c404               add esp, 4
// 0040b598  85c0                 test eax, eax
// 0040b59a  7419                 je 0x40b5b5
// 0040b59c  b901000000           mov ecx, 1
// 0040b5a1  894804               mov dword ptr [eax + 4], ecx
// 0040b5a4  894808               mov dword ptr [eax + 8], ecx
// 0040b5a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040b5aa  c70030bd8000         mov dword ptr [eax], 0x80bd30
// 0040b5b0  89480c               mov dword ptr [eax + 0xc], ecx
// 0040b5b3  eb02                 jmp 0x40b5b7
// 0040b5b5  33c0                 xor eax, eax
// 0040b5b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040b5ba  8906                 mov dword ptr [esi], eax
// 0040b5bc  5f                   pop edi
// 0040b5bd  8bc6                 mov eax, esi
// 0040b5bf  5e                   pop esi
// 0040b5c0  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b5c7  5b                   pop ebx
// 0040b5c8  8be5                 mov esp, ebp
// 0040b5ca  5d                   pop ebp
// 0040b5cb  c20800               ret 8
// 0040b5ce  8b5508               mov edx, dword ptr [ebp + 8]
// 0040b5d1  52                   push edx
// 0040b5d2  8d4d0c               lea ecx, [ebp + 0xc]
// 0040b5d5  e856a8ffff           call 0x405e30
// 0040b5da  6a00                 push 0
// 0040b5dc  6a00                 push 0
// 0040b5de  e8a95f2900           call 0x6a158c

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
