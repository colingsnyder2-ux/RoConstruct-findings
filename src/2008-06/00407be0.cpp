// from server: 100% by king_originala
// roc 2008-06 00407be0  unit: VCApp::?$CComObject  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407be0
//
// 00407be0  6aff                 push -1
// 00407be2  6808767c00           push 0x7c7608
// 00407be7  64a100000000         mov eax, dword ptr fs:[0]
// 00407bed  50                   push eax
// 00407bee  64892500000000       mov dword ptr fs:[0], esp
// 00407bf5  83ec18               sub esp, 0x18
// 00407bf8  56                   push esi
// 00407bf9  b9a04a9700           mov ecx, 0x974aa0
// 00407bfe  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 00407c06  e885b41500           call 0x563090
// 00407c0b  c644241001           mov byte ptr [esp + 0x10], 1
// 00407c10  833d18c3960000       cmp dword ptr [0x96c318], 0
// 00407c17  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00407c1f  0f859b000000         jne 0x407cc0
// 00407c25  8d442404             lea eax, [esp + 4]
// 00407c29  50                   push eax
// 00407c2a  e8f1fbffff           call 0x407820
// 00407c2f  8d4c2418             lea ecx, [esp + 0x18]
// 00407c33  51                   push ecx
// 00407c34  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00407c39  e8b2141600           call 0x5690f0
// 00407c3e  83c408               add esp, 8
// 00407c41  8b00                 mov eax, dword ptr [eax]
// 00407c43  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00407c47  50                   push eax
// 00407c48  c644242802           mov byte ptr [esp + 0x28], 2
// 00407c4d  e89e2c1500           call 0x55a8f0
// 00407c52  8b742418             mov esi, dword ptr [esp + 0x18]
// 00407c56  c644242401           mov byte ptr [esp + 0x24], 1
// 00407c5b  85f6                 test esi, esi
// 00407c5d  742a                 je 0x407c89
// 00407c5f  8d5604               lea edx, [esi + 4]
// 00407c62  83c8ff               or eax, 0xffffffff
// 00407c65  f00fc102             lock xadd dword ptr [edx], eax
// 00407c69  751e                 jne 0x407c89
// 00407c6b  8b16                 mov edx, dword ptr [esi]
// 00407c6d  8b4204               mov eax, dword ptr [edx + 4]
// 00407c70  8bce                 mov ecx, esi
// 00407c72  ffd0                 call eax
// 00407c74  8d4e08               lea ecx, [esi + 8]
// 00407c77  83caff               or edx, 0xffffffff
// 00407c7a  f00fc111             lock xadd dword ptr [ecx], edx
// 00407c7e  7509                 jne 0x407c89
// 00407c80  8b06                 mov eax, dword ptr [esi]
// 00407c82  8b5008               mov edx, dword ptr [eax + 8]
// 00407c85  8bce                 mov ecx, esi
// 00407c87  ffd2                 call edx
// 00407c89  8b742408             mov esi, dword ptr [esp + 8]
// 00407c8d  c644242400           mov byte ptr [esp + 0x24], 0
// 00407c92  85f6                 test esi, esi
// 00407c94  742a                 je 0x407cc0
// 00407c96  8d4604               lea eax, [esi + 4]
// 00407c99  83c9ff               or ecx, 0xffffffff
// 00407c9c  f00fc108             lock xadd dword ptr [eax], ecx
// 00407ca0  751e                 jne 0x407cc0
// 00407ca2  8b16                 mov edx, dword ptr [esi]
// 00407ca4  8b4204               mov eax, dword ptr [edx + 4]
// 00407ca7  8bce                 mov ecx, esi
// 00407ca9  ffd0                 call eax
// 00407cab  8d4e08               lea ecx, [esi + 8]
// 00407cae  83caff               or edx, 0xffffffff
// 00407cb1  f00fc111             lock xadd dword ptr [ecx], edx
// 00407cb5  7509                 jne 0x407cc0
// 00407cb7  8b06                 mov eax, dword ptr [esi]
// 00407cb9  8b5008               mov edx, dword ptr [eax + 8]
// 00407cbc  8bce                 mov ecx, esi
// 00407cbe  ffd2                 call edx
// 00407cc0  8b3518c39600         mov esi, dword ptr [0x96c318]
// 00407cc6  b9a04a9700           mov ecx, 0x974aa0
// 00407ccb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00407cd3  e808b41500           call 0x5630e0
// 00407cd8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00407cdc  8bc6                 mov eax, esi
// 00407cde  5e                   pop esi
// 00407cdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00407ce6  83c424               add esp, 0x24
// 00407ce9  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Lock {
    void acquire();
    void release();
};

struct Object {
    void initialize(Object*);
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
    Object* get() const;
};

struct Guard {
    Lock* lock;
    bool locked;
    Guard(Lock&);
    ~Guard();
};

extern Lock globalLock;
extern Object* globalObject;

Shared __cdecl makeObject();
Shared __cdecl getDependency();

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

__forceinline Object* Shared::get() const
{
    return object;
}

__forceinline Guard::Guard(Lock& value)
    : lock(&value)
{
    lock->acquire();
    locked = true;
}

__forceinline Guard::~Guard()
{
    if (locked)
        lock->release();
}

Object* __cdecl getObject()
{
    Guard guard(globalLock);
    if (!globalObject) {
        Shared object = makeObject();
        object.object->initialize(getDependency().get());
    }
    return globalObject;
}
