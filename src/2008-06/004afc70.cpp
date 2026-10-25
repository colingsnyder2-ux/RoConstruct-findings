// from server: 100% by king_originala
// roc 2008-06 004afc70  unit: RBX::JointsService  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004afc70
//
// 004afc70  6aff                 push -1
// 004afc72  680b857c00           push 0x7c850b
// 004afc77  64a100000000         mov eax, dword ptr fs:[0]
// 004afc7d  50                   push eax
// 004afc7e  64892500000000       mov dword ptr fs:[0], esp
// 004afc85  83ec10               sub esp, 0x10
// 004afc88  8b542420             mov edx, dword ptr [esp + 0x20]
// 004afc8c  56                   push esi
// 004afc8d  8bf1                 mov esi, ecx
// 004afc8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004afc93  895604               mov dword ptr [esi + 4], edx
// 004afc96  c706204b8200         mov dword ptr [esi], 0x824b20
// 004afc9c  8b01                 mov eax, dword ptr [ecx]
// 004afc9e  894608               mov dword ptr [esi + 8], eax
// 004afca1  8b4104               mov eax, dword ptr [ecx + 4]
// 004afca4  89742404             mov dword ptr [esp + 4], esi
// 004afca8  89460c               mov dword ptr [esi + 0xc], eax
// 004afcab  85c0                 test eax, eax
// 004afcad  740e                 je 0x4afcbd
// 004afcaf  57                   push edi
// 004afcb0  83c004               add eax, 4
// 004afcb3  bf01000000           mov edi, 1
// 004afcb8  f00fc138             lock xadd dword ptr [eax], edi
// 004afcbc  5f                   pop edi
// 004afcbd  8b09                 mov ecx, dword ptr [ecx]
// 004afcbf  894c2424             mov dword ptr [esp + 0x24], ecx
// 004afcc3  8d442424             lea eax, [esp + 0x24]
// 004afcc7  50                   push eax
// 004afcc8  8d4c240c             lea ecx, [esp + 0xc]
// 004afccc  51                   push ecx
// 004afccd  8d8a902c0000         lea ecx, [edx + 0x2c90]
// 004afcd3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004afcdb  e8608f1300           call 0x5e8c40
// 004afce0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004afce4  8bc6                 mov eax, esi
// 004afce6  5e                   pop esi
// 004afce7  64890d00000000       mov dword ptr fs:[0], ecx
// 004afcee  83c41c               add esp, 0x1c
// 004afcf1  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

__forceinline void addReference(volatile long *count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control {
    void *vtable;
    volatile long references;
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
        addReference(&control->references);
}

struct InsertResult {
    void *node;
    void *container;
    bool inserted;
};

struct Tree {
    InsertResult insert(void *const &);
};

struct Owner {
    char padding[0x2c90];
    Tree tree;
};

struct Base {
    Owner *owner;

    Base(Owner *);
};

__forceinline Base::Base(Owner *value)
    : owner(value)
{
}

struct S : Base {
    Shared shared;

    virtual ~S();
    S(Owner *, const Shared &);
};

S::S(Owner *value, const Shared &source)
    : Base(value), shared(source)
{
    void *object = source.object;
    value->tree.insert(object);
}
