// roc 2011-06 0048e1d0  unit: CScriptDoc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048e1d0
//
// 0048e1d0  6aff                 push -1
// 0048e1d2  68688d9d00           push 0x9d8d68
// 0048e1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0048e1dd  50                   push eax
// 0048e1de  64892500000000       mov dword ptr fs:[0], esp
// 0048e1e5  51                   push ecx
// 0048e1e6  56                   push esi
// 0048e1e7  8bd1                 mov edx, ecx
// 0048e1e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048e1ed  83ec08               sub esp, 8
// 0048e1f0  8bc4                 mov eax, esp
// 0048e1f2  8908                 mov dword ptr [eax], ecx
// 0048e1f4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048e1f8  894804               mov dword ptr [eax + 4], ecx
// 0048e1fb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048e1ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048e207  8964240c             mov dword ptr [esp + 0xc], esp
// 0048e20b  85c0                 test eax, eax
// 0048e20d  740c                 je 0x48e21b
// 0048e20f  83c004               add eax, 4
// 0048e212  b901000000           mov ecx, 1
// 0048e217  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e21b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048e21f  8b12                 mov edx, dword ptr [edx]
// 0048e221  ffd2                 call edx
// 0048e223  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048e227  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048e22f  85f6                 test esi, esi
// 0048e231  742a                 je 0x48e25d
// 0048e233  8d4604               lea eax, [esi + 4]
// 0048e236  83c9ff               or ecx, 0xffffffff
// 0048e239  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e23d  751e                 jne 0x48e25d
// 0048e23f  8b16                 mov edx, dword ptr [esi]
// 0048e241  8b4204               mov eax, dword ptr [edx + 4]
// 0048e244  8bce                 mov ecx, esi
// 0048e246  ffd0                 call eax
// 0048e248  8d4e08               lea ecx, [esi + 8]
// 0048e24b  83caff               or edx, 0xffffffff
// 0048e24e  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e252  7509                 jne 0x48e25d
// 0048e254  8b06                 mov eax, dword ptr [esi]
// 0048e256  8b5008               mov edx, dword ptr [eax + 8]
// 0048e259  8bce                 mov ecx, esi
// 0048e25b  ffd2                 call edx
// 0048e25d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e261  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e268  5e                   pop esi
// 0048e269  83c410               add esp, 0x10
// 0048e26c  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXPAXUShared@2@@Z)

namespace ns_ROCX000006 {
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
}
