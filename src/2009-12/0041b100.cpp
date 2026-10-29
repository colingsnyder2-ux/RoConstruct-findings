// roc 2009-12 0041b100  unit: rbx::signals::connection::slot  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041b100
//
// 0041b100  6aff                 push -1
// 0041b102  6828799400           push 0x947928
// 0041b107  64a100000000         mov eax, dword ptr fs:[0]
// 0041b10d  50                   push eax
// 0041b10e  64892500000000       mov dword ptr fs:[0], esp
// 0041b115  51                   push ecx
// 0041b116  56                   push esi
// 0041b117  8bd1                 mov edx, ecx
// 0041b119  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041b11d  83ec08               sub esp, 8
// 0041b120  8bc4                 mov eax, esp
// 0041b122  8908                 mov dword ptr [eax], ecx
// 0041b124  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0041b128  894804               mov dword ptr [eax + 4], ecx
// 0041b12b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0041b12f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041b137  8964240c             mov dword ptr [esp + 0xc], esp
// 0041b13b  85c0                 test eax, eax
// 0041b13d  740c                 je 0x41b14b
// 0041b13f  83c004               add eax, 4
// 0041b142  b901000000           mov ecx, 1
// 0041b147  f00fc108             lock xadd dword ptr [eax], ecx
// 0041b14b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041b14f  8b12                 mov edx, dword ptr [edx]
// 0041b151  ffd2                 call edx
// 0041b153  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041b157  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041b15f  85f6                 test esi, esi
// 0041b161  742a                 je 0x41b18d
// 0041b163  8d4604               lea eax, [esi + 4]
// 0041b166  83c9ff               or ecx, 0xffffffff
// 0041b169  f00fc108             lock xadd dword ptr [eax], ecx
// 0041b16d  751e                 jne 0x41b18d
// 0041b16f  8b16                 mov edx, dword ptr [esi]
// 0041b171  8b4204               mov eax, dword ptr [edx + 4]
// 0041b174  8bce                 mov ecx, esi
// 0041b176  ffd0                 call eax
// 0041b178  8d4e08               lea ecx, [esi + 8]
// 0041b17b  83caff               or edx, 0xffffffff
// 0041b17e  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b182  7509                 jne 0x41b18d
// 0041b184  8b06                 mov eax, dword ptr [esi]
// 0041b186  8b5008               mov edx, dword ptr [eax + 8]
// 0041b189  8bce                 mov ecx, esi
// 0041b18b  ffd2                 call edx
// 0041b18d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b191  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b198  5e                   pop esi
// 0041b199  83c410               add esp, 0x10
// 0041b19c  c20c00               ret 0xc
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