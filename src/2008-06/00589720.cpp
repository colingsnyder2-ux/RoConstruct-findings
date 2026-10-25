// from server: 100% by king_originala
// roc 2008-06 00589720  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00589720
//
// 00589720  6aff                 push -1
// 00589722  6856157d00           push 0x7d1556
// 00589727  64a100000000         mov eax, dword ptr fs:[0]
// 0058972d  50                   push eax
// 0058972e  64892500000000       mov dword ptr fs:[0], esp
// 00589735  51                   push ecx
// 00589736  56                   push esi
// 00589737  57                   push edi
// 00589738  8bf9                 mov edi, ecx
// 0058973a  897c2408             mov dword ptr [esp + 8], edi
// 0058973e  8d4f18               lea ecx, [edi + 0x18]
// 00589741  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00589749  e8d2f9ffff           call 0x589120
// 0058974e  8b7714               mov esi, dword ptr [edi + 0x14]
// 00589751  c644241400           mov byte ptr [esp + 0x14], 0
// 00589756  85f6                 test esi, esi
// 00589758  742a                 je 0x589784
// 0058975a  8d4604               lea eax, [esi + 4]
// 0058975d  83c9ff               or ecx, 0xffffffff
// 00589760  f00fc108             lock xadd dword ptr [eax], ecx
// 00589764  751e                 jne 0x589784
// 00589766  8b16                 mov edx, dword ptr [esi]
// 00589768  8b4204               mov eax, dword ptr [edx + 4]
// 0058976b  8bce                 mov ecx, esi
// 0058976d  ffd0                 call eax
// 0058976f  8d4e08               lea ecx, [esi + 8]
// 00589772  83caff               or edx, 0xffffffff
// 00589775  f00fc111             lock xadd dword ptr [ecx], edx
// 00589779  7509                 jne 0x589784
// 0058977b  8b06                 mov eax, dword ptr [esi]
// 0058977d  8b5008               mov edx, dword ptr [eax + 8]
// 00589780  8bce                 mov ecx, esi
// 00589782  ffd2                 call edx
// 00589784  8b7708               mov esi, dword ptr [edi + 8]
// 00589787  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0058978f  85f6                 test esi, esi
// 00589791  742a                 je 0x5897bd
// 00589793  8d4604               lea eax, [esi + 4]
// 00589796  83c9ff               or ecx, 0xffffffff
// 00589799  f00fc108             lock xadd dword ptr [eax], ecx
// 0058979d  751e                 jne 0x5897bd
// 0058979f  8b16                 mov edx, dword ptr [esi]
// 005897a1  8b4204               mov eax, dword ptr [edx + 4]
// 005897a4  8bce                 mov ecx, esi
// 005897a6  ffd0                 call eax
// 005897a8  8d4e08               lea ecx, [esi + 8]
// 005897ab  83caff               or edx, 0xffffffff
// 005897ae  f00fc111             lock xadd dword ptr [ecx], edx
// 005897b2  7509                 jne 0x5897bd
// 005897b4  8b06                 mov eax, dword ptr [esi]
// 005897b6  8b5008               mov edx, dword ptr [eax + 8]
// 005897b9  8bce                 mov ecx, esi
// 005897bb  ffd2                 call edx
// 005897bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005897c1  5f                   pop edi
// 005897c2  5e                   pop esi
// 005897c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005897ca  83c410               add esp, 0x10
// 005897cd  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle
{
    unsigned char padding[8];
    Control* control;
    ~Handle();
};

struct Tail
{
    ~Tail();
};

struct S
{
    Handle first;
    Handle second;
    Tail tail;
    ~S();
};

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

S::~S()
{
}
