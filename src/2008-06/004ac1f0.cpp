// from server: 100% by tester
// roc 2008-06 004ac1f0  unit: RBX::Network::Replicator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac1f0
//
// 004ac1f0  55                   push ebp
// 004ac1f1  8bec                 mov ebp, esp
// 004ac1f3  6aff                 push -1
// 004ac1f5  6850837c00           push 0x7c8350
// 004ac1fa  64a100000000         mov eax, dword ptr fs:[0]
// 004ac200  50                   push eax
// 004ac201  64892500000000       mov dword ptr fs:[0], esp
// 004ac208  51                   push ecx
// 004ac209  53                   push ebx
// 004ac20a  56                   push esi
// 004ac20b  57                   push edi
// 004ac20c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac20f  8bf1                 mov esi, ecx
// 004ac211  6a10                 push 0x10
// 004ac213  c70600000000         mov dword ptr [esi], 0
// 004ac219  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac220  e8fb461f00           call 0x6a0920
// 004ac225  83c404               add esp, 4
// 004ac228  85c0                 test eax, eax
// 004ac22a  7419                 je 0x4ac245
// 004ac22c  b901000000           mov ecx, 1
// 004ac231  894804               mov dword ptr [eax + 4], ecx
// 004ac234  894808               mov dword ptr [eax + 8], ecx
// 004ac237  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac23a  c70044478200         mov dword ptr [eax], 0x824744
// 004ac240  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac243  eb02                 jmp 0x4ac247
// 004ac245  33c0                 xor eax, eax
// 004ac247  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac24a  8906                 mov dword ptr [esi], eax
// 004ac24c  5f                   pop edi
// 004ac24d  8bc6                 mov eax, esi
// 004ac24f  5e                   pop esi
// 004ac250  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac257  5b                   pop ebx
// 004ac258  8be5                 mov esp, ebp
// 004ac25a  5d                   pop ebp
// 004ac25b  c20400               ret 4
// 004ac25e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac261  52                   push edx
// 004ac262  e809b9f7ff           call 0x427b70
// 004ac267  83c404               add esp, 4
// 004ac26a  6a00                 push 0
// 004ac26c  6a00                 push 0
// 004ac26e  e819531f00           call 0x6a158c

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
