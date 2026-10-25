// from server: 100% by king_originala
// roc 2008-06 005fce00  unit: RBX::LocalBackpackItem  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fce00
//
// 005fce00  6aff                 push -1
// 005fce02  68867e7d00           push 0x7d7e86
// 005fce07  64a100000000         mov eax, dword ptr fs:[0]
// 005fce0d  50                   push eax
// 005fce0e  64892500000000       mov dword ptr fs:[0], esp
// 005fce15  51                   push ecx
// 005fce16  56                   push esi
// 005fce17  57                   push edi
// 005fce18  8bf9                 mov edi, ecx
// 005fce1a  897c2408             mov dword ptr [esp + 8], edi
// 005fce1e  8d8f50010000         lea ecx, [edi + 0x150]
// 005fce24  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005fce2c  e82f25fdff           call 0x5cf360
// 005fce31  8bb74c010000         mov esi, dword ptr [edi + 0x14c]
// 005fce37  c644241400           mov byte ptr [esp + 0x14], 0
// 005fce3c  85f6                 test esi, esi
// 005fce3e  742a                 je 0x5fce6a
// 005fce40  8d4604               lea eax, [esi + 4]
// 005fce43  83c9ff               or ecx, 0xffffffff
// 005fce46  f00fc108             lock xadd dword ptr [eax], ecx
// 005fce4a  751e                 jne 0x5fce6a
// 005fce4c  8b16                 mov edx, dword ptr [esi]
// 005fce4e  8b4204               mov eax, dword ptr [edx + 4]
// 005fce51  8bce                 mov ecx, esi
// 005fce53  ffd0                 call eax
// 005fce55  8d4e08               lea ecx, [esi + 8]
// 005fce58  83caff               or edx, 0xffffffff
// 005fce5b  f00fc111             lock xadd dword ptr [ecx], edx
// 005fce5f  7509                 jne 0x5fce6a
// 005fce61  8b06                 mov eax, dword ptr [esi]
// 005fce63  8b5008               mov edx, dword ptr [eax + 8]
// 005fce66  8bce                 mov ecx, esi
// 005fce68  ffd2                 call edx
// 005fce6a  8bcf                 mov ecx, edi
// 005fce6c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fce74  e897e8ffff           call 0x5fb710
// 005fce79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fce7d  5f                   pop edi
// 005fce7e  5e                   pop esi
// 005fce7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fce86  83c410               add esp, 0x10
// 005fce89  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ControlBlock
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedHandle
{
    void* object;
    ControlBlock* control;
    ~SharedHandle();
};

inline SharedHandle::~SharedHandle()
{
    ControlBlock* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Base
{
    char storage[0x148];
    ~Base();
};

struct Tail
{
    ~Tail();
};

struct LocalBackpackItem : Base
{
    SharedHandle handle;
    Tail tail;
    ~LocalBackpackItem();
};

LocalBackpackItem::~LocalBackpackItem()
{
}
