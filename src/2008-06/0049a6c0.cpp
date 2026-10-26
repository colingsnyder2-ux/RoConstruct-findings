// from server: 100% by tester
// roc 2008-06 0049a6c0  unit: RBX::Network::VServer::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a6c0
//
// 0049a6c0  55                   push ebp
// 0049a6c1  8bec                 mov ebp, esp
// 0049a6c3  6aff                 push -1
// 0049a6c5  6800707c00           push 0x7c7000
// 0049a6ca  64a100000000         mov eax, dword ptr fs:[0]
// 0049a6d0  50                   push eax
// 0049a6d1  64892500000000       mov dword ptr fs:[0], esp
// 0049a6d8  51                   push ecx
// 0049a6d9  53                   push ebx
// 0049a6da  56                   push esi
// 0049a6db  57                   push edi
// 0049a6dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049a6df  8bf1                 mov esi, ecx
// 0049a6e1  6a10                 push 0x10
// 0049a6e3  c70600000000         mov dword ptr [esi], 0
// 0049a6e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049a6f0  e82b622000           call 0x6a0920
// 0049a6f5  83c404               add esp, 4
// 0049a6f8  85c0                 test eax, eax
// 0049a6fa  7419                 je 0x49a715
// 0049a6fc  b901000000           mov ecx, 1
// 0049a701  894804               mov dword ptr [eax + 4], ecx
// 0049a704  894808               mov dword ptr [eax + 8], ecx
// 0049a707  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049a70a  c70074268200         mov dword ptr [eax], 0x822674
// 0049a710  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a713  eb02                 jmp 0x49a717
// 0049a715  33c0                 xor eax, eax
// 0049a717  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049a71a  8906                 mov dword ptr [esi], eax
// 0049a71c  5f                   pop edi
// 0049a71d  8bc6                 mov eax, esi
// 0049a71f  5e                   pop esi
// 0049a720  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a727  5b                   pop ebx
// 0049a728  8be5                 mov esp, ebp
// 0049a72a  5d                   pop ebp
// 0049a72b  c20400               ret 4
// 0049a72e  8b5508               mov edx, dword ptr [ebp + 8]
// 0049a731  52                   push edx
// 0049a732  e879f7ffff           call 0x499eb0
// 0049a737  83c404               add esp, 4
// 0049a73a  6a00                 push 0
// 0049a73c  6a00                 push 0
// 0049a73e  e8496e2000           call 0x6a158c

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
