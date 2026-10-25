// from server: 100% by king_originala
// roc 2008-06 005c91b0  unit: RBX::LaserTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c91b0
//
// 005c91b0  55                   push ebp
// 005c91b1  8bec                 mov ebp, esp
// 005c91b3  6aff                 push -1
// 005c91b5  6840517d00           push 0x7d5140
// 005c91ba  64a100000000         mov eax, dword ptr fs:[0]
// 005c91c0  50                   push eax
// 005c91c1  64892500000000       mov dword ptr fs:[0], esp
// 005c91c8  51                   push ecx
// 005c91c9  53                   push ebx
// 005c91ca  56                   push esi
// 005c91cb  57                   push edi
// 005c91cc  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c91cf  8bf1                 mov esi, ecx
// 005c91d1  6a14                 push 0x14
// 005c91d3  c70600000000         mov dword ptr [esi], 0
// 005c91d9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c91e0  e83b770d00           call 0x6a0920
// 005c91e5  83c404               add esp, 4
// 005c91e8  85c0                 test eax, eax
// 005c91ea  7419                 je 0x5c9205
// 005c91ec  b901000000           mov ecx, 1
// 005c91f1  894804               mov dword ptr [eax + 4], ecx
// 005c91f4  894808               mov dword ptr [eax + 8], ecx
// 005c91f7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c91fa  c700ec9b8300         mov dword ptr [eax], 0x839bec
// 005c9200  89480c               mov dword ptr [eax + 0xc], ecx
// 005c9203  eb02                 jmp 0x5c9207
// 005c9205  33c0                 xor eax, eax
// 005c9207  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c920a  8906                 mov dword ptr [esi], eax
// 005c920c  5f                   pop edi
// 005c920d  8bc6                 mov eax, esi
// 005c920f  5e                   pop esi
// 005c9210  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9217  5b                   pop ebx
// 005c9218  8be5                 mov esp, ebp
// 005c921a  5d                   pop ebp
// 005c921b  c20800               ret 8

void * __cdecl operator new(unsigned int);

struct Deleter {
    void operator()(void *) const;
};

struct ControlBlock {
    int strong;
    int weak;
    void *pointer;
    Deleter deleter;

    ControlBlock(void *, Deleter);
    virtual ~ControlBlock();
    virtual void dispose();
    virtual void destroy();
    virtual void *get_deleter(const void *);
};

inline ControlBlock::ControlBlock(void *p, Deleter d)
    : strong(1), weak(1), pointer(p), deleter(d)
{
}

struct SharedCount {
    ControlBlock *control;
    SharedCount(void *, Deleter);
};

SharedCount::SharedCount(void *p, Deleter d)
    : control(0)
{
    try {
        control = new ControlBlock(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}
