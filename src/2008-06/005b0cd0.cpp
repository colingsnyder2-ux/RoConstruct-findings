// from server: 100% by colin
// roc 2008-06 005b0cd0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0cd0
//
// 005b0cd0  6aff                 push -1
// 005b0cd2  6818047c00           push 0x7c0418
// 005b0cd7  64a100000000         mov eax, dword ptr fs:[0]
// 005b0cdd  50                   push eax
// 005b0cde  64892500000000       mov dword ptr fs:[0], esp
// 005b0ce5  51                   push ecx
// 005b0ce6  56                   push esi
// 005b0ce7  8bc1                 mov eax, ecx
// 005b0ce9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005b0ced  83ec08               sub esp, 8
// 005b0cf0  8bcc                 mov ecx, esp
// 005b0cf2  8911                 mov dword ptr [ecx], edx
// 005b0cf4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b0cf8  895104               mov dword ptr [ecx + 4], edx
// 005b0cfb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b0cff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b0d07  8964240c             mov dword ptr [esp + 0xc], esp
// 005b0d0b  85c9                 test ecx, ecx
// 005b0d0d  740c                 je 0x5b0d1b
// 005b0d0f  83c104               add ecx, 4
// 005b0d12  ba01000000           mov edx, 1
// 005b0d17  f00fc111             lock xadd dword ptr [ecx], edx
// 005b0d1b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b0d1f  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 005b0d25  8b7008               mov esi, dword ptr [eax + 8]
// 005b0d28  8b1432               mov edx, dword ptr [edx + esi]
// 005b0d2b  035004               add edx, dword ptr [eax + 4]
// 005b0d2e  8b00                 mov eax, dword ptr [eax]
// 005b0d30  8d8c0a50010000       lea ecx, [edx + ecx + 0x150]
// 005b0d37  ffd0                 call eax
// 005b0d39  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b0d3d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005b0d45  85f6                 test esi, esi
// 005b0d47  742a                 je 0x5b0d73
// 005b0d49  8d4e04               lea ecx, [esi + 4]
// 005b0d4c  83caff               or edx, 0xffffffff
// 005b0d4f  f00fc111             lock xadd dword ptr [ecx], edx
// 005b0d53  751e                 jne 0x5b0d73
// 005b0d55  8b06                 mov eax, dword ptr [esi]
// 005b0d57  8b5004               mov edx, dword ptr [eax + 4]
// 005b0d5a  8bce                 mov ecx, esi
// 005b0d5c  ffd2                 call edx
// 005b0d5e  8d4608               lea eax, [esi + 8]
// 005b0d61  83c9ff               or ecx, 0xffffffff
// 005b0d64  f00fc108             lock xadd dword ptr [eax], ecx
// 005b0d68  7509                 jne 0x5b0d73
// 005b0d6a  8b16                 mov edx, dword ptr [esi]
// 005b0d6c  8b4208               mov eax, dword ptr [edx + 8]
// 005b0d6f  8bce                 mov ecx, esi
// 005b0d71  ffd0                 call eax
// 005b0d73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0d77  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0d7e  5e                   pop esi
// 005b0d7f  83c410               add esp, 0x10
// 005b0d82  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release()
    {
        if (_InterlockedDecrement(&strong) == 0)
        {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Shared
{
    void* value;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : value(other.value), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct VirtualBase {};

struct Base : virtual VirtualBase {};

struct Padding
{
    char bytes[0x150];
};

struct Receiver : Padding, Base {};

struct S
{
    void (Receiver::*setter)(Shared);
    void f(Receiver*, Shared);
};

void S::f(Receiver* object, Shared value)
{
    (object->*setter)(value);
}
