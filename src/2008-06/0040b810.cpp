// from server: 100% by tester
// roc 2008-06 0040b810  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b810
//
// 0040b810  55                   push ebp
// 0040b811  8bec                 mov ebp, esp
// 0040b813  6aff                 push -1
// 0040b815  68d0d17b00           push 0x7bd1d0
// 0040b81a  64a100000000         mov eax, dword ptr fs:[0]
// 0040b820  50                   push eax
// 0040b821  64892500000000       mov dword ptr fs:[0], esp
// 0040b828  51                   push ecx
// 0040b829  53                   push ebx
// 0040b82a  56                   push esi
// 0040b82b  57                   push edi
// 0040b82c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040b82f  8bf1                 mov esi, ecx
// 0040b831  6a14                 push 0x14
// 0040b833  c70600000000         mov dword ptr [esi], 0
// 0040b839  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040b840  e8db502900           call 0x6a0920
// 0040b845  83c404               add esp, 4
// 0040b848  85c0                 test eax, eax
// 0040b84a  7419                 je 0x40b865
// 0040b84c  b901000000           mov ecx, 1
// 0040b851  894804               mov dword ptr [eax + 4], ecx
// 0040b854  894808               mov dword ptr [eax + 8], ecx
// 0040b857  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040b85a  c70010be8000         mov dword ptr [eax], 0x80be10
// 0040b860  89480c               mov dword ptr [eax + 0xc], ecx
// 0040b863  eb02                 jmp 0x40b867
// 0040b865  33c0                 xor eax, eax
// 0040b867  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040b86a  8906                 mov dword ptr [esi], eax
// 0040b86c  5f                   pop edi
// 0040b86d  8bc6                 mov eax, esi
// 0040b86f  5e                   pop esi
// 0040b870  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b877  5b                   pop ebx
// 0040b878  8be5                 mov esp, ebp
// 0040b87a  5d                   pop ebp
// 0040b87b  c20800               ret 8
// 0040b87e  8b5508               mov edx, dword ptr [ebp + 8]
// 0040b881  52                   push edx
// 0040b882  8d4d0c               lea ecx, [ebp + 0xc]
// 0040b885  e8a6a5ffff           call 0x405e30
// 0040b88a  6a00                 push 0
// 0040b88c  6a00                 push 0
// 0040b88e  e8f95c2900           call 0x6a158c

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
