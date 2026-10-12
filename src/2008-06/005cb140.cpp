// from server: 100% by king_originala
// roc 2008-06 005cb140  unit: RBX::AIFleeController  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb140
//
// 005cb140  6aff                 push -1
// 005cb142  68de527d00           push 0x7d52de
// 005cb147  64a100000000         mov eax, dword ptr fs:[0]
// 005cb14d  50                   push eax
// 005cb14e  64892500000000       mov dword ptr fs:[0], esp
// 005cb155  51                   push ecx
// 005cb156  56                   push esi
// 005cb157  8bf1                 mov esi, ecx
// 005cb159  8d460c               lea eax, [esi + 0xc]
// 005cb15c  57                   push edi
// 005cb15d  89742408             mov dword ptr [esp + 8], esi
// 005cb161  c706c8a08300         mov dword ptr [esi], 0x83a0c8
// 005cb167  c700bca08300         mov dword ptr [eax], 0x83a0bc
// 005cb16d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005cb170  c744241402000000     mov dword ptr [esp + 0x14], 2
// 005cb178  85c9                 test ecx, ecx
// 005cb17a  740c                 je 0x5cb188
// 005cb17c  50                   push eax
// 005cb17d  81c130010000         add ecx, 0x130
// 005cb183  e8f8a80100           call 0x5e5a80
// 005cb188  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005cb18b  c644241401           mov byte ptr [esp + 0x14], 1
// 005cb190  85c9                 test ecx, ecx
// 005cb192  7413                 je 0x5cb1a7
// 005cb194  8d4108               lea eax, [ecx + 8]
// 005cb197  83caff               or edx, 0xffffffff
// 005cb19a  f00fc110             lock xadd dword ptr [eax], edx
// 005cb19e  7507                 jne 0x5cb1a7
// 005cb1a0  8b01                 mov eax, dword ptr [ecx]
// 005cb1a2  8b5008               mov edx, dword ptr [eax + 8]
// 005cb1a5  ffd2                 call edx
// 005cb1a7  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005cb1aa  c644241400           mov byte ptr [esp + 0x14], 0
// 005cb1af  85ff                 test edi, edi
// 005cb1b1  742a                 je 0x5cb1dd
// 005cb1b3  8d4704               lea eax, [edi + 4]
// 005cb1b6  83c9ff               or ecx, 0xffffffff
// 005cb1b9  f00fc108             lock xadd dword ptr [eax], ecx
// 005cb1bd  751e                 jne 0x5cb1dd
// 005cb1bf  8b17                 mov edx, dword ptr [edi]
// 005cb1c1  8b4204               mov eax, dword ptr [edx + 4]
// 005cb1c4  8bcf                 mov ecx, edi
// 005cb1c6  ffd0                 call eax
// 005cb1c8  8d4f08               lea ecx, [edi + 8]
// 005cb1cb  83caff               or edx, 0xffffffff
// 005cb1ce  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb1d2  7509                 jne 0x5cb1dd
// 005cb1d4  8b07                 mov eax, dword ptr [edi]
// 005cb1d6  8b5008               mov edx, dword ptr [eax + 8]
// 005cb1d9  8bcf                 mov ecx, edi
// 005cb1db  ffd2                 call edx
// 005cb1dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cb1e1  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 005cb1e7  5f                   pop edi
// 005cb1e8  5e                   pop esi
// 005cb1e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb1f0  83c410               add esp, 0x10
// 005cb1f3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    __forceinline ~Shared();
};

struct Weak
{
    void* object;
    Control* control;
    __forceinline ~Weak();
};

struct Registry
{
    void remove(void*);
};

struct Base
{
    unsigned long reserved[2];
    virtual ~Base();
};

struct Secondary
{
    virtual void unused();
};

struct S : Base, Secondary
{
    Shared shared;
    Weak weak;
    virtual void unused();
    ~S();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

__forceinline Weak::~Weak()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->weak) == 0)
        p->destroy();
}

__forceinline Base::~Base()
{
}

S::~S()
{
    if (shared.object)
        reinterpret_cast<Registry*>(
            static_cast<char*>(shared.object) + 0x130
        )->remove(static_cast<Secondary*>(this));
}
