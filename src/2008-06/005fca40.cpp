// from server: 100% by king_originala
// roc 2008-06 005fca40  unit: RBX::LocalBackpack  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fca40
//
// 005fca40  64a100000000         mov eax, dword ptr fs:[0]
// 005fca46  6aff                 push -1
// 005fca48  6818047c00           push 0x7c0418
// 005fca4d  50                   push eax
// 005fca4e  64892500000000       mov dword ptr fs:[0], esp
// 005fca55  56                   push esi
// 005fca56  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fca5a  50                   push eax
// 005fca5b  81c188feffff         add ecx, 0xfffffe88
// 005fca61  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fca69  e8c2fcffff           call 0x5fc730
// 005fca6e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005fca72  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fca7a  85f6                 test esi, esi
// 005fca7c  742a                 je 0x5fcaa8
// 005fca7e  8d4e04               lea ecx, [esi + 4]
// 005fca81  83caff               or edx, 0xffffffff
// 005fca84  f00fc111             lock xadd dword ptr [ecx], edx
// 005fca88  751e                 jne 0x5fcaa8
// 005fca8a  8b06                 mov eax, dword ptr [esi]
// 005fca8c  8b5004               mov edx, dword ptr [eax + 4]
// 005fca8f  8bce                 mov ecx, esi
// 005fca91  ffd2                 call edx
// 005fca93  8d4608               lea eax, [esi + 8]
// 005fca96  83c9ff               or ecx, 0xffffffff
// 005fca99  f00fc108             lock xadd dword ptr [eax], ecx
// 005fca9d  7509                 jne 0x5fcaa8
// 005fca9f  8b16                 mov edx, dword ptr [esi]
// 005fcaa1  8b4208               mov eax, dword ptr [edx + 8]
// 005fcaa4  8bce                 mov ecx, esi
// 005fcaa6  ffd0                 call eax
// 005fcaa8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fcaac  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcab3  5e                   pop esi
// 005fcab4  83c40c               add esp, 0xc
// 005fcab7  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
    void weak_release();
};

inline void Control::weak_release()
{
    if (_InterlockedDecrement(&weak) == 0)
        destroy();
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        weak_release();
    }
}

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct S {
    void helper(void*);
    void f(int, Shared);
};

void S::f(int, Shared value)
{
    reinterpret_cast<S*>(reinterpret_cast<char*>(this) - 0x178)
        ->helper(value.object);
}
