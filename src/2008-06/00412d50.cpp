// from server: 100% by king_originala
// roc 2008-06 00412d50  unit: CChildFrame  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412d50
//
// 00412d50  6aff                 push -1
// 00412d52  6808767c00           push 0x7c7608
// 00412d57  64a100000000         mov eax, dword ptr fs:[0]
// 00412d5d  50                   push eax
// 00412d5e  64892500000000       mov dword ptr fs:[0], esp
// 00412d65  83ec18               sub esp, 0x18
// 00412d68  56                   push esi
// 00412d69  b9a04a9700           mov ecx, 0x974aa0
// 00412d6e  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 00412d76  e815031500           call 0x563090
// 00412d7b  c644241001           mov byte ptr [esp + 0x10], 1
// 00412d80  833deccb960000       cmp dword ptr [0x96cbec], 0
// 00412d87  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00412d8f  0f859b000000         jne 0x412e30
// 00412d95  8d442404             lea eax, [esp + 4]
// 00412d99  50                   push eax
// 00412d9a  e83161ffff           call 0x408ed0
// 00412d9f  8d4c2418             lea ecx, [esp + 0x18]
// 00412da3  51                   push ecx
// 00412da4  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00412da9  e842631500           call 0x5690f0
// 00412dae  83c408               add esp, 8
// 00412db1  8b00                 mov eax, dword ptr [eax]
// 00412db3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00412db7  50                   push eax
// 00412db8  c644242802           mov byte ptr [esp + 0x28], 2
// 00412dbd  e82e7b1400           call 0x55a8f0
// 00412dc2  8b742418             mov esi, dword ptr [esp + 0x18]
// 00412dc6  c644242401           mov byte ptr [esp + 0x24], 1
// 00412dcb  85f6                 test esi, esi
// 00412dcd  742a                 je 0x412df9
// 00412dcf  8d5604               lea edx, [esi + 4]
// 00412dd2  83c8ff               or eax, 0xffffffff
// 00412dd5  f00fc102             lock xadd dword ptr [edx], eax
// 00412dd9  751e                 jne 0x412df9
// 00412ddb  8b16                 mov edx, dword ptr [esi]
// 00412ddd  8b4204               mov eax, dword ptr [edx + 4]
// 00412de0  8bce                 mov ecx, esi
// 00412de2  ffd0                 call eax
// 00412de4  8d4e08               lea ecx, [esi + 8]
// 00412de7  83caff               or edx, 0xffffffff
// 00412dea  f00fc111             lock xadd dword ptr [ecx], edx
// 00412dee  7509                 jne 0x412df9
// 00412df0  8b06                 mov eax, dword ptr [esi]
// 00412df2  8b5008               mov edx, dword ptr [eax + 8]
// 00412df5  8bce                 mov ecx, esi
// 00412df7  ffd2                 call edx
// 00412df9  8b742408             mov esi, dword ptr [esp + 8]
// 00412dfd  c644242400           mov byte ptr [esp + 0x24], 0
// 00412e02  85f6                 test esi, esi
// 00412e04  742a                 je 0x412e30
// 00412e06  8d4604               lea eax, [esi + 4]
// 00412e09  83c9ff               or ecx, 0xffffffff
// 00412e0c  f00fc108             lock xadd dword ptr [eax], ecx
// 00412e10  751e                 jne 0x412e30
// 00412e12  8b16                 mov edx, dword ptr [esi]
// 00412e14  8b4204               mov eax, dword ptr [edx + 4]
// 00412e17  8bce                 mov ecx, esi
// 00412e19  ffd0                 call eax
// 00412e1b  8d4e08               lea ecx, [esi + 8]
// 00412e1e  83caff               or edx, 0xffffffff
// 00412e21  f00fc111             lock xadd dword ptr [ecx], edx
// 00412e25  7509                 jne 0x412e30
// 00412e27  8b06                 mov eax, dword ptr [esi]
// 00412e29  8b5008               mov edx, dword ptr [eax + 8]
// 00412e2c  8bce                 mov ecx, esi
// 00412e2e  ffd2                 call edx
// 00412e30  8b35eccb9600         mov esi, dword ptr [0x96cbec]
// 00412e36  b9a04a9700           mov ecx, 0x974aa0
// 00412e3b  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00412e43  e898021500           call 0x5630e0
// 00412e48  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00412e4c  8bc6                 mov eax, esi
// 00412e4e  5e                   pop esi
// 00412e4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00412e56  83c424               add esp, 0x24
// 00412e59  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

template<class T>
struct Shared
{
    T* object;
    Control* control;
    ~Shared();
    T* get() const;
};

template<class T>
inline Shared<T>::~Shared()
{
    if (control)
        control->release();
}

template<class T>
inline T* Shared<T>::get() const
{
    return object;
}

struct Mutex
{
    void* handle;
    bool criticalSection;
    unsigned int count;
    void sub_563090();
    void sub_5630e0();
};

struct Lock
{
    Mutex* mutex;
    bool locked;
    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(&m)
{
    mutex->sub_563090();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->sub_5630e0();
}

struct Object;

struct Holder
{
    void sub_55a8f0(Object*);
};

extern Mutex globalMutex;
extern Object* globalObject;

Shared<Holder> __cdecl sub_408ed0();
Shared<Object> __cdecl sub_5690f0();

Object* __cdecl sub_412d50()
{
    Lock lock(globalMutex);
    if (globalObject == 0)
    {
        Shared<Holder> holder = sub_408ed0();
        holder.object->sub_55a8f0(sub_5690f0().get());
    }
    return globalObject;
}
