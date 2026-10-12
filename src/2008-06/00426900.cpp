// from server: 58% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void *object;
    RefCount *count;

    Shared() : object(0), count(0) {}
    ~Shared()
    {
        if (count) {
            if (_InterlockedExchangeAdd(&count->strong, -1) == 1) {
                count->dispose();
                if (_InterlockedExchangeAdd(&count->weak, -1) == 1)
                    count->destroy();
            }
        }
    }
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

    Guard(Mutex& m) : mutex(&m)
    {
        mutex->lock();
        locked = true;
    }

    ~Guard()
    {
        if (locked)
            mutex->unlock();
    }

    void release()
    {
        mutex->unlock();
        locked = false;
    }
};

struct List;

struct Proxy {
    List *owner;
};

struct Node {
    Node *next;
    Node *previous;
    void *proxy;
    void *object;
    RefCount *count;
};

struct Iterator {
    Proxy *proxy;
    Node *node;
};

struct List {
    Proxy *proxy;
    char padding[20];
    Node *head;

    Iterator erase(Iterator position);
};

struct CSelectionTreeCtrl {
    char padding[0xc4];
    Mutex mutex;
    char gap[0x14];
    List list;

    void process(Shared *);
    void f();
};

void CSelectionTreeCtrl::f()
{
    for (int i = 0; i < 10; ++i) {
        Shared value;
        Guard guard(mutex);

        Iterator first;
        first.proxy = list.proxy;
        first.node = list.head->next;

        Iterator last;
        last.proxy = list.proxy;
        last.node = list.head;

        if (!first.proxy || first.proxy != last.proxy)
            _invalid_parameter_noinfo();

        if (first.node == last.node)
            return;

        List *owner;
        if (!first.proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = first.proxy->owner;
        }

        if (first.node == owner->head)
            _invalid_parameter_noinfo();

        value.object = first.node->object;
        if (first.node->count) {
            _InterlockedExchangeAdd(&first.node->count->strong, 1);
            value.count = first.node->count;
        }

        list.erase(first);
        guard.release();
        process(&value);
    }
}
