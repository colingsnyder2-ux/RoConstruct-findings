// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long reserved;
    volatile long references;
    void addRef();
};

__forceinline void Control::addRef()
{
    _InterlockedExchangeAdd(&references, 1);
}

struct Connection {
    unsigned long value;
};

struct Signal {
    void disconnect(Connection*);
};

struct Service {
    char reserved[0x130];
    Signal signal;
};

struct Provider {
    char reserved[0x344];
    Signal signal;
};

struct Object {
    char reserved[0x204];
    Provider* provider;
    Service* getService();
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
    void reset();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

struct Guard {
    char reserved[12];
    Guard(Shared);
    ~Guard();
};

void __cdecl releaseObject(Shared, int);

struct S {
    char reserved[0x18];
    Connection first;
    Connection second;
    unsigned long padding;
    Shared object;
    Shared other;
    void f();
};

void S::f()
{
    if (object.object) {
        {
            Guard guard(object);
            Connection* firstConnection = &first;
            Service* service = object.object->getService();
            if (service)
                service->signal.disconnect(firstConnection);

            Provider* provider = object.object->provider;
            Connection* secondConnection = &second;
            if (provider)
                provider->signal.disconnect(secondConnection);
        }
        other.reset();
        releaseObject(object, 1);
        object.reset();
    }
}
