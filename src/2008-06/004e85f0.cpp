// from server: 100% by king_originala
// roc 2008-06 004e85f0  unit: RBX::Network::Players::Plugin  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e85f0
//
// 004e85f0  6aff                 push -1
// 004e85f2  68d4a67c00           push 0x7ca6d4
// 004e85f7  64a100000000         mov eax, dword ptr fs:[0]
// 004e85fd  50                   push eax
// 004e85fe  64892500000000       mov dword ptr fs:[0], esp
// 004e8605  51                   push ecx
// 004e8606  56                   push esi
// 004e8607  8bf1                 mov esi, ecx
// 004e8609  57                   push edi
// 004e860a  89742408             mov dword ptr [esp + 8], esi
// 004e860e  c7062c6f8200         mov dword ptr [esi], 0x826f2c
// 004e8614  8d8ef4000000         lea ecx, [esi + 0xf4]
// 004e861a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004e8622  e889ce0a00           call 0x5954b0
// 004e8627  8d8ee0000000         lea ecx, [esi + 0xe0]
// 004e862d  c644241401           mov byte ptr [esp + 0x14], 1
// 004e8632  e879ce0a00           call 0x5954b0
// 004e8637  8bbedc000000         mov edi, dword ptr [esi + 0xdc]
// 004e863d  c644241400           mov byte ptr [esp + 0x14], 0
// 004e8642  85ff                 test edi, edi
// 004e8644  742a                 je 0x4e8670
// 004e8646  8d4704               lea eax, [edi + 4]
// 004e8649  83c9ff               or ecx, 0xffffffff
// 004e864c  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8650  751e                 jne 0x4e8670
// 004e8652  8b17                 mov edx, dword ptr [edi]
// 004e8654  8b4204               mov eax, dword ptr [edx + 4]
// 004e8657  8bcf                 mov ecx, edi
// 004e8659  ffd0                 call eax
// 004e865b  8d4f08               lea ecx, [edi + 8]
// 004e865e  83caff               or edx, 0xffffffff
// 004e8661  f00fc111             lock xadd dword ptr [ecx], edx
// 004e8665  7509                 jne 0x4e8670
// 004e8667  8b07                 mov eax, dword ptr [edi]
// 004e8669  8b5008               mov edx, dword ptr [eax + 8]
// 004e866c  8bcf                 mov ecx, edi
// 004e866e  ffd2                 call edx
// 004e8670  8bce                 mov ecx, esi
// 004e8672  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e867a  e8d1fbffff           call 0x4e8250
// 004e867f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e8683  5f                   pop edi
// 004e8684  5e                   pop esi
// 004e8685  64890d00000000       mov dword ptr fs:[0], ecx
// 004e868c  83c410               add esp, 0x10
// 004e868f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;
    ~Shared();
};

struct Block
{
    unsigned char storage[20];
    ~Block();
};

struct Base
{
    unsigned char storage[212];
    virtual ~Base();
};

struct S : Base
{
    Shared shared;
    Block first;
    Block second;
    virtual ~S();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
}
