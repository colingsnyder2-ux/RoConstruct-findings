// from server: 75% by colin
// from server: 73% by king_originala
// roc 2008-06 00595e40  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595e40
//
// 00595e40  6aff                 push -1
// 00595e42  6872217d00           push 0x7d2172
// 00595e47  64a100000000         mov eax, dword ptr fs:[0]
// 00595e4d  50                   push eax
// 00595e4e  64892500000000       mov dword ptr fs:[0], esp
// 00595e55  83ec50               sub esp, 0x50
// 00595e58  53                   push ebx
// 00595e59  55                   push ebp
// 00595e5a  56                   push esi
// 00595e5b  57                   push edi
// 00595e5c  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00595e60  33db                 xor ebx, ebx
// 00595e62  895c2468             mov dword ptr [esp + 0x68], ebx
// 00595e66  8b442470             mov eax, dword ptr [esp + 0x70]
// 00595e6a  385820               cmp byte ptr [eax + 0x20], bl
// 00595e6d  7573                 jne 0x595ee2
// 00595e6f  8b4500               mov eax, dword ptr [ebp]
// 00595e72  3bc3                 cmp eax, ebx
// 00595e74  0f84b5000000         je 0x595f2f
// 00595e7a  8b5004               mov edx, dword ptr [eax + 4]
// 00595e7d  8d4d08               lea ecx, [ebp + 8]
// 00595e80  51                   push ecx
// 00595e81  ffd2                 call edx
// 00595e83  83c404               add esp, 4
// 00595e86  83f801               cmp eax, 1
// 00595e89  74db                 je 0x595e66
// 00595e8b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00595e8f  8bf1                 mov esi, ecx
// 00595e91  89742414             mov dword ptr [esp + 0x14], esi
// 00595e95  e846eeffff           call 0x594ce0
// 00595e9a  c644241801           mov byte ptr [esp + 0x18], 1
// 00595e9f  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00595ea3  83c708               add edi, 8
// 00595ea6  8bcf                 mov ecx, edi
// 00595ea8  c644246806           mov byte ptr [esp + 0x68], 6
// 00595ead  e81ebf0500           call 0x5f1dd0
// 00595eb2  8d442410             lea eax, [esp + 0x10]
// 00595eb6  50                   push eax
// 00595eb7  8bce                 mov ecx, esi
// 00595eb9  e882eeffff           call 0x594d40
// 00595ebe  8bcf                 mov ecx, edi
// 00595ec0  e82bbf0500           call 0x5f1df0
// 00595ec5  8d4c2410             lea ecx, [esp + 0x10]
// 00595ec9  51                   push ecx
// 00595eca  8bce                 mov ecx, esi
// 00595ecc  e84feeffff           call 0x594d20
// 00595ed1  8bce                 mov ecx, esi
// 00595ed3  885c2468             mov byte ptr [esp + 0x68], bl
// 00595ed7  e824eeffff           call 0x594d00
// 00595edc  885c2418             mov byte ptr [esp + 0x18], bl
// 00595ee0  eb84                 jmp 0x595e66
// 00595ee2  8b742474             mov esi, dword ptr [esp + 0x74]
// 00595ee6  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00595eee  3bf3                 cmp esi, ebx
// 00595ef0  742a                 je 0x595f1c
// 00595ef2  8d5604               lea edx, [esi + 4]
// 00595ef5  83c8ff               or eax, 0xffffffff
// 00595ef8  f00fc102             lock xadd dword ptr [edx], eax
// 00595efc  751e                 jne 0x595f1c
// 00595efe  8b16                 mov edx, dword ptr [esi]
// 00595f00  8b4204               mov eax, dword ptr [edx + 4]
// 00595f03  8bce                 mov ecx, esi
// 00595f05  ffd0                 call eax
// 00595f07  8d4e08               lea ecx, [esi + 8]
// 00595f0a  83caff               or edx, 0xffffffff
// 00595f0d  f00fc111             lock xadd dword ptr [ecx], edx
// 00595f11  7509                 jne 0x595f1c
// 00595f13  8b06                 mov eax, dword ptr [esi]
// 00595f15  8b5008               mov edx, dword ptr [eax + 8]
// 00595f18  8bce                 mov ecx, esi
// 00595f1a  ffd2                 call edx
// 00595f1c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00595f20  5f                   pop edi
// 00595f21  5e                   pop esi
// 00595f22  5d                   pop ebp
// 00595f23  5b                   pop ebx
// 00595f24  64890d00000000       mov dword ptr fs:[0], ecx
// 00595f2b  83c45c               add esp, 0x5c
// 00595f2e  c3                   ret 
// 00595f2f  68e4b88000           push 0x80b8e4
// 00595f34  8d4c2420             lea ecx, [esp + 0x20]
// 00595f38  ff1558248000         call dword ptr [0x802458]
// 00595f3e  8d4c2438             lea ecx, [esp + 0x38]
// 00595f42  c644246801           mov byte ptr [esp + 0x68], 1
// 00595f47  ff1598288000         call dword ptr [0x802898]
// 00595f4d  8d44241c             lea eax, [esp + 0x1c]
// 00595f51  50                   push eax
// 00595f52  8d4c2448             lea ecx, [esp + 0x48]
// 00595f56  c644246c02           mov byte ptr [esp + 0x6c], 2
// 00595f5b  c744243cf8b78000     mov dword ptr [esp + 0x3c], 0x80b7f8
// 00595f63  ff155c248000         call dword ptr [0x80245c]
// 00595f69  8d4c241c             lea ecx, [esp + 0x1c]
// 00595f6d  c644246804           mov byte ptr [esp + 0x68], 4
// 00595f72  ff1568248000         call dword ptr [0x802468]
// 00595f78  c7442438dcb88000     mov dword ptr [esp + 0x38], 0x80b8dc
// 00595f80  8d4c2438             lea ecx, [esp + 0x38]
// 00595f84  51                   push ecx
// 00595f85  c644246c05           mov byte ptr [esp + 0x6c], 5
// 00595f8a  e87145e7ff           call 0x40a500

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std {
struct string {
    void* proxy;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;

    string(const char*);
    string(const string&);
    ~string();
};

struct exception {
    char* message;
    bool owned;

    exception();
    virtual ~exception();
    virtual const char* what() const;
};

struct __declspec(dllimport) runtime_error : exception {
    string text;

    runtime_error(const string&);
    virtual ~runtime_error();
    virtual const char* what() const;
};
}

