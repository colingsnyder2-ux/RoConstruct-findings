// from server: 90% by colin
// from server: 88% by king_originala
// roc 2008-06 00425450  unit: CRobloxTreeCtrlNode  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425450
//
// 00425450  6aff                 push -1
// 00425452  6890eb7b00           push 0x7beb90
// 00425457  64a100000000         mov eax, dword ptr fs:[0]
// 0042545d  50                   push eax
// 0042545e  64892500000000       mov dword ptr fs:[0], esp
// 00425465  83ec14               sub esp, 0x14
// 00425468  56                   push esi
// 00425469  8bf1                 mov esi, ecx
// 0042546b  f6465002             test byte ptr [esi + 0x50], 2
// 0042546f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00425477  743e                 je 0x4254b7
// 00425479  57                   push edi
// 0042547a  8b7e54               mov edi, dword ptr [esi + 0x54]
// 0042547d  81c7c4000000         add edi, 0xc4
// 00425483  8bcf                 mov ecx, edi
// 00425485  897c2408             mov dword ptr [esp + 8], edi
// 00425489  e802dc1300           call 0x563090
// 0042548e  b001                 mov al, 1
// 00425490  8844240c             mov byte ptr [esp + 0xc], al
// 00425494  88442424             mov byte ptr [esp + 0x24], al
// 00425498  8d442430             lea eax, [esp + 0x30]
// 0042549c  50                   push eax
// 0042549d  8d4c2414             lea ecx, [esp + 0x14]
// 004254a1  51                   push ecx
// 004254a2  8d4e5c               lea ecx, [esi + 0x5c]
// 004254a5  e886ebffff           call 0x424030
// 004254aa  8bcf                 mov ecx, edi
// 004254ac  c644242400           mov byte ptr [esp + 0x24], 0
// 004254b1  e82adc1300           call 0x5630e0
// 004254b6  5f                   pop edi
// 004254b7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 004254ba  8b11                 mov edx, dword ptr [ecx]
// 004254bc  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 004254c2  83c6fc               add esi, -4
// 004254c5  56                   push esi
// 004254c6  ffd0                 call eax
// 004254c8  8b742430             mov esi, dword ptr [esp + 0x30]
// 004254cc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004254d4  85f6                 test esi, esi
// 004254d6  742a                 je 0x425502
// 004254d8  8d4e04               lea ecx, [esi + 4]
// 004254db  83caff               or edx, 0xffffffff
// 004254de  f00fc111             lock xadd dword ptr [ecx], edx
// 004254e2  751e                 jne 0x425502
// 004254e4  8b06                 mov eax, dword ptr [esi]
// 004254e6  8b5004               mov edx, dword ptr [eax + 4]
// 004254e9  8bce                 mov ecx, esi
// 004254eb  ffd2                 call edx
// 004254ed  8d4608               lea eax, [esi + 8]
// 004254f0  83c9ff               or ecx, 0xffffffff
// 004254f3  f00fc108             lock xadd dword ptr [eax], ecx
// 004254f7  7509                 jne 0x425502
// 004254f9  8b16                 mov edx, dword ptr [esi]
// 004254fb  8b4208               mov eax, dword ptr [edx + 8]
// 004254fe  8bce                 mov ecx, esi
// 00425500  ffd0                 call eax
// 00425502  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00425506  5e                   pop esi
// 00425507  64890d00000000       mov dword ptr fs:[0], ecx
// 0042550e  83c420               add esp, 0x20
// 00425511  c20c00               ret 0xc
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    RefCount* count;
    ~Handle();
};

struct Lock {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Lock* mutex;
    bool owned;
    Guard(Lock* p);
    ~Guard();
};

struct Iterator {
    void* values[3];
};

struct Tree {
    void lookup(Iterator* result, Handle* value);
};

struct Owner {
    void** vtable;
    char padding[0xc0];
    Lock mutex;
};

struct Node {
    char padding[0x50];
    unsigned char flags;
    char padding2[3];
    Owner* owner;
    unsigned int reserved;
    Tree tree;
    void invoke(int unused, Handle value);
};

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

__forceinline Guard::Guard(Lock* p)
    : mutex(p), owned(false)
{
    mutex->lock();
    owned = true;
}

__forceinline Guard::~Guard()
{
    if (owned)
        mutex->unlock();
}

void Node::invoke(int unused, Handle value)
{
    if (flags & 2) {
        Guard guard(&owner->mutex);
        _ReadWriteBarrier();
        Iterator result;
        tree.lookup(&result, &value);
    }

    typedef void (__thiscall *Notify)(Owner*, void*);
    ((Notify)owner->vtable[87])(owner, (char*)this - 4);
}
