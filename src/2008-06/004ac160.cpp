// from server: 100% by tester
// roc 2008-06 004ac160  unit: RBX::Network::Replicator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac160
//
// 004ac160  55                   push ebp
// 004ac161  8bec                 mov ebp, esp
// 004ac163  6aff                 push -1
// 004ac165  6840837c00           push 0x7c8340
// 004ac16a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac170  50                   push eax
// 004ac171  64892500000000       mov dword ptr fs:[0], esp
// 004ac178  51                   push ecx
// 004ac179  53                   push ebx
// 004ac17a  56                   push esi
// 004ac17b  57                   push edi
// 004ac17c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac17f  8bf1                 mov esi, ecx
// 004ac181  6a10                 push 0x10
// 004ac183  c70600000000         mov dword ptr [esi], 0
// 004ac189  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac190  e88b471f00           call 0x6a0920
// 004ac195  83c404               add esp, 4
// 004ac198  85c0                 test eax, eax
// 004ac19a  7419                 je 0x4ac1b5
// 004ac19c  b901000000           mov ecx, 1
// 004ac1a1  894804               mov dword ptr [eax + 4], ecx
// 004ac1a4  894808               mov dword ptr [eax + 8], ecx
// 004ac1a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac1aa  c70030478200         mov dword ptr [eax], 0x824730
// 004ac1b0  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac1b3  eb02                 jmp 0x4ac1b7
// 004ac1b5  33c0                 xor eax, eax
// 004ac1b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac1ba  8906                 mov dword ptr [esi], eax
// 004ac1bc  5f                   pop edi
// 004ac1bd  8bc6                 mov eax, esi
// 004ac1bf  5e                   pop esi
// 004ac1c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac1c7  5b                   pop ebx
// 004ac1c8  8be5                 mov esp, ebp
// 004ac1ca  5d                   pop ebp
// 004ac1cb  c20400               ret 4

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
