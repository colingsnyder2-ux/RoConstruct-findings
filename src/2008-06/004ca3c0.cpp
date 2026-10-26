// from server: 100% by king_originala
// roc 2008-06 004ca3c0  unit: RBX::Network::RoundRobinPhysicsSender  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca3c0
//
// 004ca3c0  55                   push ebp
// 004ca3c1  8bec                 mov ebp, esp
// 004ca3c3  6aff                 push -1
// 004ca3c5  6800987c00           push 0x7c9800
// 004ca3ca  64a100000000         mov eax, dword ptr fs:[0]
// 004ca3d0  50                   push eax
// 004ca3d1  64892500000000       mov dword ptr fs:[0], esp
// 004ca3d8  51                   push ecx
// 004ca3d9  53                   push ebx
// 004ca3da  56                   push esi
// 004ca3db  57                   push edi
// 004ca3dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ca3df  8bf1                 mov esi, ecx
// 004ca3e1  6a14                 push 0x14
// 004ca3e3  c70600000000         mov dword ptr [esi], 0
// 004ca3e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ca3f0  e82b651d00           call 0x6a0920
// 004ca3f5  83c404               add esp, 4
// 004ca3f8  85c0                 test eax, eax
// 004ca3fa  7419                 je 0x4ca415
// 004ca3fc  b901000000           mov ecx, 1
// 004ca401  894804               mov dword ptr [eax + 4], ecx
// 004ca404  894808               mov dword ptr [eax + 8], ecx
// 004ca407  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ca40a  c70030688200         mov dword ptr [eax], 0x826830
// 004ca410  89480c               mov dword ptr [eax + 0xc], ecx
// 004ca413  eb02                 jmp 0x4ca417
// 004ca415  33c0                 xor eax, eax
// 004ca417  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ca41a  8906                 mov dword ptr [esi], eax
// 004ca41c  5f                   pop edi
// 004ca41d  8bc6                 mov eax, esi
// 004ca41f  5e                   pop esi
// 004ca420  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca427  5b                   pop ebx
// 004ca428  8be5                 mov esp, ebp
// 004ca42a  5d                   pop ebp
// 004ca42b  c20800               ret 8
// 004ca42e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ca431  52                   push edx
// 004ca432  8d4d0c               lea ecx, [ebp + 0xc]
// 004ca435  e8f6b9f3ff           call 0x405e30
// 004ca43a  6a00                 push 0
// 004ca43c  6a00                 push 0
// 004ca43e  e849711d00           call 0x6a158c

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Deleter
{
    void operator()(void*) const;
};

struct ControlBlock
{
    virtual ~ControlBlock();
    virtual void dispose();
    virtual void destroy();
    virtual void* get_deleter(const void*);

    long strong;
    long weak;
    void* pointer;
    Deleter deleter;

    ControlBlock(void*, Deleter);
};

inline ControlBlock::ControlBlock(void* p, Deleter d)
    : strong(1), weak(1), pointer(p), deleter(d)
{
}

struct S
{
    ControlBlock* block;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : block(0)
{
    try
    {
        block = new ControlBlock(p, d);
    }
    catch (...)
    {
        d(p);
        throw;
    }
}
