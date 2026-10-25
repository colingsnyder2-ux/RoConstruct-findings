// from server: 100% by king_originala
// roc 2008-06 0044bee0  unit: CRobloxModule  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044bee0
//
// 0044bee0  6aff                 push -1
// 0044bee2  6808767c00           push 0x7c7608
// 0044bee7  64a100000000         mov eax, dword ptr fs:[0]
// 0044beed  50                   push eax
// 0044beee  64892500000000       mov dword ptr fs:[0], esp
// 0044bef5  83ec18               sub esp, 0x18
// 0044bef8  56                   push esi
// 0044bef9  b9a04a9700           mov ecx, 0x974aa0
// 0044befe  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 0044bf06  e885711100           call 0x563090
// 0044bf0b  c644241001           mov byte ptr [esp + 0x10], 1
// 0044bf10  833d10dd960000       cmp dword ptr [0x96dd10], 0
// 0044bf17  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0044bf1f  0f859b000000         jne 0x44bfc0
// 0044bf25  8d442404             lea eax, [esp + 4]
// 0044bf29  50                   push eax
// 0044bf2a  e891feffff           call 0x44bdc0
// 0044bf2f  8d4c2418             lea ecx, [esp + 0x18]
// 0044bf33  51                   push ecx
// 0044bf34  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0044bf39  e8b2d11100           call 0x5690f0
// 0044bf3e  83c408               add esp, 8
// 0044bf41  8b00                 mov eax, dword ptr [eax]
// 0044bf43  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044bf47  50                   push eax
// 0044bf48  c644242802           mov byte ptr [esp + 0x28], 2
// 0044bf4d  e89ee91000           call 0x55a8f0
// 0044bf52  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044bf56  c644242401           mov byte ptr [esp + 0x24], 1
// 0044bf5b  85f6                 test esi, esi
// 0044bf5d  742a                 je 0x44bf89
// 0044bf5f  8d5604               lea edx, [esi + 4]
// 0044bf62  83c8ff               or eax, 0xffffffff
// 0044bf65  f00fc102             lock xadd dword ptr [edx], eax
// 0044bf69  751e                 jne 0x44bf89
// 0044bf6b  8b16                 mov edx, dword ptr [esi]
// 0044bf6d  8b4204               mov eax, dword ptr [edx + 4]
// 0044bf70  8bce                 mov ecx, esi
// 0044bf72  ffd0                 call eax
// 0044bf74  8d4e08               lea ecx, [esi + 8]
// 0044bf77  83caff               or edx, 0xffffffff
// 0044bf7a  f00fc111             lock xadd dword ptr [ecx], edx
// 0044bf7e  7509                 jne 0x44bf89
// 0044bf80  8b06                 mov eax, dword ptr [esi]
// 0044bf82  8b5008               mov edx, dword ptr [eax + 8]
// 0044bf85  8bce                 mov ecx, esi
// 0044bf87  ffd2                 call edx
// 0044bf89  8b742408             mov esi, dword ptr [esp + 8]
// 0044bf8d  c644242400           mov byte ptr [esp + 0x24], 0
// 0044bf92  85f6                 test esi, esi
// 0044bf94  742a                 je 0x44bfc0
// 0044bf96  8d4604               lea eax, [esi + 4]
// 0044bf99  83c9ff               or ecx, 0xffffffff
// 0044bf9c  f00fc108             lock xadd dword ptr [eax], ecx
// 0044bfa0  751e                 jne 0x44bfc0
// 0044bfa2  8b16                 mov edx, dword ptr [esi]
// 0044bfa4  8b4204               mov eax, dword ptr [edx + 4]
// 0044bfa7  8bce                 mov ecx, esi
// 0044bfa9  ffd0                 call eax
// 0044bfab  8d4e08               lea ecx, [esi + 8]
// 0044bfae  83caff               or edx, 0xffffffff
// 0044bfb1  f00fc111             lock xadd dword ptr [ecx], edx
// 0044bfb5  7509                 jne 0x44bfc0
// 0044bfb7  8b06                 mov eax, dword ptr [esi]
// 0044bfb9  8b5008               mov edx, dword ptr [eax + 8]
// 0044bfbc  8bce                 mov ecx, esi
// 0044bfbe  ffd2                 call edx
// 0044bfc0  8b3510dd9600         mov esi, dword ptr [0x96dd10]
// 0044bfc6  b9a04a9700           mov ecx, 0x974aa0
// 0044bfcb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0044bfd3  e808711100           call 0x5630e0
// 0044bfd8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0044bfdc  8bc6                 mov eax, esi
// 0044bfde  5e                   pop esi
// 0044bfdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0044bfe6  83c424               add esp, 0x24
// 0044bfe9  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

struct Object {
    void set(void*);
};

struct Shared {
    Object* pointer;
    Control* control;

    ~Shared()
    {
        if (control)
            control->release();
    }

    Object* get() const { return pointer; }
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Lock {
    void acquire();
    void release();
};

struct Guard {
    Lock* lock;
    bool acquired;

    Guard(Lock* p) : lock(p)
    {
        lock->acquire();
        acquired = true;
    }

    ~Guard()
    {
        if (acquired)
            lock->release();
    }
};

Shared __cdecl create();
Shared __cdecl factory();

void* __cdecl f()
{
    Guard guard(reinterpret_cast<Lock*>(0x00974aa0));
    if (*reinterpret_cast<void**>(0x0096dd10) == 0) {
        Shared object = create();
        object.pointer->set(factory().get());
    }
    return *reinterpret_cast<void**>(0x0096dd10);
}
