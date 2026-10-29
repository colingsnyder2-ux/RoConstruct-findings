// roc 2012-06 00428880  unit: CInstanceRecord::CNameItem  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428880
//
// 00428880  6aff                 push -1
// 00428882  68e852ad00           push 0xad52e8
// 00428887  64a100000000         mov eax, dword ptr fs:[0]
// 0042888d  50                   push eax
// 0042888e  64892500000000       mov dword ptr fs:[0], esp
// 00428895  51                   push ecx
// 00428896  56                   push esi
// 00428897  8bd1                 mov edx, ecx
// 00428899  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042889d  83ec08               sub esp, 8
// 004288a0  8bc4                 mov eax, esp
// 004288a2  8908                 mov dword ptr [eax], ecx
// 004288a4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004288a8  894804               mov dword ptr [eax + 4], ecx
// 004288ab  8b442428             mov eax, dword ptr [esp + 0x28]
// 004288af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004288b7  8964240c             mov dword ptr [esp + 0xc], esp
// 004288bb  85c0                 test eax, eax
// 004288bd  740c                 je 0x4288cb
// 004288bf  83c004               add eax, 4
// 004288c2  b901000000           mov ecx, 1
// 004288c7  f00fc108             lock xadd dword ptr [eax], ecx
// 004288cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004288cf  8b12                 mov edx, dword ptr [edx]
// 004288d1  ffd2                 call edx
// 004288d3  8b742420             mov esi, dword ptr [esp + 0x20]
// 004288d7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004288df  85f6                 test esi, esi
// 004288e1  742a                 je 0x42890d
// 004288e3  8d4604               lea eax, [esi + 4]
// 004288e6  83c9ff               or ecx, 0xffffffff
// 004288e9  f00fc108             lock xadd dword ptr [eax], ecx
// 004288ed  751e                 jne 0x42890d
// 004288ef  8b16                 mov edx, dword ptr [esi]
// 004288f1  8b4204               mov eax, dword ptr [edx + 4]
// 004288f4  8bce                 mov ecx, esi
// 004288f6  ffd0                 call eax
// 004288f8  8d4e08               lea ecx, [esi + 8]
// 004288fb  83caff               or edx, 0xffffffff
// 004288fe  f00fc111             lock xadd dword ptr [ecx], edx
// 00428902  7509                 jne 0x42890d
// 00428904  8b06                 mov eax, dword ptr [esi]
// 00428906  8b5008               mov edx, dword ptr [eax + 8]
// 00428909  8bce                 mov ecx, esi
// 0042890b  ffd2                 call edx
// 0042890d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00428911  64890d00000000       mov dword ptr fs:[0], ecx
// 00428918  5e                   pop esi
// 00428919  83c410               add esp, 0x10
// 0042891c  c20c00               ret 0xc
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