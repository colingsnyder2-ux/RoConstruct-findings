// roc 2009-12 00513bb0  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513bb0
//
// 00513bb0  64a100000000         mov eax, dword ptr fs:[0]
// 00513bb6  6aff                 push -1
// 00513bb8  6828799400           push 0x947928
// 00513bbd  50                   push eax
// 00513bbe  64892500000000       mov dword ptr fs:[0], esp
// 00513bc5  56                   push esi
// 00513bc6  8bd1                 mov edx, ecx
// 00513bc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00513bcc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00513bd0  50                   push eax
// 00513bd1  83ec08               sub esp, 8
// 00513bd4  8bc4                 mov eax, esp
// 00513bd6  8908                 mov dword ptr [eax], ecx
// 00513bd8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00513bdc  894804               mov dword ptr [eax + 4], ecx
// 00513bdf  8b442428             mov eax, dword ptr [esp + 0x28]
// 00513be3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00513beb  8964242c             mov dword ptr [esp + 0x2c], esp
// 00513bef  85c0                 test eax, eax
// 00513bf1  740c                 je 0x513bff
// 00513bf3  83c004               add eax, 4
// 00513bf6  b901000000           mov ecx, 1
// 00513bfb  f00fc108             lock xadd dword ptr [eax], ecx
// 00513bff  8b4a04               mov ecx, dword ptr [edx + 4]
// 00513c02  034c2420             add ecx, dword ptr [esp + 0x20]
// 00513c06  8b12                 mov edx, dword ptr [edx]
// 00513c08  ffd2                 call edx
// 00513c0a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00513c0e  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00513c16  85f6                 test esi, esi
// 00513c18  742a                 je 0x513c44
// 00513c1a  8d4604               lea eax, [esi + 4]
// 00513c1d  83c9ff               or ecx, 0xffffffff
// 00513c20  f00fc108             lock xadd dword ptr [eax], ecx
// 00513c24  751e                 jne 0x513c44
// 00513c26  8b16                 mov edx, dword ptr [esi]
// 00513c28  8b4204               mov eax, dword ptr [edx + 4]
// 00513c2b  8bce                 mov ecx, esi
// 00513c2d  ffd0                 call eax
// 00513c2f  8d4e08               lea ecx, [esi + 8]
// 00513c32  83caff               or edx, 0xffffffff
// 00513c35  f00fc111             lock xadd dword ptr [ecx], edx
// 00513c39  7509                 jne 0x513c44
// 00513c3b  8b06                 mov eax, dword ptr [esi]
// 00513c3d  8b5008               mov edx, dword ptr [eax + 8]
// 00513c40  8bce                 mov ecx, esi
// 00513c42  ffd2                 call edx
// 00513c44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00513c48  64890d00000000       mov dword ptr fs:[0], ecx
// 00513c4f  5e                   pop esi
// 00513c50  83c40c               add esp, 0xc
// 00513c53  c21000               ret 0x10
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