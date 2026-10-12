// from server: 59% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" long __stdcall InterlockedDecrement(volatile long *);
extern "C" void __cdecl release_memory(void *);

struct Object {
    virtual void unused();
    virtual void release();
};

struct Link {
    Object *object;
    Link *next;
};

struct Control {
    virtual ~Control();
    volatile long references;
    Link *links;
};

struct Node {
    Node *next;
    unsigned char padding[32];
    Control *values[4];
};

struct Mutex {
    int value;
    unsigned char flag;
    int count;
    void lock();
    void unlock();
};

struct Container;
struct Proxy {
    Container *container;
};

struct Container {
    Proxy *proxy;
    unsigned char padding[20];
    Node *head;
    unsigned int size;
    Mutex mutex;
};

struct Iterator {
    Proxy *proxy;
    Node *node;

    void advance();

    Node *get() const
    {
        Container *owner;
        if (!proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = proxy->container;
        }
        if (node == owner->head)
            _invalid_parameter_noinfo();
        return node;
    }
};

struct Guard {
    Mutex *mutex;
    bool locked;

    Guard(Mutex *p) : mutex(p)
    {
        mutex->lock();
        locked = true;
    }

    ~Guard()
    {
        mutex->unlock();
    }
};

extern Container *global_container;
extern int initialization_flag;
extern void __cdecl initialize_container();
extern void __cdecl initialize_once(void (__cdecl *)(), int *);

void clear_unused_meshes()
{
    initialize_once(initialize_container, &initialization_flag);

    Container *container = global_container;
    Guard guard(&container->mutex);

    Iterator it;
    it.node = container->head->next;
    it.proxy = container->proxy;

    for (;;) {
        Node *end = container->head;
        Proxy *owner = container->proxy;

        if (!it.proxy || it.proxy != owner)
            _invalid_parameter_noinfo();

        if (it.node == end)
            break;

        for (int i = 0; i != 4; ++i) {
            if (it.get()->values[i] &&
                it.get()->values[i]->references == 1) {
                Control *control = it.get()->values[i];
                if (control) {
                    if (InterlockedDecrement(&control->references) == 0) {
                        Link *link = control->links;
                        while (link) {
                            link->object->release();
                            Link *old = link;
                            link = link->next;
                            release_memory(old);
                        }
                        delete it.node->values[i];
                    }
                    it.node->values[i] = 0;
                }
            }
        }

        it.advance();
    }
}
