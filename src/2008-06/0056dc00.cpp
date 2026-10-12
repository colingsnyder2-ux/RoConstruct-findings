// from server: 95% by king_originala
struct TypeInfo {};

typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;

extern const TypeInfo colorType;
extern const TypeInfo stringType;
extern const TypeInfo emptyType;

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct Name {
    unsigned int prefix;
    String text;
};

struct Descriptor {
    unsigned int reserved[2];
    const TypeInfo* type;
    Name* name;
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Color {
    float r, g, b;
};

struct Any {
    Placeholder* content;
    void assign(const Color&);
};

struct Error {
    unsigned char storage[36];

    Error(const String&);
    Error(const Error&);
    ~Error();
};

extern const String* __cdecl getString(const Any*);
extern bool __cdecl parseColor(const String&, Color&);
extern Descriptor* __cdecl colorDescriptor();
extern void __cdecl finishColor(Any*);
extern String __cdecl format(const char*, ...);

struct S {
    Descriptor* descriptor;
    Any value;

    void convert();
};

void S::convert()
{
    TypeEqual equal = typeEqual;
    Any* p = &value;
    if (p &&
        equal(&(p->content ? p->content->type() : emptyType), colorType)) {
        Color* color = reinterpret_cast<Color*>(
            reinterpret_cast<char*>(p->content) + 4);
        if (color)
            return;
    }

    Color color;
    if (equal(&stringType, *descriptor->type) &&
        parseColor(*getString(p), color)) {
        p->assign(color);
        descriptor = colorDescriptor();
        finishColor(p);
        return;
    }

    Name* destinationName = colorDescriptor()->name;
    const char* destination;
    if (destinationName->text.capacity >= 16)
        destination = destinationName->text.storage.pointer;
    else
        destination = destinationName->text.storage.buffer;

    String* sourceString = &descriptor->name->text;
    const char* source;
    if (sourceString->capacity >= 16)
        source = sourceString->storage.pointer;
    else
        source = sourceString->storage.buffer;

    throw Error(format("Unable to cast %s to %s", source, destination));
}