__forceinline std::runtime_error::runtime_error(const std::string& value)
    : exception(), text(value) {}

struct BadFunctionCall : std::runtime_error {
    BadFunctionCall();
    virtual ~BadFunctionCall();
};

__forceinline BadFunctionCall::BadFunctionCall()
    : std::runtime_error(std::string("call to empty boost::function")) {}

__declspec(noreturn) void __cdecl raise(const BadFunctionCall&);

struct Counted {
    volatile long strong;
    volatile long weak;

    virtual ~Counted();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
};

struct Mutex;

struct Lock {
    unsigned unused;
    Mutex* mutex;
    bool locked;

    Lock(Mutex&);
    ~Lock();
};

struct Mutex {
    void* handle;
    char kind;

    void acquire();
    void release();
    void reacquire(Lock*);
    void wait(Lock*);
};

struct Condition {
    char storage[24];

    void acquire();
    void release();
};

struct State {
    Mutex mutex;
    Condition condition;
    bool stopped;
};

struct SharedState {
    State* pointer;
    Counted* count;

    ~SharedState();
};

struct FunctionTable {
    void* manager;
    int (__cdecl *invoke)(const void*);
};

struct Function {
    FunctionTable* table;
    unsigned padding;
    char storage[24];
};

__forceinline Lock::Lock(Mutex& value) : mutex(&value) {
    value.acquire();
    locked = true;
}

__forceinline Lock::~Lock() {
    if (locked) {
        mutex->release();
        locked = false;
    }
}

__forceinline SharedState::~SharedState() {
    Counted* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

void __cdecl worker(SharedState state, const Function& function)
{
    for (;;) {
        if (state.pointer->stopped)
            break;

        FunctionTable* table = function.table;
        if (!table) {
            BadFunctionCall error;
            raise(error);
        }

        if (table->invoke(function.storage) == 1)
            continue;

        Mutex& mutex = state.pointer->mutex;
        Lock lock(mutex);
        Condition& condition = state.pointer->condition;
        condition.acquire();
        mutex.wait(&lock);
        condition.release();
        mutex.reacquire(&lock);
        mutex.release();
        lock.locked = false;
    }
}
