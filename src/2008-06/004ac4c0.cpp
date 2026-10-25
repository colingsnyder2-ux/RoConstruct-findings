// from server: 100% by king_originala
// roc 2008-06 004ac4c0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac4c0
//
// 004ac4c0  55                   push ebp
// 004ac4c1  8bec                 mov ebp, esp
// 004ac4c3  6aff                 push -1
// 004ac4c5  6890837c00           push 0x7c8390
// 004ac4ca  64a100000000         mov eax, dword ptr fs:[0]
// 004ac4d0  50                   push eax
// 004ac4d1  64892500000000       mov dword ptr fs:[0], esp
// 004ac4d8  51                   push ecx
// 004ac4d9  53                   push ebx
// 004ac4da  56                   push esi
// 004ac4db  57                   push edi
// 004ac4dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac4df  8bf1                 mov esi, ecx
// 004ac4e1  6a14                 push 0x14
// 004ac4e3  c70600000000         mov dword ptr [esi], 0
// 004ac4e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac4f0  e82b441f00           call 0x6a0920
// 004ac4f5  83c404               add esp, 4
// 004ac4f8  85c0                 test eax, eax
// 004ac4fa  7419                 je 0x4ac515
// 004ac4fc  b901000000           mov ecx, 1
// 004ac501  894804               mov dword ptr [eax + 4], ecx
// 004ac504  894808               mov dword ptr [eax + 8], ecx
// 004ac507  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac50a  c70094478200         mov dword ptr [eax], 0x824794
// 004ac510  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac513  eb02                 jmp 0x4ac517
// 004ac515  33c0                 xor eax, eax
// 004ac517  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac51a  8906                 mov dword ptr [esi], eax
// 004ac51c  5f                   pop edi
// 004ac51d  8bc6                 mov eax, esi
// 004ac51f  5e                   pop esi
// 004ac520  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac527  5b                   pop ebx
// 004ac528  8be5                 mov esp, ebp
// 004ac52a  5d                   pop ebp
// 004ac52b  c20800               ret 8

void* __cdecl operator new(unsigned int);

struct Deleter
{
    void operator()(void*) const;
};

struct Count
{
    virtual ~Count();
    virtual void dispose();
    virtual void destroy();
    virtual void* get_deleter(const void*);

    long strong;
    long weak;
    void* pointer;
    Deleter deleter;

    Count(void*, Deleter);
};

inline Count::Count(void* p, Deleter d)
    : strong(1), weak(1), pointer(p), deleter(d)
{
}

struct S
{
    Count* count;
    S(void*, Deleter);
};

S::S(void* p, Deleter d)
    : count(0)
{
    try
    {
        count = new Count(p, d);
    }
    catch (...)
    {
        d(p);
        throw;
    }
}
