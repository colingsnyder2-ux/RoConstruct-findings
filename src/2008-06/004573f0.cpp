// from server: 100% by king_originala
// roc 2008-06 004573f0  unit: RBX::VInstance::?$MarshaledListener  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004573f0
//
// 004573f0  6aff                 push -1
// 004573f2  68b6257c00           push 0x7c25b6
// 004573f7  64a100000000         mov eax, dword ptr fs:[0]
// 004573fd  50                   push eax
// 004573fe  64892500000000       mov dword ptr fs:[0], esp
// 00457405  51                   push ecx
// 00457406  56                   push esi
// 00457407  8bf1                 mov esi, ecx
// 00457409  57                   push edi
// 0045740a  89742408             mov dword ptr [esp + 8], esi
// 0045740e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00457416  c70658888100         mov dword ptr [esi], 0x818858
// 0045741c  c7460400000000       mov dword ptr [esi + 4], 0
// 00457423  c7460800000000       mov dword ptr [esi + 8], 0
// 0045742a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045742e  8d4c2424             lea ecx, [esp + 0x24]
// 00457432  51                   push ecx
// 00457433  8d4e10               lea ecx, [esi + 0x10]
// 00457436  c644241802           mov byte ptr [esp + 0x18], 2
// 0045743b  89460c               mov dword ptr [esi + 0xc], eax
// 0045743e  e8ada2fbff           call 0x4116f0
// 00457443  8b542420             mov edx, dword ptr [esp + 0x20]
// 00457447  52                   push edx
// 00457448  8bce                 mov ecx, esi
// 0045744a  c644241803           mov byte ptr [esp + 0x18], 3
// 0045744f  e87cfdffff           call 0x4571d0
// 00457454  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00457458  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00457460  85ff                 test edi, edi
// 00457462  742a                 je 0x45748e
// 00457464  8d4704               lea eax, [edi + 4]
// 00457467  83c9ff               or ecx, 0xffffffff
// 0045746a  f00fc108             lock xadd dword ptr [eax], ecx
// 0045746e  751e                 jne 0x45748e
// 00457470  8b17                 mov edx, dword ptr [edi]
// 00457472  8b4204               mov eax, dword ptr [edx + 4]
// 00457475  8bcf                 mov ecx, edi
// 00457477  ffd0                 call eax
// 00457479  8d4f08               lea ecx, [edi + 8]
// 0045747c  83caff               or edx, 0xffffffff
// 0045747f  f00fc111             lock xadd dword ptr [ecx], edx
// 00457483  7509                 jne 0x45748e
// 00457485  8b07                 mov eax, dword ptr [edi]
// 00457487  8b5008               mov edx, dword ptr [eax + 8]
// 0045748a  8bcf                 mov ecx, edi
// 0045748c  ffd2                 call edx
// 0045748e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00457492  5f                   pop edi
// 00457493  8bc6                 mov eax, esi
// 00457495  5e                   pop esi
// 00457496  64890d00000000       mov dword ptr fs:[0], ecx
// 0045749d  83c410               add esp, 0x10
// 004574a0  c21000               ret 0x10

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

    Shared(const Shared&);
    __forceinline ~Shared();
};

struct Weak
{
    void* pointer;
    Control* control;

    __forceinline Weak();
    ~Weak();
};

struct Base
{
    virtual ~Base();
};

struct S : Base
{
    Weak weak;
    void* pointer;
    Shared shared;

    S(void*, void*, Shared);
    virtual ~S();
    void set(void*);
};

__forceinline Weak::Weak()
    : pointer(0), control(0)
{
}

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

S::S(void* p, void* q, Shared value)
    : weak(), pointer(p), shared(value)
{
    set(q);
}
