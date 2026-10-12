// from server: 73% by king_originala
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

struct runtime_error : exception {
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
