// from server: 100% by king_originala
// roc 2008-06 0042a720  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a720
//
// 0042a720  6aff                 push -1
// 0042a722  6838077d00           push 0x7d0738
// 0042a727  64a100000000         mov eax, dword ptr fs:[0]
// 0042a72d  50                   push eax
// 0042a72e  64892500000000       mov dword ptr fs:[0], esp
// 0042a735  51                   push ecx
// 0042a736  56                   push esi
// 0042a737  8bf1                 mov esi, ecx
// 0042a739  89742404             mov dword ptr [esp + 4], esi
// 0042a73d  8d4e0c               lea ecx, [esi + 0xc]
// 0042a740  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042a748  e863ad1600           call 0x5954b0
// 0042a74d  8b7604               mov esi, dword ptr [esi + 4]
// 0042a750  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0042a758  85f6                 test esi, esi
// 0042a75a  742a                 je 0x42a786
// 0042a75c  8d4604               lea eax, [esi + 4]
// 0042a75f  83c9ff               or ecx, 0xffffffff
// 0042a762  f00fc108             lock xadd dword ptr [eax], ecx
// 0042a766  751e                 jne 0x42a786
// 0042a768  8b16                 mov edx, dword ptr [esi]
// 0042a76a  8b4204               mov eax, dword ptr [edx + 4]
// 0042a76d  8bce                 mov ecx, esi
// 0042a76f  ffd0                 call eax
// 0042a771  8d4e08               lea ecx, [esi + 8]
// 0042a774  83caff               or edx, 0xffffffff
// 0042a777  f00fc111             lock xadd dword ptr [ecx], edx
// 0042a77b  7509                 jne 0x42a786
// 0042a77d  8b06                 mov eax, dword ptr [esi]
// 0042a77f  8b5008               mov edx, dword ptr [eax + 8]
// 0042a782  8bce                 mov ecx, esi
// 0042a784  ffd2                 call edx
// 0042a786  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042a78a  5e                   pop esi
// 0042a78b  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a792  83c410               add esp, 0x10
// 0042a795  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Count
{
    virtual ~Count();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference
{
    void* pointer;
    Count* count;
    ~Reference();
};

inline Reference::~Reference()
{
    Count* p = count;
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

struct Tail
{
    ~Tail();
};

struct S
{
    Reference reference;
    int value;
    Tail tail;
    ~S();
};

S::~S()
{
}
