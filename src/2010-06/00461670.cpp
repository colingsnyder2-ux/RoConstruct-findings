// roc 2010-06 00461670  unit: CRobloxReportDocView  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461670
//
// 00461670  64a100000000         mov eax, dword ptr fs:[0]
// 00461676  6aff                 push -1
// 00461678  68e8679900           push 0x9967e8
// 0046167d  50                   push eax
// 0046167e  64892500000000       mov dword ptr fs:[0], esp
// 00461685  56                   push esi
// 00461686  8bd1                 mov edx, ecx
// 00461688  8b442420             mov eax, dword ptr [esp + 0x20]
// 0046168c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00461690  50                   push eax
// 00461691  83ec08               sub esp, 8
// 00461694  8bc4                 mov eax, esp
// 00461696  8908                 mov dword ptr [eax], ecx
// 00461698  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046169c  894804               mov dword ptr [eax + 4], ecx
// 0046169f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004616a3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004616ab  8964242c             mov dword ptr [esp + 0x2c], esp
// 004616af  85c0                 test eax, eax
// 004616b1  740c                 je 0x4616bf
// 004616b3  83c004               add eax, 4
// 004616b6  b901000000           mov ecx, 1
// 004616bb  f00fc108             lock xadd dword ptr [eax], ecx
// 004616bf  8b4a04               mov ecx, dword ptr [edx + 4]
// 004616c2  034c2420             add ecx, dword ptr [esp + 0x20]
// 004616c6  8b12                 mov edx, dword ptr [edx]
// 004616c8  ffd2                 call edx
// 004616ca  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004616ce  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004616d6  85f6                 test esi, esi
// 004616d8  742a                 je 0x461704
// 004616da  8d4604               lea eax, [esi + 4]
// 004616dd  83c9ff               or ecx, 0xffffffff
// 004616e0  f00fc108             lock xadd dword ptr [eax], ecx
// 004616e4  751e                 jne 0x461704
// 004616e6  8b16                 mov edx, dword ptr [esi]
// 004616e8  8b4204               mov eax, dword ptr [edx + 4]
// 004616eb  8bce                 mov ecx, esi
// 004616ed  ffd0                 call eax
// 004616ef  8d4e08               lea ecx, [esi + 8]
// 004616f2  83caff               or edx, 0xffffffff
// 004616f5  f00fc111             lock xadd dword ptr [ecx], edx
// 004616f9  7509                 jne 0x461704
// 004616fb  8b06                 mov eax, dword ptr [esi]
// 004616fd  8b5008               mov edx, dword ptr [eax + 8]
// 00461700  8bce                 mov ecx, esi
// 00461702  ffd2                 call edx
// 00461704  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00461708  64890d00000000       mov dword ptr fs:[0], ecx
// 0046170f  5e                   pop esi
// 00461710  83c40c               add esp, 0xc
// 00461713  c21000               ret 0x10
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