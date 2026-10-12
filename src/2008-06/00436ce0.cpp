// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern const unsigned long primaryTable[];
extern const unsigned long secondaryTable[];
extern void __cdecl release(void *);

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Mutex {
    void *object;
    bool criticalSection;
    void lock();
    void unlock();
    ~Mutex();
};

struct Service {
    unsigned char padding[40];
    Mutex mutex;
    void detach(void *);
};

struct Shared {
    Service *pointer;
    RefCount *count;
    Service &operator*() const;
    void detach(void *) const;
    ~Shared();
};

__forceinline Service &Shared::operator*() const
{
    return *pointer;
}

__forceinline void Shared::detach(void *p) const
{
    if (pointer)
        pointer->detach(p);
}

__forceinline Shared::~Shared()
{
    if (count) {
        RefCount *p = count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

extern Shared __cdecl getService();

struct Guard {
    Mutex *mutex;
    bool locked;
    Guard(Mutex &);
    ~Guard();
};

__forceinline Guard::Guard(Mutex &m) : mutex(&m)
{
    mutex->lock();
    locked = true;
}

__forceinline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct Storage {
    char **slots;
    unsigned char padding[28];
    ~Storage();
};

__forceinline Storage::~Storage()
{
    char **p = slots;
    release(p);
}

struct Container : Storage {
    void clear();
    ~Container();
};

__forceinline Container::~Container()
{
    clear();
}

struct Base {
    const unsigned long *table;
    unsigned char padding[284];
    ~Base();
};

struct COutputView : Base {
    const unsigned long *secondary;
    Container contents;
    Mutex mutex;
    ~COutputView();
};

COutputView::~COutputView()
{
    table = primaryTable;
    secondary = secondaryTable;
    Guard guard((*getService()).mutex);
    getService().detach(&secondary);
}
