// from server: 100% by colin
// roc 2008-06 00496910  unit: RBX::Network::Players::Plugin  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496910
//
// 00496910  64a100000000         mov eax, dword ptr fs:[0]
// 00496916  6aff                 push -1
// 00496918  6818047c00           push 0x7c0418
// 0049691d  50                   push eax
// 0049691e  64892500000000       mov dword ptr fs:[0], esp
// 00496925  56                   push esi
// 00496926  8bd1                 mov edx, ecx
// 00496928  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049692c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00496930  50                   push eax
// 00496931  83ec08               sub esp, 8
// 00496934  8bc4                 mov eax, esp
// 00496936  8908                 mov dword ptr [eax], ecx
// 00496938  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049693c  894804               mov dword ptr [eax + 4], ecx
// 0049693f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00496943  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049694b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0049694f  85c0                 test eax, eax
// 00496951  740c                 je 0x49695f
// 00496953  83c004               add eax, 4
// 00496956  b901000000           mov ecx, 1
// 0049695b  f00fc108             lock xadd dword ptr [eax], ecx
// 0049695f  8b4a04               mov ecx, dword ptr [edx + 4]
// 00496962  034c2420             add ecx, dword ptr [esp + 0x20]
// 00496966  8b12                 mov edx, dword ptr [edx]
// 00496968  ffd2                 call edx
// 0049696a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049696e  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00496976  85f6                 test esi, esi
// 00496978  742a                 je 0x4969a4
// 0049697a  8d4604               lea eax, [esi + 4]
// 0049697d  83c9ff               or ecx, 0xffffffff
// 00496980  f00fc108             lock xadd dword ptr [eax], ecx
// 00496984  751e                 jne 0x4969a4
// 00496986  8b16                 mov edx, dword ptr [esi]
// 00496988  8b4204               mov eax, dword ptr [edx + 4]
// 0049698b  8bce                 mov ecx, esi
// 0049698d  ffd0                 call eax
// 0049698f  8d4e08               lea ecx, [esi + 8]
// 00496992  83caff               or edx, 0xffffffff
// 00496995  f00fc111             lock xadd dword ptr [ecx], edx
// 00496999  7509                 jne 0x4969a4
// 0049699b  8b06                 mov eax, dword ptr [esi]
// 0049699d  8b5008               mov edx, dword ptr [eax + 8]
// 004969a0  8bce                 mov ecx, esi
// 004969a2  ffd2                 call edx
// 004969a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004969a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004969af  5e                   pop esi
// 004969b0  83c40c               add esp, 0xc
// 004969b3  c21000               ret 0x10

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
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

__forceinline void Control::release()
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

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct S
{
    typedef void (__thiscall *Function)(void*, Shared, int);
    Function function;
    int adjustment;

    void f(void*, Shared, int);
};

void S::f(void* object, Shared value, int argument)
{
    function(static_cast<char*>(object) + adjustment, value, argument);
}
