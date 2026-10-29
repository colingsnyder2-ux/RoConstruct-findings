// roc 2012-06 006fddb0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006fddb0
//
// 006fddb0  64a100000000         mov eax, dword ptr fs:[0]
// 006fddb6  6aff                 push -1
// 006fddb8  68e852ad00           push 0xad52e8
// 006fddbd  50                   push eax
// 006fddbe  64892500000000       mov dword ptr fs:[0], esp
// 006fddc5  56                   push esi
// 006fddc6  8bd1                 mov edx, ecx
// 006fddc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fddcc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fddd0  50                   push eax
// 006fddd1  83ec08               sub esp, 8
// 006fddd4  8bc4                 mov eax, esp
// 006fddd6  8908                 mov dword ptr [eax], ecx
// 006fddd8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fdddc  894804               mov dword ptr [eax + 4], ecx
// 006fdddf  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fdde3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006fddeb  8964242c             mov dword ptr [esp + 0x2c], esp
// 006fddef  85c0                 test eax, eax
// 006fddf1  740c                 je 0x6fddff
// 006fddf3  83c004               add eax, 4
// 006fddf6  b901000000           mov ecx, 1
// 006fddfb  f00fc108             lock xadd dword ptr [eax], ecx
// 006fddff  8b4a04               mov ecx, dword ptr [edx + 4]
// 006fde02  034c2420             add ecx, dword ptr [esp + 0x20]
// 006fde06  8b12                 mov edx, dword ptr [edx]
// 006fde08  ffd2                 call edx
// 006fde0a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006fde0e  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 006fde16  85f6                 test esi, esi
// 006fde18  742a                 je 0x6fde44
// 006fde1a  8d4604               lea eax, [esi + 4]
// 006fde1d  83c9ff               or ecx, 0xffffffff
// 006fde20  f00fc108             lock xadd dword ptr [eax], ecx
// 006fde24  751e                 jne 0x6fde44
// 006fde26  8b16                 mov edx, dword ptr [esi]
// 006fde28  8b4204               mov eax, dword ptr [edx + 4]
// 006fde2b  8bce                 mov ecx, esi
// 006fde2d  ffd0                 call eax
// 006fde2f  8d4e08               lea ecx, [esi + 8]
// 006fde32  83caff               or edx, 0xffffffff
// 006fde35  f00fc111             lock xadd dword ptr [ecx], edx
// 006fde39  7509                 jne 0x6fde44
// 006fde3b  8b06                 mov eax, dword ptr [esi]
// 006fde3d  8b5008               mov edx, dword ptr [eax + 8]
// 006fde40  8bce                 mov ecx, esi
// 006fde42  ffd2                 call edx
// 006fde44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fde48  64890d00000000       mov dword ptr fs:[0], ecx
// 006fde4f  5e                   pop esi
// 006fde50  83c40c               add esp, 0xc
// 006fde53  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S@@QAEXPAXUShared@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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