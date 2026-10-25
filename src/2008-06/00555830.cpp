// from server: 100% by king_originala
// roc 2008-06 00555830  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555830
//
// 00555830  6aff                 push -1
// 00555832  68d8dd7c00           push 0x7cddd8
// 00555837  64a100000000         mov eax, dword ptr fs:[0]
// 0055583d  50                   push eax
// 0055583e  64892500000000       mov dword ptr fs:[0], esp
// 00555845  83ec08               sub esp, 8
// 00555848  56                   push esi
// 00555849  8bf1                 mov esi, ecx
// 0055584b  57                   push edi
// 0055584c  8dbe80020000         lea edi, [esi + 0x280]
// 00555852  8bcf                 mov ecx, edi
// 00555854  897c2408             mov dword ptr [esp + 8], edi
// 00555858  e883f40300           call 0x594ce0
// 0055585d  c644240c01           mov byte ptr [esp + 0xc], 1
// 00555862  8b442420             mov eax, dword ptr [esp + 0x20]
// 00555866  50                   push eax
// 00555867  8bce                 mov ecx, esi
// 00555869  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00555871  e86afdffff           call 0x5555e0
// 00555876  8d4c2420             lea ecx, [esp + 0x20]
// 0055587a  51                   push ecx
// 0055587b  8d8e88020000         lea ecx, [esi + 0x288]
// 00555881  e85a04ebff           call 0x405ce0
// 00555886  8bcf                 mov ecx, edi
// 00555888  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00555890  e86bf40300           call 0x594d00
// 00555895  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555899  5f                   pop edi
// 0055589a  5e                   pop esi
// 0055589b  64890d00000000       mov dword ptr fs:[0], ecx
// 005558a2  83c414               add esp, 0x14
// 005558a5  c20400               ret 4

struct Mutex {
    void* handle;
    char kind;
    void acquire();
    void release();
};

struct Container {
    void update(const unsigned int* value);
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex& value);
    ~Guard();
};

inline Guard::Guard(Mutex& value) : mutex(&value), locked(false)
{
    mutex->acquire();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->release();
}

struct S {
    char padding[0x280];
    Mutex mutex;
    Container container;
    void prepare(unsigned int value);
    void f(unsigned int value);
};

void S::f(unsigned int value)
{
    Guard guard(mutex);
    prepare(value);
    container.update(&value);
}
