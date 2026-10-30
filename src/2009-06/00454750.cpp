// roc 2009-06 00454750  unit: CRobloxReportDocView  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454750
//
// 00454750  64a100000000         mov eax, dword ptr fs:[0]
// 00454756  6aff                 push -1
// 00454758  6808b08600           push 0x86b008
// 0045475d  50                   push eax
// 0045475e  64892500000000       mov dword ptr fs:[0], esp
// 00454765  56                   push esi
// 00454766  8bd1                 mov edx, ecx
// 00454768  8b442420             mov eax, dword ptr [esp + 0x20]
// 0045476c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00454770  50                   push eax
// 00454771  83ec08               sub esp, 8
// 00454774  8bc4                 mov eax, esp
// 00454776  8908                 mov dword ptr [eax], ecx
// 00454778  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0045477c  894804               mov dword ptr [eax + 4], ecx
// 0045477f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00454783  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045478b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0045478f  85c0                 test eax, eax
// 00454791  740c                 je 0x45479f
// 00454793  83c004               add eax, 4
// 00454796  b901000000           mov ecx, 1
// 0045479b  f00fc108             lock xadd dword ptr [eax], ecx
// 0045479f  8b4a04               mov ecx, dword ptr [edx + 4]
// 004547a2  034c2420             add ecx, dword ptr [esp + 0x20]
// 004547a6  8b12                 mov edx, dword ptr [edx]
// 004547a8  ffd2                 call edx
// 004547aa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004547ae  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004547b6  85f6                 test esi, esi
// 004547b8  742a                 je 0x4547e4
// 004547ba  8d4604               lea eax, [esi + 4]
// 004547bd  83c9ff               or ecx, 0xffffffff
// 004547c0  f00fc108             lock xadd dword ptr [eax], ecx
// 004547c4  751e                 jne 0x4547e4
// 004547c6  8b16                 mov edx, dword ptr [esi]
// 004547c8  8b4204               mov eax, dword ptr [edx + 4]
// 004547cb  8bce                 mov ecx, esi
// 004547cd  ffd0                 call eax
// 004547cf  8d4e08               lea ecx, [esi + 8]
// 004547d2  83caff               or edx, 0xffffffff
// 004547d5  f00fc111             lock xadd dword ptr [ecx], edx
// 004547d9  7509                 jne 0x4547e4
// 004547db  8b06                 mov eax, dword ptr [esi]
// 004547dd  8b5008               mov edx, dword ptr [eax + 8]
// 004547e0  8bce                 mov ecx, esi
// 004547e2  ffd2                 call edx
// 004547e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004547e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004547ef  5e                   pop esi
// 004547f0  83c40c               add esp, 0xc
// 004547f3  c21000               ret 0x10
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