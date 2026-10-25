// from server: 100% by king_originala
// roc 2008-06 004afe90  unit: RBX::JointsService  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004afe90
//
// 004afe90  6aff                 push -1
// 004afe92  680b857c00           push 0x7c850b
// 004afe97  64a100000000         mov eax, dword ptr fs:[0]
// 004afe9d  50                   push eax
// 004afe9e  64892500000000       mov dword ptr fs:[0], esp
// 004afea5  83ec10               sub esp, 0x10
// 004afea8  8b542420             mov edx, dword ptr [esp + 0x20]
// 004afeac  56                   push esi
// 004afead  8bf1                 mov esi, ecx
// 004afeaf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004afeb3  895604               mov dword ptr [esi + 4], edx
// 004afeb6  c7062c4b8200         mov dword ptr [esi], 0x824b2c
// 004afebc  8b01                 mov eax, dword ptr [ecx]
// 004afebe  894608               mov dword ptr [esi + 8], eax
// 004afec1  8b4104               mov eax, dword ptr [ecx + 4]
// 004afec4  89742404             mov dword ptr [esp + 4], esi
// 004afec8  89460c               mov dword ptr [esi + 0xc], eax
// 004afecb  85c0                 test eax, eax
// 004afecd  740e                 je 0x4afedd
// 004afecf  57                   push edi
// 004afed0  83c004               add eax, 4
// 004afed3  bf01000000           mov edi, 1
// 004afed8  f00fc138             lock xadd dword ptr [eax], edi
// 004afedc  5f                   pop edi
// 004afedd  8b09                 mov ecx, dword ptr [ecx]
// 004afedf  894c2424             mov dword ptr [esp + 0x24], ecx
// 004afee3  8d442424             lea eax, [esp + 0x24]
// 004afee7  50                   push eax
// 004afee8  8d4c240c             lea ecx, [esp + 0xc]
// 004afeec  51                   push ecx
// 004afeed  8d8ab02c0000         lea ecx, [edx + 0x2cb0]
// 004afef3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004afefb  e8408d1300           call 0x5e8c40
// 004aff00  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aff04  8bc6                 mov eax, esi
// 004aff06  5e                   pop esi
// 004aff07  64890d00000000       mov dword ptr fs:[0], ecx
// 004aff0e  83c41c               add esp, 0x1c
// 004aff11  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ReferenceCount {
    volatile long value;
    void increment();
};

__forceinline void ReferenceCount::increment()
{
    _InterlockedExchangeAdd(&value, 1);
}

struct Control {
    long reserved;
    ReferenceCount references;
};

struct Shared {
    void *object;
    Control *control;

    Shared(const Shared &);
    ~Shared();
};

__forceinline Shared::Shared(const Shared &other)
    : object(other.object), control(other.control)
{
    if (control)
        control->references.increment();
}

struct InsertResult {
    unsigned int storage[3];
};

struct Tree {
    InsertResult insert(void *const &);
};

struct Owner {
    char padding[0x2cb0];
    Tree tree;
};

struct Base {
    Owner *owner;

    Base(Owner *);
};

__forceinline Base::Base(Owner *p)
    : owner(p)
{
}

struct S : Base {
    Shared shared;

    S(Owner *, const Shared &);
    virtual ~S();
};

S::S(Owner *p, const Shared &value)
    : Base(p), shared(value)
{
    void *key = value.object;
    p->tree.insert(key);
}
