// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ReferenceCount {
    long reserved;
    volatile long count;
};

struct Payload;

struct Object {
    void apply(Payload*);
    void update(Payload*, void*);
};

struct SharedObject {
    Object* object;
    ReferenceCount* reference;
    SharedObject(const SharedObject&);
    ~SharedObject();
};

__forceinline SharedObject::SharedObject(const SharedObject& other)
    : object(other.object), reference(other.reference) {
    if (reference) {
        volatile long* count = &reference->count;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Context {
    void begin();
    void prepare();
    void finish();
};

struct Mutex {
    void lock();
    void unlock();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void setContext(Context*) = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual Mutex* getMutex() = 0;
};

struct LocalScope {
    char storage[20];
    LocalScope(SharedObject);
    ~LocalScope();
};

struct MutexScope {
    Mutex* mutex;
    explicit MutexScope(Mutex*);
    ~MutexScope();
};

__forceinline MutexScope::MutexScope(Mutex* value) : mutex(value) {
    mutex->lock();
}

__forceinline MutexScope::~MutexScope() {
    mutex->unlock();
}

struct CRobloxWnd {
    char reserved0[0x58];
    char state[0x18];
    SharedObject object;
    char reserved1[0x34];
    Context* context;
    Interface* interfaceObject;
    Payload* payload;
    void run(bool);
};

void CRobloxWnd::run(bool updateState) {
    context->begin();
    try {
        LocalScope scope(object);
        interfaceObject->setContext(context);
        MutexScope lock(interfaceObject->getMutex());
        object.object->apply(payload);
        if (updateState) {
            context->prepare();
            object.object->update(payload, state);
            context->finish();
        }
    } catch (...) {
        context->finish();
        throw;
    }
}
