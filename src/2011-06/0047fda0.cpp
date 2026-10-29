// roc 2011-06 0047fda0  unit: CRobloxView  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047fda0
//
// 0047fda0  64a100000000         mov eax, dword ptr fs:[0]
// 0047fda6  6aff                 push -1
// 0047fda8  68688d9d00           push 0x9d8d68
// 0047fdad  50                   push eax
// 0047fdae  64892500000000       mov dword ptr fs:[0], esp
// 0047fdb5  56                   push esi
// 0047fdb6  8bd1                 mov edx, ecx
// 0047fdb8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0047fdbc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047fdc0  50                   push eax
// 0047fdc1  83ec08               sub esp, 8
// 0047fdc4  8bc4                 mov eax, esp
// 0047fdc6  8908                 mov dword ptr [eax], ecx
// 0047fdc8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0047fdcc  894804               mov dword ptr [eax + 4], ecx
// 0047fdcf  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047fdd3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047fddb  8964242c             mov dword ptr [esp + 0x2c], esp
// 0047fddf  85c0                 test eax, eax
// 0047fde1  740c                 je 0x47fdef
// 0047fde3  83c004               add eax, 4
// 0047fde6  b901000000           mov ecx, 1
// 0047fdeb  f00fc108             lock xadd dword ptr [eax], ecx
// 0047fdef  8b4a04               mov ecx, dword ptr [edx + 4]
// 0047fdf2  034c2420             add ecx, dword ptr [esp + 0x20]
// 0047fdf6  8b12                 mov edx, dword ptr [edx]
// 0047fdf8  ffd2                 call edx
// 0047fdfa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0047fdfe  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0047fe06  85f6                 test esi, esi
// 0047fe08  742a                 je 0x47fe34
// 0047fe0a  8d4604               lea eax, [esi + 4]
// 0047fe0d  83c9ff               or ecx, 0xffffffff
// 0047fe10  f00fc108             lock xadd dword ptr [eax], ecx
// 0047fe14  751e                 jne 0x47fe34
// 0047fe16  8b16                 mov edx, dword ptr [esi]
// 0047fe18  8b4204               mov eax, dword ptr [edx + 4]
// 0047fe1b  8bce                 mov ecx, esi
// 0047fe1d  ffd0                 call eax
// 0047fe1f  8d4e08               lea ecx, [esi + 8]
// 0047fe22  83caff               or edx, 0xffffffff
// 0047fe25  f00fc111             lock xadd dword ptr [ecx], edx
// 0047fe29  7509                 jne 0x47fe34
// 0047fe2b  8b06                 mov eax, dword ptr [esi]
// 0047fe2d  8b5008               mov edx, dword ptr [eax + 8]
// 0047fe30  8bce                 mov ecx, esi
// 0047fe32  ffd2                 call edx
// 0047fe34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047fe38  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fe3f  5e                   pop esi
// 0047fe40  83c40c               add esp, 0xc
// 0047fe43  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S@ns_ROCX000008@@QAEXPAXUShared@2@H@Z)

namespace ns_ROCX000008 {
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
}
