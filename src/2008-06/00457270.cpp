// from server: 100% by king_originala
// roc 2008-06 00457270  unit: RBX::VInstance::?$MarshaledListener  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457270
//
// 00457270  6aff                 push -1
// 00457272  68b6257c00           push 0x7c25b6
// 00457277  64a100000000         mov eax, dword ptr fs:[0]
// 0045727d  50                   push eax
// 0045727e  64892500000000       mov dword ptr fs:[0], esp
// 00457285  51                   push ecx
// 00457286  56                   push esi
// 00457287  8bf1                 mov esi, ecx
// 00457289  57                   push edi
// 0045728a  89742408             mov dword ptr [esp + 8], esi
// 0045728e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00457296  c7064c888100         mov dword ptr [esi], 0x81884c
// 0045729c  c7460400000000       mov dword ptr [esi + 4], 0
// 004572a3  c7460800000000       mov dword ptr [esi + 8], 0
// 004572aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004572ae  8d4c2424             lea ecx, [esp + 0x24]
// 004572b2  51                   push ecx
// 004572b3  8d4e10               lea ecx, [esi + 0x10]
// 004572b6  c644241802           mov byte ptr [esp + 0x18], 2
// 004572bb  89460c               mov dword ptr [esi + 0xc], eax
// 004572be  e82da4fbff           call 0x4116f0
// 004572c3  8b542420             mov edx, dword ptr [esp + 0x20]
// 004572c7  52                   push edx
// 004572c8  8bce                 mov ecx, esi
// 004572ca  c644241803           mov byte ptr [esp + 0x18], 3
// 004572cf  e8fcfeffff           call 0x4571d0
// 004572d4  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004572d8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004572e0  85ff                 test edi, edi
// 004572e2  742a                 je 0x45730e
// 004572e4  8d4704               lea eax, [edi + 4]
// 004572e7  83c9ff               or ecx, 0xffffffff
// 004572ea  f00fc108             lock xadd dword ptr [eax], ecx
// 004572ee  751e                 jne 0x45730e
// 004572f0  8b17                 mov edx, dword ptr [edi]
// 004572f2  8b4204               mov eax, dword ptr [edx + 4]
// 004572f5  8bcf                 mov ecx, edi
// 004572f7  ffd0                 call eax
// 004572f9  8d4f08               lea ecx, [edi + 8]
// 004572fc  83caff               or edx, 0xffffffff
// 004572ff  f00fc111             lock xadd dword ptr [ecx], edx
// 00457303  7509                 jne 0x45730e
// 00457305  8b07                 mov eax, dword ptr [edi]
// 00457307  8b5008               mov edx, dword ptr [eax + 8]
// 0045730a  8bcf                 mov ecx, edi
// 0045730c  ffd2                 call edx
// 0045730e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00457312  5f                   pop edi
// 00457313  8bc6                 mov eax, esi
// 00457315  5e                   pop esi
// 00457316  64890d00000000       mov dword ptr fs:[0], ecx
// 0045731d  83c410               add esp, 0x10
// 00457320  c21000               ret 0x10

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
    void* pointer;
    Control* control;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : pointer(0), control(0)
{
}

inline Shared::~Shared()
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

struct Base
{
    virtual ~Base();
};

struct S : Base
{
    Shared connection;
    void* owner;
    Shared listener;

    S(void*, void*, Shared);
    virtual ~S();
    void attach(void*);
};

S::S(void* a, void* b, Shared value)
    : owner(a), listener(value)
{
    attach(b);
}
