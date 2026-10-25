// from server: 100% by king_originala
// roc 2008-06 004e8550  unit: RBX::Network::Players::Plugin  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8550
//
// 004e8550  6aff                 push -1
// 004e8552  68d4a67c00           push 0x7ca6d4
// 004e8557  64a100000000         mov eax, dword ptr fs:[0]
// 004e855d  50                   push eax
// 004e855e  64892500000000       mov dword ptr fs:[0], esp
// 004e8565  51                   push ecx
// 004e8566  56                   push esi
// 004e8567  8bf1                 mov esi, ecx
// 004e8569  57                   push edi
// 004e856a  89742408             mov dword ptr [esp + 8], esi
// 004e856e  c706f86e8200         mov dword ptr [esi], 0x826ef8
// 004e8574  8d8ef4000000         lea ecx, [esi + 0xf4]
// 004e857a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004e8582  e829cf0a00           call 0x5954b0
// 004e8587  8d8ee0000000         lea ecx, [esi + 0xe0]
// 004e858d  c644241401           mov byte ptr [esp + 0x14], 1
// 004e8592  e819cf0a00           call 0x5954b0
// 004e8597  8bbedc000000         mov edi, dword ptr [esi + 0xdc]
// 004e859d  c644241400           mov byte ptr [esp + 0x14], 0
// 004e85a2  85ff                 test edi, edi
// 004e85a4  742a                 je 0x4e85d0
// 004e85a6  8d4704               lea eax, [edi + 4]
// 004e85a9  83c9ff               or ecx, 0xffffffff
// 004e85ac  f00fc108             lock xadd dword ptr [eax], ecx
// 004e85b0  751e                 jne 0x4e85d0
// 004e85b2  8b17                 mov edx, dword ptr [edi]
// 004e85b4  8b4204               mov eax, dword ptr [edx + 4]
// 004e85b7  8bcf                 mov ecx, edi
// 004e85b9  ffd0                 call eax
// 004e85bb  8d4f08               lea ecx, [edi + 8]
// 004e85be  83caff               or edx, 0xffffffff
// 004e85c1  f00fc111             lock xadd dword ptr [ecx], edx
// 004e85c5  7509                 jne 0x4e85d0
// 004e85c7  8b07                 mov eax, dword ptr [edi]
// 004e85c9  8b5008               mov edx, dword ptr [eax + 8]
// 004e85cc  8bcf                 mov ecx, edi
// 004e85ce  ffd2                 call edx
// 004e85d0  8bce                 mov ecx, esi
// 004e85d2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e85da  e871fcffff           call 0x4e8250
// 004e85df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e85e3  5f                   pop edi
// 004e85e4  5e                   pop esi
// 004e85e5  64890d00000000       mov dword ptr fs:[0], ecx
// 004e85ec  83c410               add esp, 0x10
// 004e85ef  c3                   ret 

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
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Member
{
    char data[20];
    ~Member();
};

struct Base
{
    virtual ~Base();
    char data[0xd4];
};

struct S : Base
{
    Shared shared;
    Member first;
    Member second;

    virtual ~S();
};

S::~S()
{
}
