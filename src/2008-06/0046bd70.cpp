// from server: 33% by king_originala
struct Source;
struct Object;

extern "C" void * __stdcall current_context();
extern "C" void __stdcall unlock_context(unsigned long, unsigned long);
extern "C" void __cdecl free_object(void *);
extern "C" long __stdcall create_object(Object **);
extern "C" void __cdecl report_error(int, long, const char *, int);
extern "C" __declspec(noreturn) void __stdcall raise_error(long, const char *);

struct Guard {
    unsigned long saved;
    unsigned long *context;
    unsigned long token;
    int locked;
    unsigned long reserved[2];

    Guard(void *);
    ~Guard();
};

inline Guard::~Guard()
{
    if (context)
        context[1] = saved;
    if (locked)
        unlock_context(0, token);
}

struct Owner {
    Source *pointer;

    ~Owner();
    operator Source *() const;
};

struct Source {
    Owner get();
    long query(Source *, void *);
    void destroy();
};

inline Owner::~Owner()
{
    if (pointer) {
        pointer->destroy();
        free_object(pointer);
    }
}

inline Owner::operator Source *() const
{
    return pointer;
}

struct Interface {
    struct Table {
        unsigned long (__stdcall *query)(Interface *, void *, void *);
        unsigned long (__stdcall *addref)(Interface *);
        unsigned long (__stdcall *release)(Interface *);
    };

    Table *table;
};

struct Inner {
    char padding[8];
    Interface interface_value;
};

struct Object {
    unsigned long padding;
    Interface interface_value;
    unsigned long reserved;
    Inner inner;
};

struct InterfaceOwner {
    Interface *pointer;

    explicit InterfaceOwner(Interface *);
    ~InterfaceOwner();
};

inline InterfaceOwner::InterfaceOwner(Interface *value) : pointer(value)
{
    if (pointer)
        pointer->table->addref(pointer);
}

inline InterfaceOwner::~InterfaceOwner()
{
    if (pointer)
        pointer->table->release(pointer);
}

extern "C" long __stdcall reconstruct(Owner source, Interface **output)
{
    Object *object = 0;
    Guard guard(current_context());

    if (create_object(&object)) {
        report_error(1, create_object(&object), ".\\Workspace.cpp", 300);
        raise_error(create_object(&object),
                    reinterpret_cast<const char *>(0x8164f8));
    }

    Object *saved = object;

    source.pointer->query(
        source.pointer->get(),
        &saved->inner ? &saved->inner.interface_value : 0) == 0
        ? (void)0
        : (report_error(
               1,
               source.pointer->query(
                   source.pointer->get(),
                   &saved->inner ? &saved->inner.interface_value : 0),
               ".\\Workspace.cpp", 304),
           raise_error(
               source.pointer->query(
                   source.pointer->get(),
                   &saved->inner ? &saved->inner.interface_value : 0),
               reinterpret_cast<const char *>(0x8164f8)));

    if (source.pointer) {
        source.pointer->destroy();
        free_object(source.pointer);
    }
    source.pointer = 0;

    InterfaceOwner result(saved ? &saved->interface_value : 0);

    if (!output) {
        report_error(1, 0x80004003L, ".\\Workspace.cpp", 308);
        raise_error(0x80004003L,
                    reinterpret_cast<const char *>(0x8164f8));
    }

    *output = result.pointer;
    if (result.pointer)
        result.pointer->table->addref(result.pointer);

    return 0;
}
