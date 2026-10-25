// from server: 100% by king_originala
// roc 2008-06 006435c0  unit: RBX::HUMAN::Landed  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006435c0
//
// 006435c0  6aff                 push -1
// 006435c2  6846ac7d00           push 0x7dac46
// 006435c7  64a100000000         mov eax, dword ptr fs:[0]
// 006435cd  50                   push eax
// 006435ce  64892500000000       mov dword ptr fs:[0], esp
// 006435d5  51                   push ecx
// 006435d6  53                   push ebx
// 006435d7  56                   push esi
// 006435d8  8bf1                 mov esi, ecx
// 006435da  57                   push edi
// 006435db  8974240c             mov dword ptr [esp + 0xc], esi
// 006435df  c70600ad8400         mov dword ptr [esi], 0x84ad00
// 006435e5  c74604f8ac8400       mov dword ptr [esi + 4], 0x84acf8
// 006435ec  33db                 xor ebx, ebx
// 006435ee  53                   push ebx
// 006435ef  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006435f7  e8b4fbffff           call 0x6431b0
// 006435fc  8b7e28               mov edi, dword ptr [esi + 0x28]
// 006435ff  885c2418             mov byte ptr [esp + 0x18], bl
// 00643603  3bfb                 cmp edi, ebx
// 00643605  742a                 je 0x643631
// 00643607  8d4704               lea eax, [edi + 4]
// 0064360a  83c9ff               or ecx, 0xffffffff
// 0064360d  f00fc108             lock xadd dword ptr [eax], ecx
// 00643611  751e                 jne 0x643631
// 00643613  8b17                 mov edx, dword ptr [edi]
// 00643615  8b4204               mov eax, dword ptr [edx + 4]
// 00643618  8bcf                 mov ecx, edi
// 0064361a  ffd0                 call eax
// 0064361c  8d4f08               lea ecx, [edi + 8]
// 0064361f  83caff               or edx, 0xffffffff
// 00643622  f00fc111             lock xadd dword ptr [ecx], edx
// 00643626  7509                 jne 0x643631
// 00643628  8b07                 mov eax, dword ptr [edi]
// 0064362a  8b5008               mov edx, dword ptr [eax + 8]
// 0064362d  8bcf                 mov ecx, edi
// 0064362f  ffd2                 call edx
// 00643631  8b4614               mov eax, dword ptr [esi + 0x14]
// 00643634  50                   push eax
// 00643635  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0064363d  e8de46ecff           call 0x507d20
// 00643642  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00643646  83c404               add esp, 4
// 00643649  895e14               mov dword ptr [esi + 0x14], ebx
// 0064364c  895e18               mov dword ptr [esi + 0x18], ebx
// 0064364f  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00643652  5f                   pop edi
// 00643653  5e                   pop esi
// 00643654  5b                   pop ebx
// 00643655  64890d00000000       mov dword ptr fs:[0], ecx
// 0064365c  83c410               add esp, 0x10
// 0064365f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void __cdecl alignedFree(void*);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Buffer
{
    void* data;
    unsigned size;
    unsigned capacity;
    ~Buffer();
};

Buffer::~Buffer()
{
    alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct Primary
{
    virtual void primarySlot() = 0;
};

struct Secondary
{
    virtual void secondarySlot() = 0;
};

struct Landed : Primary, Secondary
{
    unsigned padding[3];
    Buffer buffer;
    unsigned padding2;
    Shared shared;

    virtual void primarySlot();
    virtual void secondarySlot();
    void reset(int);
    ~Landed();
};

Landed::~Landed()
{
    reset(0);
}
