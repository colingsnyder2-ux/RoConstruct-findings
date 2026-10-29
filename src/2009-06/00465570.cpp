// roc 2009-06 00465570  unit: CScriptEditor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00465570
//
// 00465570  6aff                 push -1
// 00465572  6808b08600           push 0x86b008
// 00465577  64a100000000         mov eax, dword ptr fs:[0]
// 0046557d  50                   push eax
// 0046557e  64892500000000       mov dword ptr fs:[0], esp
// 00465585  51                   push ecx
// 00465586  56                   push esi
// 00465587  8bd1                 mov edx, ecx
// 00465589  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046558d  83ec08               sub esp, 8
// 00465590  8bc4                 mov eax, esp
// 00465592  8908                 mov dword ptr [eax], ecx
// 00465594  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00465598  894804               mov dword ptr [eax + 4], ecx
// 0046559b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046559f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004655a7  8964240c             mov dword ptr [esp + 0xc], esp
// 004655ab  85c0                 test eax, eax
// 004655ad  740c                 je 0x4655bb
// 004655af  83c004               add eax, 4
// 004655b2  b901000000           mov ecx, 1
// 004655b7  f00fc108             lock xadd dword ptr [eax], ecx
// 004655bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004655bf  8b12                 mov edx, dword ptr [edx]
// 004655c1  ffd2                 call edx
// 004655c3  8b742420             mov esi, dword ptr [esp + 0x20]
// 004655c7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004655cf  85f6                 test esi, esi
// 004655d1  742a                 je 0x4655fd
// 004655d3  8d4604               lea eax, [esi + 4]
// 004655d6  83c9ff               or ecx, 0xffffffff
// 004655d9  f00fc108             lock xadd dword ptr [eax], ecx
// 004655dd  751e                 jne 0x4655fd
// 004655df  8b16                 mov edx, dword ptr [esi]
// 004655e1  8b4204               mov eax, dword ptr [edx + 4]
// 004655e4  8bce                 mov ecx, esi
// 004655e6  ffd0                 call eax
// 004655e8  8d4e08               lea ecx, [esi + 8]
// 004655eb  83caff               or edx, 0xffffffff
// 004655ee  f00fc111             lock xadd dword ptr [ecx], edx
// 004655f2  7509                 jne 0x4655fd
// 004655f4  8b06                 mov eax, dword ptr [esi]
// 004655f6  8b5008               mov edx, dword ptr [eax + 8]
// 004655f9  8bce                 mov ecx, esi
// 004655fb  ffd2                 call edx
// 004655fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00465601  64890d00000000       mov dword ptr fs:[0], ecx
// 00465608  5e                   pop esi
// 00465609  83c410               add esp, 0x10
// 0046560c  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@@QAEXPAXUShared@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

typedef void (__thiscall *Callback)(void*, Shared);

struct S {
    Callback callback;
    void f(void*, Shared);
};

void S::f(void* object, Shared value)
{
    callback(object, value);
}