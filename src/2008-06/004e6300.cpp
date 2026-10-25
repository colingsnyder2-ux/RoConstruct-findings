// from server: 100% by king_originala
// roc 2008-06 004e6300  unit: RBX::ViewNew::PartChunk  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6300
//
// 004e6300  6aff                 push -1
// 004e6302  6818047c00           push 0x7c0418
// 004e6307  64a100000000         mov eax, dword ptr fs:[0]
// 004e630d  50                   push eax
// 004e630e  64892500000000       mov dword ptr fs:[0], esp
// 004e6315  51                   push ecx
// 004e6316  56                   push esi
// 004e6317  8bd1                 mov edx, ecx
// 004e6319  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e631d  83ec08               sub esp, 8
// 004e6320  8bc4                 mov eax, esp
// 004e6322  8908                 mov dword ptr [eax], ecx
// 004e6324  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e6328  894804               mov dword ptr [eax + 4], ecx
// 004e632b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e632f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004e6337  8964240c             mov dword ptr [esp + 0xc], esp
// 004e633b  85c0                 test eax, eax
// 004e633d  740c                 je 0x4e634b
// 004e633f  83c004               add eax, 4
// 004e6342  b901000000           mov ecx, 1
// 004e6347  f00fc108             lock xadd dword ptr [eax], ecx
// 004e634b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e634f  8b12                 mov edx, dword ptr [edx]
// 004e6351  ffd2                 call edx
// 004e6353  8b742420             mov esi, dword ptr [esp + 0x20]
// 004e6357  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004e635f  85f6                 test esi, esi
// 004e6361  742a                 je 0x4e638d
// 004e6363  8d4604               lea eax, [esi + 4]
// 004e6366  83c9ff               or ecx, 0xffffffff
// 004e6369  f00fc108             lock xadd dword ptr [eax], ecx
// 004e636d  751e                 jne 0x4e638d
// 004e636f  8b16                 mov edx, dword ptr [esi]
// 004e6371  8b4204               mov eax, dword ptr [edx + 4]
// 004e6374  8bce                 mov ecx, esi
// 004e6376  ffd0                 call eax
// 004e6378  8d4e08               lea ecx, [esi + 8]
// 004e637b  83caff               or edx, 0xffffffff
// 004e637e  f00fc111             lock xadd dword ptr [ecx], edx
// 004e6382  7509                 jne 0x4e638d
// 004e6384  8b06                 mov eax, dword ptr [esi]
// 004e6386  8b5008               mov edx, dword ptr [eax + 8]
// 004e6389  8bce                 mov ecx, esi
// 004e638b  ffd2                 call edx
// 004e638d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e6391  64890d00000000       mov dword ptr fs:[0], ecx
// 004e6398  5e                   pop esi
// 004e6399  83c410               add esp, 0x10
// 004e639c  c20c00               ret 0xc

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
