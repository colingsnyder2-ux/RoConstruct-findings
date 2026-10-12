// from server: 100% by king_originala
// roc 2008-06 004a18c0  unit: RBX::Network::VServer::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a18c0
//
// 004a18c0  6aff                 push -1
// 004a18c2  68487b7c00           push 0x7c7b48
// 004a18c7  64a100000000         mov eax, dword ptr fs:[0]
// 004a18cd  50                   push eax
// 004a18ce  64892500000000       mov dword ptr fs:[0], esp
// 004a18d5  51                   push ecx
// 004a18d6  56                   push esi
// 004a18d7  8bf1                 mov esi, ecx
// 004a18d9  57                   push edi
// 004a18da  89742408             mov dword ptr [esp + 8], esi
// 004a18de  c70674348200         mov dword ptr [esi], 0x823474
// 004a18e4  c7461064348200       mov dword ptr [esi + 0x10], 0x823464
// 004a18eb  c746145c348200       mov dword ptr [esi + 0x14], 0x82345c
// 004a18f2  c7462054348200       mov dword ptr [esi + 0x20], 0x823454
// 004a18f9  c7462444348200       mov dword ptr [esi + 0x24], 0x823444
// 004a1900  c7464434348200       mov dword ptr [esi + 0x44], 0x823434
// 004a1907  c7466424348200       mov dword ptr [esi + 0x64], 0x823424
// 004a190e  c7868400000014348200 mov dword ptr [esi + 0x84], 0x823414
// 004a1918  c786a400000004348200 mov dword ptr [esi + 0xa4], 0x823404
// 004a1922  c786c4000000f4338200 mov dword ptr [esi + 0xc4], 0x8233f4
// 004a192c  c786742b0000c4338200 mov dword ptr [esi + 0x2b74], 0x8233c4
// 004a1936  8bbe6c2d0000         mov edi, dword ptr [esi + 0x2d6c]
// 004a193c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a1944  85ff                 test edi, edi
// 004a1946  742a                 je 0x4a1972
// 004a1948  8d4704               lea eax, [edi + 4]
// 004a194b  83c9ff               or ecx, 0xffffffff
// 004a194e  f00fc108             lock xadd dword ptr [eax], ecx
// 004a1952  751e                 jne 0x4a1972
// 004a1954  8b17                 mov edx, dword ptr [edi]
// 004a1956  8b4204               mov eax, dword ptr [edx + 4]
// 004a1959  8bcf                 mov ecx, edi
// 004a195b  ffd0                 call eax
// 004a195d  8d4f08               lea ecx, [edi + 8]
// 004a1960  83caff               or edx, 0xffffffff
// 004a1963  f00fc111             lock xadd dword ptr [ecx], edx
// 004a1967  7509                 jne 0x4a1972
// 004a1969  8b07                 mov eax, dword ptr [edi]
// 004a196b  8b5008               mov edx, dword ptr [eax + 8]
// 004a196e  8bcf                 mov ecx, edi
// 004a1970  ffd2                 call edx
// 004a1972  8bce                 mov ecx, esi
// 004a1974  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a197c  e82f7d0100           call 0x4b96b0
// 004a1981  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a1985  5f                   pop edi
// 004a1986  5e                   pop esi
// 004a1987  64890d00000000       mov dword ptr fs:[0], ecx
// 004a198e  83c410               add esp, 0x10
// 004a1991  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* volatile control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Base {
    volatile unsigned long words[0x2d68 / 4];
    ~Base();
};

struct S : Base {
    Shared shared;
    ~S();
};

S::~S()
{
    words[0x0000 / 4] = 0x823474;
    words[0x0010 / 4] = 0x823464;
    words[0x0014 / 4] = 0x82345c;
    words[0x0020 / 4] = 0x823454;
    words[0x0024 / 4] = 0x823444;
    words[0x0044 / 4] = 0x823434;
    words[0x0064 / 4] = 0x823424;
    words[0x0084 / 4] = 0x823414;
    words[0x00a4 / 4] = 0x823404;
    words[0x00c4 / 4] = 0x8233f4;
    words[0x2b74 / 4] = 0x8233c4;
}
