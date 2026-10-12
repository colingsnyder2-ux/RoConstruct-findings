// from server: 83% by king_originala
struct String
{
    unsigned int allocator;
    union
    {
        char small[16];
        char* heap;
    } data;
    unsigned int length;
    unsigned int capacity;

    ~String();
    const char* c_str() const;
};

inline const char* String::c_str() const
{
    if (capacity >= 16)
        return data.heap;
    return data.small;
}

struct Name
{
    unsigned int unused;
    String text;
};

struct Instance;
struct Arguments;

struct Descriptor
{
    virtual void reserved() = 0;
    virtual void invoke(Instance*, Arguments*) = 0;

    Name* name;
    unsigned int unused[2];
    void* context;

    bool accepts(Instance*);
};

struct Instance
{
    unsigned int unused[2];
    Descriptor* descriptor;
};

struct Shared
{
    Instance* object;
    void* control;

    ~Shared();
};

struct Owned
{
    virtual void destroy(unsigned int) = 0;
};

struct Pair
{
    unsigned int first;
    Owned* second;

    Pair();
};

extern void* argumentsTable[];

struct Arguments
{
    void** table;
    Pair values;
    int first;
    void* state;

    Arguments(void*);
    ~Arguments();
};

inline Arguments::Arguments(void* s)
{
    table = argumentsTable;
    first = 1;
    state = s;
}

inline Arguments::~Arguments()
{
    if (values.second)
        values.second->destroy(1);
}

struct Error
{
    void* table;
    char* message;
    unsigned int owned;
    String text;

    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Notification
{
    void finish();
};

extern Descriptor* __cdecl lookup(void*, int);
extern Notification* __stdcall notify(void*, const char*);
extern bool __cdecl getObject(void*, int, Shared*);
extern void* __cdecl dynamicCastObject(void*, int, const void*, const void*, int);
extern void __cdecl prepare();
extern String __cdecl format(const char*, ...);
extern int __cdecl pushValues(Pair*, void*);

extern char describedType;
extern char instanceType;

int __cdecl f(void* state)
{
    Descriptor* descriptor = lookup(state, -10003);
    if (descriptor->context)
        notify(descriptor->context, descriptor->name->text.c_str())->finish();

    Shared object = { 0, 0 };
    if (getObject(state, 1, &object) && object.object)
    {
        Instance* instance = object.object;
        void* castResult = dynamicCastObject(
            instance, 0, &describedType, &instanceType, 0);
        prepare();

        if (!descriptor->accepts(instance))
        {
            Descriptor* type = instance->descriptor;
            throw Error(format(
                "Object %s is not an Instance",
                descriptor->name->text.c_str(),
                type->name->text.c_str()));
        }

        Arguments arguments(state);
        descriptor->invoke(instance, &arguments);
        return pushValues(&arguments.values, arguments.state);
    }

    throw Error(format(
        "Did you forget a semicolon?  The first argument of member function %s must be an Object",
        descriptor->name->text.c_str()));
}
