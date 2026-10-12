// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control *control;

    Reference(const Reference &other);
    Reference &operator=(const Reference &other);
    ~Reference();
};

__forceinline Reference::Reference(const Reference &other)
    : control(other.control)
{
    if (control) {
        volatile long *count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Reference::~Reference()
{
    if (control) {
        Control *p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Listener {
    unsigned long value;
};

struct Signal {
    void connect(Listener *);
};

struct FirstSource {
    char padding[0x344];
    Signal signal;
};

struct SecondSource {
    char padding[0x130];
    Signal signal;
};

struct Main {
    char padding[0x204];
    FirstSource *source;

    void *getValue();
    SecondSource *getSource();
};

struct Shared {
    Main *value;
    Reference reference;
};

struct Guard {
    char storage[12];

    Guard(Shared);
    ~Guard();
};

extern Shared __cdecl makeFirst(int);
extern Shared __cdecl makeSecond(void *);

struct Object {
    char padding[0x18];
    Listener secondListener;
    Listener firstListener;
    unsigned long reserved;
    Shared first;
    Shared second;

    long initialize();
};

long Object::initialize()
{
    first = makeFirst(1);
    Guard guard(first);
    second = makeSecond(first.value->getValue());

    FirstSource *source = first.value->source;
    Listener *listener = &firstListener;
    if (source)
        source->signal.connect(listener);

    listener = &secondListener;
    SecondSource *other = first.value->getSource();
    if (other)
        other->signal.connect(listener);

    return 0;
}
