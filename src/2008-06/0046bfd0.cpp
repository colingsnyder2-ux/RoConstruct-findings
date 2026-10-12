// from server: 41% by king_originala
extern "C" void* __cdecl get_state();
extern "C" void __stdcall finish_state(int, void*);
extern "C" void __cdecl free_object(void*);
extern "C" void __cdecl report_error(int, long, const char*, int);
extern "C" __declspec(noreturn) void __stdcall raise_error(long, const void*);

struct StateGuard {
    void* saved;
    void** slot;
    void* registration;
    int deferred;
    char padding[8];

    StateGuard(void*);
    ~StateGuard();
};

__forceinline StateGuard::~StateGuard()
{
    if (slot)
        slot[1] = saved;
    if (deferred)
        finish_state(0, registration);
}

struct Item {
    ~Item();
};

struct Temporary {
    Item* value;
    ~Temporary();
};

__forceinline Temporary::~Temporary()
{
    if (value) {
        value->~Item();
        free_object(value);
    }
}

struct Source {
    Temporary get();
    long check(Item*, void*);
};

struct Interface {
    virtual long __stdcall query(const void*, void**) = 0;
    virtual unsigned long __stdcall add_ref() = 0;
    virtual unsigned long __stdcall release() = 0;
};

struct InterfaceOwner {
    Interface* value;
    InterfaceOwner(Interface*);
    ~InterfaceOwner();
};

__forceinline InterfaceOwner::InterfaceOwner(Interface* p) : value(p)
{
    if (value)
        value->add_ref();
}

__forceinline InterfaceOwner::~InterfaceOwner()
{
    if (value)
        value->release();
}

struct Object;
extern "C" long __stdcall create_object(Object**);

int __stdcall reconstruct(Source* source, Interface** result)
{
    Object* object = 0;
    StateGuard guard(get_state());

    try {
        if (create_object(&object)) {
            report_error(1, create_object(&object),
                         reinterpret_cast<const char*>(0x81c850), 331);
            raise_error(create_object(&object),
                        reinterpret_cast<const void*>(0x8164f8));
        }

        source->check(
            source->get().value,
            reinterpret_cast<char*>(object) + 12
                ? reinterpret_cast<char*>(object) + 20 : 0) == 0
            ? (void)0
            : (report_error(
                   1,
                   source->check(
                       source->get().value,
                       reinterpret_cast<char*>(object) + 12
                           ? reinterpret_cast<char*>(object) + 20 : 0),
                   reinterpret_cast<const char*>(0x81c850), 334),
               raise_error(
                   source->check(
                       source->get().value,
                       reinterpret_cast<char*>(object) + 12
                           ? reinterpret_cast<char*>(object) + 20 : 0),
                   reinterpret_cast<const void*>(0x8164f8)));

        InterfaceOwner owner(
            object
                ? reinterpret_cast<Interface*>(
                      reinterpret_cast<char*>(object) + 4)
                : 0);

        if (!result) {
            report_error(1, 0x80004003L,
                         reinterpret_cast<const char*>(0x81c850), 338);
            raise_error(0x80004003L,
                        reinterpret_cast<const void*>(0x8164f8));
        }

        *result = owner.value;
        if (owner.value)
            owner.value->add_ref();
    }
    catch (...) {
        return 0x80004005L;
    }

    return 0;
}
