// from server: 100% by colin
// roc 2008-06 00578b80  unit: RBX::VDataModel::?$SignalDesc  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578b80
//
// 00578b80  64a100000000         mov eax, dword ptr fs:[0]
// 00578b86  6aff                 push -1
// 00578b88  6818047c00           push 0x7c0418
// 00578b8d  50                   push eax
// 00578b8e  64892500000000       mov dword ptr fs:[0], esp
// 00578b95  56                   push esi
// 00578b96  8b442420             mov eax, dword ptr [esp + 0x20]
// 00578b9a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00578b9e  50                   push eax
// 00578b9f  83ec08               sub esp, 8
// 00578ba2  8bc4                 mov eax, esp
// 00578ba4  8908                 mov dword ptr [eax], ecx
// 00578ba6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00578baa  895004               mov dword ptr [eax + 4], edx
// 00578bad  8b442428             mov eax, dword ptr [esp + 0x28]
// 00578bb1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00578bb9  8964242c             mov dword ptr [esp + 0x2c], esp
// 00578bbd  85c0                 test eax, eax
// 00578bbf  740c                 je 0x578bcd
// 00578bc1  83c004               add eax, 4
// 00578bc4  b901000000           mov ecx, 1
// 00578bc9  f00fc108             lock xadd dword ptr [eax], ecx
// 00578bcd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578bd1  e89afaffff           call 0x578670
// 00578bd6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00578bda  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00578be2  85f6                 test esi, esi
// 00578be4  742a                 je 0x578c10
// 00578be6  8d5604               lea edx, [esi + 4]
// 00578be9  83c8ff               or eax, 0xffffffff
// 00578bec  f00fc102             lock xadd dword ptr [edx], eax
// 00578bf0  751e                 jne 0x578c10
// 00578bf2  8b16                 mov edx, dword ptr [esi]
// 00578bf4  8b4204               mov eax, dword ptr [edx + 4]
// 00578bf7  8bce                 mov ecx, esi
// 00578bf9  ffd0                 call eax
// 00578bfb  8d4e08               lea ecx, [esi + 8]
// 00578bfe  83caff               or edx, 0xffffffff
// 00578c01  f00fc111             lock xadd dword ptr [ecx], edx
// 00578c05  7509                 jne 0x578c10
// 00578c07  8b06                 mov eax, dword ptr [esi]
// 00578c09  8b5008               mov edx, dword ptr [eax + 8]
// 00578c0c  8bce                 mov ecx, esi
// 00578c0e  ffd2                 call edx
// 00578c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00578c14  64890d00000000       mov dword ptr fs:[0], ecx
// 00578c1b  5e                   pop esi
// 00578c1c  83c40c               add esp, 0xc
// 00578c1f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void add_ref();
    void release();
};

inline void Control::add_ref()
{
    _InterlockedIncrement(&strong);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->add_ref();
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct S
{
    void helper(Shared value, int argument);
};

void __cdecl forward(S* receiver, Shared value, int argument)
{
    receiver->helper(value, argument);
}
