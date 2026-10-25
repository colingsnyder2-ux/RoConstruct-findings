// from server: 100% by king_originala
// roc 2008-06 00439cd0  unit: CSelectionPropGrid  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439cd0
//
// 00439cd0  64a100000000         mov eax, dword ptr fs:[0]
// 00439cd6  6aff                 push -1
// 00439cd8  6868617c00           push 0x7c6168
// 00439cdd  50                   push eax
// 00439cde  64892500000000       mov dword ptr fs:[0], esp
// 00439ce5  56                   push esi
// 00439ce6  8bf1                 mov esi, ecx
// 00439ce8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00439cf0  85f6                 test esi, esi
// 00439cf2  7408                 je 0x439cfc
// 00439cf4  8d8e88010000         lea ecx, [esi + 0x188]
// 00439cfa  eb02                 jmp 0x439cfe
// 00439cfc  33c9                 xor ecx, ecx
// 00439cfe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00439d02  85c0                 test eax, eax
// 00439d04  7410                 je 0x439d16
// 00439d06  51                   push ecx
// 00439d07  8d88c4000000         lea ecx, [eax + 0xc4]
// 00439d0d  e86ebd1a00           call 0x5e5a80
// 00439d12  8b442414             mov eax, dword ptr [esp + 0x14]
// 00439d16  50                   push eax
// 00439d17  8d8e18020000         lea ecx, [esi + 0x218]
// 00439d1d  e83ef9ffff           call 0x439660
// 00439d22  8b742418             mov esi, dword ptr [esp + 0x18]
// 00439d26  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00439d2e  85f6                 test esi, esi
// 00439d30  742a                 je 0x439d5c
// 00439d32  8d4604               lea eax, [esi + 4]
// 00439d35  83c9ff               or ecx, 0xffffffff
// 00439d38  f00fc108             lock xadd dword ptr [eax], ecx
// 00439d3c  751e                 jne 0x439d5c
// 00439d3e  8b16                 mov edx, dword ptr [esi]
// 00439d40  8b4204               mov eax, dword ptr [edx + 4]
// 00439d43  8bce                 mov ecx, esi
// 00439d45  ffd0                 call eax
// 00439d47  8d4e08               lea ecx, [esi + 8]
// 00439d4a  83caff               or edx, 0xffffffff
// 00439d4d  f00fc111             lock xadd dword ptr [ecx], edx
// 00439d51  7509                 jne 0x439d5c
// 00439d53  8b06                 mov eax, dword ptr [esi]
// 00439d55  8b5008               mov edx, dword ptr [eax + 8]
// 00439d58  8bce                 mov ecx, esi
// 00439d5a  ffd2                 call edx
// 00439d5c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00439d60  64890d00000000       mov dword ptr fs:[0], ecx
// 00439d67  5e                   pop esi
// 00439d68  83c40c               add esp, 0xc
// 00439d6b  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
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

struct Listener
{
    char storage[0x90];
};

struct Event
{
    void connect(Listener*);
};

struct Object
{
    char padding[0xc4];
    Event event;
};

struct Shared
{
    Object* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Slot
{
    void assign(Object*);
};

struct CSelectionPropGrid
{
    char padding[0x188];
    Listener listener;
    Slot slot;

    void set(Shared value);
};

void CSelectionPropGrid::set(Shared value)
{
    Listener* target = this ? &listener : 0;
    if (value.object)
        value.object->event.connect(target);
    slot.assign(value.object);
}
