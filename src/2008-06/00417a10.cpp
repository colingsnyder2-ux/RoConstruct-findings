// from server: 100% by king_originala
// roc 2008-06 00417a10  unit: VCLuaFunction::?$CComContainedObject  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417a10
//
// 00417a10  6aff                 push -1
// 00417a12  6808a17c00           push 0x7ca108
// 00417a17  64a100000000         mov eax, dword ptr fs:[0]
// 00417a1d  50                   push eax
// 00417a1e  64892500000000       mov dword ptr fs:[0], esp
// 00417a25  83ec08               sub esp, 8
// 00417a28  56                   push esi
// 00417a29  8bf1                 mov esi, ecx
// 00417a2b  57                   push edi
// 00417a2c  8dbe30010000         lea edi, [esi + 0x130]
// 00417a32  8bcf                 mov ecx, edi
// 00417a34  897c2408             mov dword ptr [esp + 8], edi
// 00417a38  e853b61400           call 0x563090
// 00417a3d  c644240c01           mov byte ptr [esp + 0xc], 1
// 00417a42  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00417a48  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00417a50  85c9                 test ecx, ecx
// 00417a52  7422                 je 0x417a76
// 00417a54  6a00                 push 0
// 00417a56  e8198f2800           call 0x6a0974
// 00417a5b  8bc8                 mov ecx, eax
// 00417a5d  e8f2932800           call 0x6a0e54
// 00417a62  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00417a68  6a05                 push 5
// 00417a6a  e8058f2800           call 0x6a0974
// 00417a6f  8bc8                 mov ecx, eax
// 00417a71  e8f88e2800           call 0x6a096e
// 00417a76  8bcf                 mov ecx, edi
// 00417a78  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00417a80  e85bb61400           call 0x5630e0
// 00417a85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417a89  5f                   pop edi
// 00417a8a  5e                   pop esi
// 00417a8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00417a92  83c414               add esp, 0x14
// 00417a95  c3                   ret 

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;

    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;

    Guard(Mutex &m);
    ~Guard();
};

inline Guard::Guard(Mutex &m) : mutex(&m), locked(false)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct Item {
    void first();
    void second();
};

struct Owner {
    Item *get(int index);
};

struct S {
    unsigned char padding[0x130];
    Mutex mutex;
    Owner *owner;

    void f();
};

void S::f()
{
    Guard guard(mutex);
    if (owner) {
        owner->get(0)->first();
        owner->get(5)->second();
    }
}
