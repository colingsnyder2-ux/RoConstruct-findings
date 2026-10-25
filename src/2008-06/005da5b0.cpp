// from server: 100% by king_originala
// roc 2008-06 005da5b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da5b0
//
// 005da5b0  6aff                 push -1
// 005da5b2  6868917d00           push 0x7d9168
// 005da5b7  64a100000000         mov eax, dword ptr fs:[0]
// 005da5bd  50                   push eax
// 005da5be  64892500000000       mov dword ptr fs:[0], esp
// 005da5c5  83ec08               sub esp, 8
// 005da5c8  56                   push esi
// 005da5c9  8d442404             lea eax, [esp + 4]
// 005da5cd  8bf1                 mov esi, ecx
// 005da5cf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005da5d3  50                   push eax
// 005da5d4  e81772ebff           call 0x4917f0
// 005da5d9  8b442404             mov eax, dword ptr [esp + 4]
// 005da5dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005da5e1  8b16                 mov edx, dword ptr [esi]
// 005da5e3  8b5234               mov edx, dword ptr [edx + 0x34]
// 005da5e6  50                   push eax
// 005da5e7  51                   push ecx
// 005da5e8  8bce                 mov ecx, esi
// 005da5ea  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005da5f2  ffd2                 call edx
// 005da5f4  8b742408             mov esi, dword ptr [esp + 8]
// 005da5f8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005da600  85f6                 test esi, esi
// 005da602  742a                 je 0x5da62e
// 005da604  8d4604               lea eax, [esi + 4]
// 005da607  83c9ff               or ecx, 0xffffffff
// 005da60a  f00fc108             lock xadd dword ptr [eax], ecx
// 005da60e  751e                 jne 0x5da62e
// 005da610  8b16                 mov edx, dword ptr [esi]
// 005da612  8b4204               mov eax, dword ptr [edx + 4]
// 005da615  8bce                 mov ecx, esi
// 005da617  ffd0                 call eax
// 005da619  8d4e08               lea ecx, [esi + 8]
// 005da61c  83caff               or edx, 0xffffffff
// 005da61f  f00fc111             lock xadd dword ptr [ecx], edx
// 005da623  7509                 jne 0x5da62e
// 005da625  8b06                 mov eax, dword ptr [esi]
// 005da627  8b5008               mov edx, dword ptr [eax + 8]
// 005da62a  8bce                 mov ecx, esi
// 005da62c  ffd2                 call edx
// 005da62e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da632  5e                   pop esi
// 005da633  64890d00000000       mov dword ptr fs:[0], ecx
// 005da63a  83c414               add esp, 0x14
// 005da63d  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Pair
{
    void* object;
    Control* control;
    ~Pair();
};

inline Pair::~Pair()
{
    if (control)
        control->release();
}

struct Source
{
    Pair get();
};

struct Descriptor
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void set(void*, void*);

    void f(void*, Source*);
};

void Descriptor::f(void* instance, Source* source)
{
    Pair value = source->get();
    set(instance, value.object);
}
