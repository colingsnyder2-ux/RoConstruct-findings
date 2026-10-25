// from server: 100% by king_originala
// roc 2008-06 005557c0  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005557c0
//
// 005557c0  6aff                 push -1
// 005557c2  68d8dd7c00           push 0x7cddd8
// 005557c7  64a100000000         mov eax, dword ptr fs:[0]
// 005557cd  50                   push eax
// 005557ce  64892500000000       mov dword ptr fs:[0], esp
// 005557d5  83ec08               sub esp, 8
// 005557d8  56                   push esi
// 005557d9  8bf1                 mov esi, ecx
// 005557db  57                   push edi
// 005557dc  8dbe80020000         lea edi, [esi + 0x280]
// 005557e2  8bcf                 mov ecx, edi
// 005557e4  897c2408             mov dword ptr [esp + 8], edi
// 005557e8  e8f3f40300           call 0x594ce0
// 005557ed  c644240c01           mov byte ptr [esp + 0xc], 1
// 005557f2  8d442420             lea eax, [esp + 0x20]
// 005557f6  50                   push eax
// 005557f7  8d8e88020000         lea ecx, [esi + 0x288]
// 005557fd  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00555805  e8c6feffff           call 0x5556d0
// 0055580a  8bcf                 mov ecx, edi
// 0055580c  c60001               mov byte ptr [eax], 1
// 0055580f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00555817  e8e4f40300           call 0x594d00
// 0055581c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555820  5f                   pop edi
// 00555821  5e                   pop esi
// 00555822  64890d00000000       mov dword ptr fs:[0], ecx
// 00555829  83c414               add esp, 0x14
// 0055582c  c20400               ret 4

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex& m);
    ~Guard();
};

inline Guard::Guard(Mutex& m) : mutex(&m), locked(false) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    if (locked)
        mutex->unlock();
}

struct Map {
    bool& lookup(const int& key);
};

struct S {
    char padding[0x280];
    Mutex mutex;
    Map map;
    void f(int key);
};

void S::f(int key) {
    Guard guard(mutex);
    map.lookup(key) = true;
}
