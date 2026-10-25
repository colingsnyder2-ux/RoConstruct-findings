// from server: 100% by king_originala
// roc 2008-06 005caba0  unit: RBX::VControllerService::?$FactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005caba0
//
// 005caba0  83ec08               sub esp, 8
// 005caba3  33d2                 xor edx, edx
// 005caba5  891424               mov dword ptr [esp], edx
// 005caba8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 005cabab  57                   push edi
// 005cabac  85c0                 test eax, eax
// 005cabae  7405                 je 0x5cabb5
// 005cabb0  395004               cmp dword ptr [eax + 4], edx
// 005cabb3  7504                 jne 0x5cabb9
// 005cabb5  33ff                 xor edi, edi
// 005cabb7  eb1a                 jmp 0x5cabd3
// 005cabb9  8d442404             lea eax, [esp + 4]
// 005cabbd  50                   push eax
// 005cabbe  83c120               add ecx, 0x20
// 005cabc1  e83affffff           call 0x5cab00
// 005cabc6  8b08                 mov ecx, dword ptr [eax]
// 005cabc8  8bb930010000         mov edi, dword ptr [ecx + 0x130]
// 005cabce  ba01000000           mov edx, 1
// 005cabd3  f6c201               test dl, 1
// 005cabd6  743b                 je 0x5cac13
// 005cabd8  56                   push esi
// 005cabd9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cabdd  85f6                 test esi, esi
// 005cabdf  742a                 je 0x5cac0b
// 005cabe1  8d5604               lea edx, [esi + 4]
// 005cabe4  83c8ff               or eax, 0xffffffff
// 005cabe7  f00fc102             lock xadd dword ptr [edx], eax
// 005cabeb  751e                 jne 0x5cac0b
// 005cabed  8b16                 mov edx, dword ptr [esi]
// 005cabef  8b4204               mov eax, dword ptr [edx + 4]
// 005cabf2  8bce                 mov ecx, esi
// 005cabf4  ffd0                 call eax
// 005cabf6  8d4e08               lea ecx, [esi + 8]
// 005cabf9  83caff               or edx, 0xffffffff
// 005cabfc  f00fc111             lock xadd dword ptr [ecx], edx
// 005cac00  7509                 jne 0x5cac0b
// 005cac02  8b06                 mov eax, dword ptr [esi]
// 005cac04  8b5008               mov edx, dword ptr [eax + 8]
// 005cac07  8bce                 mov ecx, esi
// 005cac09  ffd2                 call edx
// 005cac0b  5e                   pop esi
// 005cac0c  8bc7                 mov eax, edi
// 005cac0e  5f                   pop edi
// 005cac0f  83c408               add esp, 8
// 005cac12  c3                   ret 
// 005cac13  8bc7                 mov eax, edi
// 005cac15  5f                   pop edi
// 005cac16  83c408               add esp, 8
// 005cac19  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long strong;
    long weak;
};

struct Object
{
    char padding[0x130];
    int value;
};

struct Shared
{
    Object* object;
    Control* control;
    ~Shared();
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

struct Weak
{
    Object* object;
    Control* control;
    Shared lock() const;
};

struct S
{
    char padding[0x20];
    Weak weak;
    int f();
};

int S::f()
{
    return (weak.control ? weak.control->strong : 0) == 0
        ? 0
        : weak.lock().object->value;
}
