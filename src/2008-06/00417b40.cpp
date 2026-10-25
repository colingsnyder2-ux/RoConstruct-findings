// from server: 100% by king_originala
// roc 2008-06 00417b40  unit: VCLuaFunction::?$CComContainedObject  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417b40
//
// 00417b40  6aff                 push -1
// 00417b42  68b0db7b00           push 0x7bdbb0
// 00417b47  64a100000000         mov eax, dword ptr fs:[0]
// 00417b4d  50                   push eax
// 00417b4e  64892500000000       mov dword ptr fs:[0], esp
// 00417b55  83ec08               sub esp, 8
// 00417b58  56                   push esi
// 00417b59  57                   push edi
// 00417b5a  8bf1                 mov esi, ecx
// 00417b5c  8dbe30010000         lea edi, [esi + 0x130]
// 00417b62  8bcf                 mov ecx, edi
// 00417b64  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00417b6c  897c2408             mov dword ptr [esp + 8], edi
// 00417b70  e81bb51400           call 0x563090
// 00417b75  b001                 mov al, 1
// 00417b77  8844240c             mov byte ptr [esp + 0xc], al
// 00417b7b  8bb63c010000         mov esi, dword ptr [esi + 0x13c]
// 00417b81  88442418             mov byte ptr [esp + 0x18], al
// 00417b85  85f6                 test esi, esi
// 00417b87  7413                 je 0x417b9c
// 00417b89  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00417b8f  8d442420             lea eax, [esp + 0x20]
// 00417b93  50                   push eax
// 00417b94  83c114               add ecx, 0x14
// 00417b97  e874c71700           call 0x594310
// 00417b9c  8bcf                 mov ecx, edi
// 00417b9e  c644241800           mov byte ptr [esp + 0x18], 0
// 00417ba3  e838b51400           call 0x5630e0
// 00417ba8  8d4c2420             lea ecx, [esp + 0x20]
// 00417bac  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00417bb4  e8b7c81700           call 0x594470
// 00417bb9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00417bbd  5f                   pop edi
// 00417bbe  5e                   pop esi
// 00417bbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00417bc6  83c414               add esp, 0x14
// 00417bc9  c22400               ret 0x24

struct Value {
    unsigned char padding[24];
    void *context;
    int reserved;
    int value;

    Value &assign(const Value &other);
    ~Value();
};

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

struct Destination {
    unsigned char padding[0x14];
    Value value;
};

struct Owner {
    unsigned char padding[0xfc];
    Destination *destination;
};

struct S {
    unsigned char padding[0x130];
    Mutex mutex;
    Owner *owner;

    void f(Value value);
};

void S::f(Value value)
{
    Guard guard(mutex);
    Owner *p = owner;
    if (p)
        p->destination->value.assign(value);
}
