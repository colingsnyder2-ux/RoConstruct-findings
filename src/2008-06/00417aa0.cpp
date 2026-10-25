// from server: 100% by king_originala
// roc 2008-06 00417aa0  unit: VCLuaFunction::?$CComContainedObject  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417aa0
//
// 00417aa0  6aff                 push -1
// 00417aa2  6808a17c00           push 0x7ca108
// 00417aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00417aad  50                   push eax
// 00417aae  64892500000000       mov dword ptr fs:[0], esp
// 00417ab5  83ec08               sub esp, 8
// 00417ab8  56                   push esi
// 00417ab9  8bf1                 mov esi, ecx
// 00417abb  57                   push edi
// 00417abc  8dbe30010000         lea edi, [esi + 0x130]
// 00417ac2  8bcf                 mov ecx, edi
// 00417ac4  897c2408             mov dword ptr [esp + 8], edi
// 00417ac8  e8c3b51400           call 0x563090
// 00417acd  c644240c01           mov byte ptr [esp + 0xc], 1
// 00417ad2  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00417ad8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00417ae0  85c9                 test ecx, ecx
// 00417ae2  741e                 je 0x417b02
// 00417ae4  8b442424             mov eax, dword ptr [esp + 0x24]
// 00417ae8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00417aec  6a06                 push 6
// 00417aee  50                   push eax
// 00417aef  52                   push edx
// 00417af0  6a00                 push 0
// 00417af2  6a00                 push 0
// 00417af4  6a00                 push 0
// 00417af6  e8798e2800           call 0x6a0974
// 00417afb  8bc8                 mov ecx, eax
// 00417afd  e8448f2800           call 0x6a0a46
// 00417b02  8bcf                 mov ecx, edi
// 00417b04  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00417b0c  e8cfb51400           call 0x5630e0
// 00417b11  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417b15  5f                   pop edi
// 00417b16  5e                   pop esi
// 00417b17  64890d00000000       mov dword ptr fs:[0], ecx
// 00417b1e  83c414               add esp, 0x14
// 00417b21  c20800               ret 8

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Result {
    void finish();
};

struct Callable {
    Result *invoke(int, int, int, int, int, int);
};

struct LockGuard {
    Mutex *mutex;
    bool locked;

    LockGuard(Mutex &m) : mutex(&m), locked(false) {
        mutex->lock();
        locked = true;
    }

    ~LockGuard() {
        if (locked)
            mutex->unlock();
    }
};

struct S {
    char padding[0x130];
    Mutex mutex;
    Callable *callable;
    void f(int a, int b);
};

void S::f(int a, int b)
{
    LockGuard guard(mutex);
    if (callable)
        callable->invoke(0, 0, 0, a, b, 6)->finish();
}
