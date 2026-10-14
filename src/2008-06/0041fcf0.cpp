// from server: 100% by colin
// roc 2008-06 0041fcf0  unit: CInsertObjectDialog  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fcf0
//
// 0041fcf0  6aff                 push -1
// 0041fcf2  6808767c00           push 0x7c7608
// 0041fcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0041fcfd  50                   push eax
// 0041fcfe  64892500000000       mov dword ptr fs:[0], esp
// 0041fd05  83ec18               sub esp, 0x18
// 0041fd08  56                   push esi
// 0041fd09  b9a04a9700           mov ecx, 0x974aa0
// 0041fd0e  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 0041fd16  e875331400           call 0x563090
// 0041fd1b  c644241001           mov byte ptr [esp + 0x10], 1
// 0041fd20  833d9cc3960000       cmp dword ptr [0x96c39c], 0
// 0041fd27  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0041fd2f  0f859b000000         jne 0x41fdd0
// 0041fd35  8d442404             lea eax, [esp + 4]
// 0041fd39  50                   push eax
// 0041fd3a  e8d1d6feff           call 0x40d410
// 0041fd3f  8d4c2418             lea ecx, [esp + 0x18]
// 0041fd43  51                   push ecx
// 0041fd44  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0041fd49  e8a2931400           call 0x5690f0
// 0041fd4e  83c408               add esp, 8
// 0041fd51  8b00                 mov eax, dword ptr [eax]
// 0041fd53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041fd57  50                   push eax
// 0041fd58  c644242802           mov byte ptr [esp + 0x28], 2
// 0041fd5d  e88eab1300           call 0x55a8f0
// 0041fd62  8b742418             mov esi, dword ptr [esp + 0x18]
// 0041fd66  c644242401           mov byte ptr [esp + 0x24], 1
// 0041fd6b  85f6                 test esi, esi
// 0041fd6d  742a                 je 0x41fd99
// 0041fd6f  8d5604               lea edx, [esi + 4]
// 0041fd72  83c8ff               or eax, 0xffffffff
// 0041fd75  f00fc102             lock xadd dword ptr [edx], eax
// 0041fd79  751e                 jne 0x41fd99
// 0041fd7b  8b16                 mov edx, dword ptr [esi]
// 0041fd7d  8b4204               mov eax, dword ptr [edx + 4]
// 0041fd80  8bce                 mov ecx, esi
// 0041fd82  ffd0                 call eax
// 0041fd84  8d4e08               lea ecx, [esi + 8]
// 0041fd87  83caff               or edx, 0xffffffff
// 0041fd8a  f00fc111             lock xadd dword ptr [ecx], edx
// 0041fd8e  7509                 jne 0x41fd99
// 0041fd90  8b06                 mov eax, dword ptr [esi]
// 0041fd92  8b5008               mov edx, dword ptr [eax + 8]
// 0041fd95  8bce                 mov ecx, esi
// 0041fd97  ffd2                 call edx
// 0041fd99  8b742408             mov esi, dword ptr [esp + 8]
// 0041fd9d  c644242400           mov byte ptr [esp + 0x24], 0
// 0041fda2  85f6                 test esi, esi
// 0041fda4  742a                 je 0x41fdd0
// 0041fda6  8d4604               lea eax, [esi + 4]
// 0041fda9  83c9ff               or ecx, 0xffffffff
// 0041fdac  f00fc108             lock xadd dword ptr [eax], ecx
// 0041fdb0  751e                 jne 0x41fdd0
// 0041fdb2  8b16                 mov edx, dword ptr [esi]
// 0041fdb4  8b4204               mov eax, dword ptr [edx + 4]
// 0041fdb7  8bce                 mov ecx, esi
// 0041fdb9  ffd0                 call eax
// 0041fdbb  8d4e08               lea ecx, [esi + 8]
// 0041fdbe  83caff               or edx, 0xffffffff
// 0041fdc1  f00fc111             lock xadd dword ptr [ecx], edx
// 0041fdc5  7509                 jne 0x41fdd0
// 0041fdc7  8b06                 mov eax, dword ptr [esi]
// 0041fdc9  8b5008               mov edx, dword ptr [eax + 8]
// 0041fdcc  8bce                 mov ecx, esi
// 0041fdce  ffd2                 call edx
// 0041fdd0  8b359cc39600         mov esi, dword ptr [0x96c39c]
// 0041fdd6  b9a04a9700           mov ecx, 0x974aa0
// 0041fddb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0041fde3  e8f8321400           call 0x5630e0
// 0041fde8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041fdec  8bc6                 mov eax, esi
// 0041fdee  5e                   pop esi
// 0041fdef  64890d00000000       mov dword ptr fs:[0], ecx
// 0041fdf6  83c424               add esp, 0x24
// 0041fdf9  c3                   ret 

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
