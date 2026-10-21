// from server: 0% by colin
//

//

extern "C" void* __cdecl current_context();
extern "C" void __stdcall release_context(int, void*);
extern "C" void __cdecl free_storage(void*);
extern "C" void __cdecl report_error(int, long, const char*, int);
extern "C" __declspec(noreturn) void __stdcall raise_error(long, const char*);

struct __declspec(dllimport) Context {
    void* previous;
    void** slot;
    void* resource;
    int owned;
    int reserved[2];
    Context(void*);
    ~Context();
};

struct Text {
    void destroy();
};

struct TextOwner {
    Text* value;
    ~TextOwner();
};

inline TextOwner::~TextOwner()
{
    if (value) {
        value->destroy();
        free_storage(value);
    }
}

struct Interface {
    virtual long __stdcall query(void*, void**);
    virtual unsigned long __stdcall add_ref();
    virtual unsigned long __stdcall release();
};

struct InterfaceOwner {
    Interface* value;
    InterfaceOwner(Interface*);
    ~InterfaceOwner();
};

inline InterfaceOwner::InterfaceOwner(Interface* p) : value(p)
{
    if (value)
        value->add_ref();
}

inline InterfaceOwner::~InterfaceOwner()
{
    if (value)
        value->release();
}

struct Payload {
    unsigned char prefix[8];
    unsigned char data[1];
};

struct Object {
    unsigned char prefix[4];
    Interface interface_part;
    unsigned char gap[4];
    Payload payload;
};

extern "C" long __stdcall acquire_object(Object**);

struct Source {
    TextOwner text();
    long assign(Text*, void*);
};

long __stdcall reconstruct(Source*, Interface**);

long __stdcall reconstruct(Source* source, Interface** result)
{
    Object* object = 0;
    Context context(current_context());

    try {
        if (acquire_object(&object)) {
            report_error(1, acquire_object(&object), ".\\Workspace.cpp", 331);
            raise_error(acquire_object(&object),
                        reinterpret_cast<const char*>(0x8164f8));
        }

        Object* const saved = object;

        (source->assign(source->text().value,
                        &saved->payload ? saved->payload.data : 0)
            ? (report_error(1,
                            source->assign(source->text().value,
                                           &saved->payload ? saved->payload.data : 0),
                            ".\\Workspace.cpp", 334),
               raise_error(source->assign(source->text().value,
                                          &saved->payload ? saved->payload.data : 0),
                           reinterpret_cast<const char*>(0x8164f8)))
            : (void)0);

        InterfaceOwner value(saved ? &saved->interface_part : 0);

        if (result) {
            *result = value.value;
            if (value.value)
                value.value->add_ref();
        } else {
            report_error(1, 0x80004003L, ".\\Workspace.cpp", 338);
            raise_error(0x80004003L,
                        reinterpret_cast<const char*>(0x8164f8));
        }
    } catch (long error) {
        return error;
    } catch (...) {
        return 0x80004005L;
    }

    return 0;
}
