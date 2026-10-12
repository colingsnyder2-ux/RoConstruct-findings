// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* invalidParameter)();

struct String;
extern void (__thiscall* destroyString)(String*);

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
    ~String();
    const char* c_str() const;
};

__forceinline String::~String()
{
    destroyString(this);
}

__forceinline const char* String::c_str() const
{
    return capacity >= 16 ? pointer : buffer;
}

struct Name {
    unsigned int unused[2];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
    const char* c_str() const;
};

__forceinline const char* Name::c_str() const
{
    return capacity >= 16 ? pointer : buffer;
}

struct Named {
    virtual void unused();
    virtual Name* name();
};

struct StringSource {
    unsigned int unused[2];
    String* convert(String*, int);
};

struct Instance {
    unsigned int unused[2];
    StringSource source;
    Named named;
    void prepare();
};

struct Descriptor {
    unsigned int unused;
    String text;
};

struct Property {
    unsigned int unused;
    Descriptor* descriptor;
};

struct Iterator {
    void* owner;
    void* node;
};

struct Map {
    void* owner;
    char unused[20];
    void* end;
    Iterator* find(Iterator*, Instance* const&);
};

struct Stream;

struct Serializer {
    unsigned int unused;
    void write(Stream*, Property*);
};

struct Connection {
    unsigned int unused;
    const char* describe(int);
};

struct Pair {
    Property* property;
    void* value;
};

struct Replicator {
    char unused0[0x2bf4];
    Serializer serializer;
    char unused1[0x40];
    Map map;
    char unused2[0x100];
    Connection connection;
    void writeInstance(Stream*, Instance*);
    void writeProperty(Pair*, int, Stream*);
};

struct Settings {
    char unused[0x132];
    unsigned char logging;
};

Settings* __cdecl settings();
void __cdecl writeTag(Stream*, int);

struct Logger {
    void __cdecl print(int, ...);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    Logger* object;
    Control* control;
    Logger* operator->() const;
    ~Shared();
};

__forceinline Logger* Shared::operator->() const
{
    return object;
}

__forceinline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->references, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl acquireLogger();

struct ChangePropertyItem {
    unsigned int unused;
    Replicator* replicator;
    Property* property;
    Instance* instance;
    void write(Stream*);
};

void ChangePropertyItem::write(Stream* stream)
{
    {
        Instance* key = instance;
        void* end = replicator->map.end;
        void* owner = replicator->map.owner;
        Iterator storage;
        Iterator* found = replicator->map.find(&storage, key);
        if (!found->owner || found->owner != owner)
            invalidParameter();
        if (found->node == end)
            return;
    }

    writeTag(stream, 3);
    replicator->writeInstance(stream, instance);
    replicator->serializer.write(stream, property);

    if (settings()->logging) {
        Instance* object = instance;
        Named* named = &object->named;
        object->prepare();
        String storage;
        const String* text = object->source.convert(&storage, 4);
        acquireLogger()->print(
            1,
            "Replication: %s:%s.%s >> %s",
            named->name()->c_str(),
            text->c_str(),
            property->descriptor->text.c_str(),
            replicator->connection.describe(1));
    }

    void* value = instance ? reinterpret_cast<char*>(instance) + 0x14 : 0;
    Pair pair;
    pair.property = property;
    pair.value = value;
    replicator->writeProperty(&pair, 1, stream);
}
