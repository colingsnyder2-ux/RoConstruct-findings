// from server: 100% by king_originala
// roc 2008-06 00464b60  unit: RBX::VRunService::?$MarshaledListener  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464b60
//
// 00464b60  6aff                 push -1
// 00464b62  6883327c00           push 0x7c3283
// 00464b67  64a100000000         mov eax, dword ptr fs:[0]
// 00464b6d  50                   push eax
// 00464b6e  64892500000000       mov dword ptr fs:[0], esp
// 00464b75  51                   push ecx
// 00464b76  56                   push esi
// 00464b77  8bf1                 mov esi, ecx
// 00464b79  89742404             mov dword ptr [esp + 4], esi
// 00464b7d  33c0                 xor eax, eax
// 00464b7f  c7069cb38100         mov dword ptr [esi], 0x81b39c
// 00464b85  894604               mov dword ptr [esi + 4], eax
// 00464b88  89442410             mov dword ptr [esp + 0x10], eax
// 00464b8c  894608               mov dword ptr [esi + 8], eax
// 00464b8f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00464b93  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00464b97  8b442418             mov eax, dword ptr [esp + 0x18]
// 00464b9b  894e10               mov dword ptr [esi + 0x10], ecx
// 00464b9e  52                   push edx
// 00464b9f  8bce                 mov ecx, esi
// 00464ba1  c644241401           mov byte ptr [esp + 0x14], 1
// 00464ba6  89460c               mov dword ptr [esi + 0xc], eax
// 00464ba9  e82226ffff           call 0x4571d0
// 00464bae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00464bb2  8bc6                 mov eax, esi
// 00464bb4  5e                   pop esi
// 00464bb5  64890d00000000       mov dword ptr fs:[0], ecx
// 00464bbc  83c410               add esp, 0x10
// 00464bbf  c20c00               ret 0xc

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Base
{
    virtual ~Base();
};

struct Count
{
    Control *control;
    Count();
    ~Count();
};

inline Count::Count() : control(0)
{
}

inline Count::~Count()
{
    if (control)
        control->release();
}

struct S : Base
{
    void *value;
    Count count;
    void *first;
    void *last;

    S(void *, void *, void *);
    virtual ~S();
    void connect(void *);
};

S::S(void *a, void *b, void *c)
    : value(0), first(a), last(c)
{
    connect(b);
}
