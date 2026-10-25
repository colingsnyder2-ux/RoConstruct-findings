// from server: 100% by king_originala
// roc 2008-06 00555900  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555900
//
// 00555900  6aff                 push -1
// 00555902  6830df7b00           push 0x7bdf30
// 00555907  64a100000000         mov eax, dword ptr fs:[0]
// 0055590d  50                   push eax
// 0055590e  64892500000000       mov dword ptr fs:[0], esp
// 00555915  83ec08               sub esp, 8
// 00555918  56                   push esi
// 00555919  57                   push edi
// 0055591a  8bf1                 mov esi, ecx
// 0055591c  8dbeac020000         lea edi, [esi + 0x2ac]
// 00555922  8bcf                 mov ecx, edi
// 00555924  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055592c  897c2408             mov dword ptr [esp + 8], edi
// 00555930  e8abf30300           call 0x594ce0
// 00555935  c644240c01           mov byte ptr [esp + 0xc], 1
// 0055593a  8d442420             lea eax, [esp + 0x20]
// 0055593e  50                   push eax
// 0055593f  8d8eb4020000         lea ecx, [esi + 0x2b4]
// 00555945  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0055594a  e89141ecff           call 0x419ae0
// 0055594f  8bcf                 mov ecx, edi
// 00555951  c644241800           mov byte ptr [esp + 0x18], 0
// 00555956  e8a5f30300           call 0x594d00
// 0055595b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055595f  5f                   pop edi
// 00555960  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00555968  5e                   pop esi
// 00555969  85c0                 test eax, eax
// 0055596b  7415                 je 0x555982
// 0055596d  8b00                 mov eax, dword ptr [eax]
// 0055596f  85c0                 test eax, eax
// 00555971  740f                 je 0x555982
// 00555973  8d4c2420             lea ecx, [esp + 0x20]
// 00555977  6a01                 push 1
// 00555979  51                   push ecx
// 0055597a  8bd1                 mov edx, ecx
// 0055597c  52                   push edx
// 0055597d  ffd0                 call eax
// 0055597f  83c40c               add esp, 0xc
// 00555982  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555986  64890d00000000       mov dword ptr fs:[0], ecx
// 0055598d  83c414               add esp, 0x14
// 00555990  c22000               ret 0x20

struct Function;

typedef void (__cdecl *Manager)(void*, void*, int);

struct FunctionTable {
    Manager manager;
};

struct Function {
    FunctionTable* table;
    unsigned int reserved;
    unsigned int buffer[6];
    ~Function();
};

inline Function::~Function()
{
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(buffer, buffer, 1);
    }
}

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex& value);
    ~Lock();
};

inline Lock::Lock(Mutex& value) : mutex(&value)
{
    mutex->lock();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

struct Queue {
    unsigned int reserved[4];
    void** blocks;
    unsigned int capacity;
    unsigned int start;
    unsigned int count;
    void append(const void* value);
};

struct S {
    unsigned char reserved[0x2ac];
    Mutex mutex;
    Queue queue;
    void f(Function value);
};

void S::f(Function value)
{
    Lock lock(mutex);
    queue.append(&value);
}
