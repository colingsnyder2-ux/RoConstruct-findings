// from server: 100% by king_originala
// roc 2008-06 0049e890  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e890
//
// 0049e890  6aff                 push -1
// 0049e892  6808767c00           push 0x7c7608
// 0049e897  64a100000000         mov eax, dword ptr fs:[0]
// 0049e89d  50                   push eax
// 0049e89e  64892500000000       mov dword ptr fs:[0], esp
// 0049e8a5  83ec18               sub esp, 0x18
// 0049e8a8  56                   push esi
// 0049e8a9  b9a04a9700           mov ecx, 0x974aa0
// 0049e8ae  c744240ca04a9700     mov dword ptr [esp + 0xc], 0x974aa0
// 0049e8b6  e8d5470c00           call 0x563090
// 0049e8bb  c644241001           mov byte ptr [esp + 0x10], 1
// 0049e8c0  833dd006970000       cmp dword ptr [0x9706d0], 0
// 0049e8c7  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0049e8cf  0f859b000000         jne 0x49e970
// 0049e8d5  8d442404             lea eax, [esp + 4]
// 0049e8d9  50                   push eax
// 0049e8da  e831ffffff           call 0x49e810
// 0049e8df  8d4c2418             lea ecx, [esp + 0x18]
// 0049e8e3  51                   push ecx
// 0049e8e4  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0049e8e9  e802a80c00           call 0x5690f0
// 0049e8ee  83c408               add esp, 8
// 0049e8f1  8b00                 mov eax, dword ptr [eax]
// 0049e8f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049e8f7  50                   push eax
// 0049e8f8  c644242802           mov byte ptr [esp + 0x28], 2
// 0049e8fd  e8eebf0b00           call 0x55a8f0
// 0049e902  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049e906  c644242401           mov byte ptr [esp + 0x24], 1
// 0049e90b  85f6                 test esi, esi
// 0049e90d  742a                 je 0x49e939
// 0049e90f  8d5604               lea edx, [esi + 4]
// 0049e912  83c8ff               or eax, 0xffffffff
// 0049e915  f00fc102             lock xadd dword ptr [edx], eax
// 0049e919  751e                 jne 0x49e939
// 0049e91b  8b16                 mov edx, dword ptr [esi]
// 0049e91d  8b4204               mov eax, dword ptr [edx + 4]
// 0049e920  8bce                 mov ecx, esi
// 0049e922  ffd0                 call eax
// 0049e924  8d4e08               lea ecx, [esi + 8]
// 0049e927  83caff               or edx, 0xffffffff
// 0049e92a  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e92e  7509                 jne 0x49e939
// 0049e930  8b06                 mov eax, dword ptr [esi]
// 0049e932  8b5008               mov edx, dword ptr [eax + 8]
// 0049e935  8bce                 mov ecx, esi
// 0049e937  ffd2                 call edx
// 0049e939  8b742408             mov esi, dword ptr [esp + 8]
// 0049e93d  c644242400           mov byte ptr [esp + 0x24], 0
// 0049e942  85f6                 test esi, esi
// 0049e944  742a                 je 0x49e970
// 0049e946  8d4604               lea eax, [esi + 4]
// 0049e949  83c9ff               or ecx, 0xffffffff
// 0049e94c  f00fc108             lock xadd dword ptr [eax], ecx
// 0049e950  751e                 jne 0x49e970
// 0049e952  8b16                 mov edx, dword ptr [esi]
// 0049e954  8b4204               mov eax, dword ptr [edx + 4]
// 0049e957  8bce                 mov ecx, esi
// 0049e959  ffd0                 call eax
// 0049e95b  8d4e08               lea ecx, [esi + 8]
// 0049e95e  83caff               or edx, 0xffffffff
// 0049e961  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e965  7509                 jne 0x49e970
// 0049e967  8b06                 mov eax, dword ptr [esi]
// 0049e969  8b5008               mov edx, dword ptr [eax + 8]
// 0049e96c  8bce                 mov ecx, esi
// 0049e96e  ffd2                 call edx
// 0049e970  8b35d0069700         mov esi, dword ptr [0x9706d0]
// 0049e976  b9a04a9700           mov ecx, 0x974aa0
// 0049e97b  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049e983  e858470c00           call 0x5630e0
// 0049e988  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049e98c  8bc6                 mov eax, esi
// 0049e98e  5e                   pop esi
// 0049e98f  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e996  83c424               add esp, 0x24
// 0049e999  c3                   ret 

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Mutex {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

extern Mutex globalMutex;
extern void* globalInstance;

struct Guard {
    Mutex* mutex;
    bool locked;
    explicit Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Object {
    void initialize(Object*);
};

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
    Object* get() const;
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

inline Object* Shared::get() const
{
    return object;
}

Shared __cdecl makeFirst();
Shared __cdecl makeSecond();

void* __cdecl getInstance()
{
    Guard guard(&globalMutex);
    if (!globalInstance) {
        Shared first = makeFirst();
        first.object->initialize(makeSecond().get());
    }
    return globalInstance;
}
