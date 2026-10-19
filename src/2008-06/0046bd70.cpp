// from server: 38% by colin
struct Source;

extern "C" void * __stdcall current_context();
extern "C" void __stdcall unlock_context(unsigned long, unsigned long);
extern "C" void __cdecl free_object(void *);
extern "C" long __stdcall create_object(Source **);
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

struct Source {
    unsigned long padding;
    Interface interface_value;
    unsigned long reserved;
    Inner inner;

    Interface *get();
    long query(Interface *, void *);
    void destroy();
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

extern "C" long __stdcall reconstruct(Source *source, Interface **output)
{
    Source *object = 0;
    Guard guard(current_context());

    if (create_object(&object)) {
        report_error(1, create_object(&object), ".\\Workspace.cpp", 300);
        raise_error(create_object(&object),
                    reinterpret_cast<const char *>(0x8164f8));
    }

    Source *saved = object;

    if (source->query(
            (saved && (saved->padding, &saved->inner)) ? &saved->inner.interface_value : 0,
            &saved->inner) != 0) {
        report_error(1, source->query(&saved->inner.interface_value, &saved->inner),
                     ".\\Workspace.cpp", 304);
        raise_error(source->query(&saved->inner.interface_value, &saved->inner),
                    reinterpret_cast<const char *>(0x8164f8));
    }

    if (source) {
        source->destroy();
        free_object(source);
    }
    source = 0;

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
