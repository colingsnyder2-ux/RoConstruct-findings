// roc 2010-06 00960e00  unit: RBX::SphereBuilder  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00960e00
//
// 00960e00  6aff                 push -1
// 00960e02  68e8679900           push 0x9967e8
// 00960e07  64a100000000         mov eax, dword ptr fs:[0]
// 00960e0d  50                   push eax
// 00960e0e  64892500000000       mov dword ptr fs:[0], esp
// 00960e15  51                   push ecx
// 00960e16  56                   push esi
// 00960e17  8bd1                 mov edx, ecx
// 00960e19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00960e1d  83ec08               sub esp, 8
// 00960e20  8bc4                 mov eax, esp
// 00960e22  8908                 mov dword ptr [eax], ecx
// 00960e24  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00960e28  894804               mov dword ptr [eax + 4], ecx
// 00960e2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00960e2f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00960e37  8964240c             mov dword ptr [esp + 0xc], esp
// 00960e3b  85c0                 test eax, eax
// 00960e3d  740c                 je 0x960e4b
// 00960e3f  83c004               add eax, 4
// 00960e42  b901000000           mov ecx, 1
// 00960e47  f00fc108             lock xadd dword ptr [eax], ecx
// 00960e4b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00960e4f  8b12                 mov edx, dword ptr [edx]
// 00960e51  ffd2                 call edx
// 00960e53  8b742420             mov esi, dword ptr [esp + 0x20]
// 00960e57  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00960e5f  85f6                 test esi, esi
// 00960e61  742a                 je 0x960e8d
// 00960e63  8d4604               lea eax, [esi + 4]
// 00960e66  83c9ff               or ecx, 0xffffffff
// 00960e69  f00fc108             lock xadd dword ptr [eax], ecx
// 00960e6d  751e                 jne 0x960e8d
// 00960e6f  8b16                 mov edx, dword ptr [esi]
// 00960e71  8b4204               mov eax, dword ptr [edx + 4]
// 00960e74  8bce                 mov ecx, esi
// 00960e76  ffd0                 call eax
// 00960e78  8d4e08               lea ecx, [esi + 8]
// 00960e7b  83caff               or edx, 0xffffffff
// 00960e7e  f00fc111             lock xadd dword ptr [ecx], edx
// 00960e82  7509                 jne 0x960e8d
// 00960e84  8b06                 mov eax, dword ptr [esi]
// 00960e86  8b5008               mov edx, dword ptr [eax + 8]
// 00960e89  8bce                 mov ecx, esi
// 00960e8b  ffd2                 call edx
// 00960e8d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00960e91  64890d00000000       mov dword ptr fs:[0], ecx
// 00960e98  5e                   pop esi
// 00960e99  83c410               add esp, 0x10
// 00960e9c  c20c00               ret 0xc
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