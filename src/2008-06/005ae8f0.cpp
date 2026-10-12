// from server: 87% by king_originala
typedef unsigned int size_t;

extern void* __cdecl operator new(size_t);
extern void __cdecl operator delete(void*);
extern double __cdecl clockSeconds();

struct Mutex {
    void* handle;
    unsigned char kind;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex*);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p), locked(false) {
    mutex->lock();
    locked = true;
}

inline Lock::~Lock() {
    if (locked)
        mutex->unlock();
}

struct ScriptContext;

struct Ref {
    void* object;
    void* control;
    Ref(const Ref&);
};

struct Bound {
    unsigned char data[16];
    Bound(const Bound&);
};

extern Ref __cdecl getReference(ScriptContext*);
extern Bound __cdecl bindTask(void (__cdecl *)(ScriptContext*), int, Ref);
extern void __cdecl timeoutTask(ScriptContext*);
extern void __cdecl interruptTask(void*);
extern void __cdecl setInterrupt(void*, void (__cdecl *)(void*), int, int);

struct Callable {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    void* invoker;
    unsigned char data[24];

    Callable(Bound, int);
    ~Callable();
};

inline Callable::~Callable() {
    if (manager) {
        Manager f = *manager;
        if (f)
            f(data, data, 1);
        manager = 0;
    }
}

extern Callable __cdecl nameTask(const Callable*, const char*, int);

struct Thread {
    unsigned char data[12];
    Thread(const Callable&);
    ~Thread();
};

struct Owner {
    Thread* pointer;
    explicit Owner(Thread*);
    ~Owner();
    void reset(Thread*);
};

inline Owner::Owner(Thread* p) : pointer(p) {}

inline Owner::~Owner() {
    if (pointer)
        delete pointer;
}

inline void Owner::reset(Thread* p) {
    Owner replacement(p);
    Thread* old = pointer;
    pointer = replacement.pointer;
    replacement.pointer = old;
}

struct Event {
    unsigned char data[8];
    void signal();
};

struct ScriptContext {
    unsigned char pad0[0x138];
    void* state;
    unsigned char pad13c[0x7c];
    double timeout;
    double deadline;
    unsigned char pad1c8[4];
    Owner thread;
    Mutex mutex;
    Event event;
    void setTimeout(double);
};

void ScriptContext::setTimeout(double value) {
    Lock guard(&mutex);
    timeout = value;
    deadline = value != 0.0 ? clockSeconds() + timeout : 0.0;

    if (timeout != 0.0) {
        if (!thread.pointer) {
            thread.reset(new Thread(nameTask(
                &Callable(bindTask(timeoutTask, 0, getReference(this)), 0),
                "ScriptContext Timeout", 0)));
            if (state)
                setInterrupt(state, interruptTask, 8, 1000);
        } else {
            event.signal();
        }
    }
}
