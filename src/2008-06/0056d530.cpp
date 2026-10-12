// from server: 91% by king_originala
struct TypeInfo {
    unsigned int reserved[2];
    const char* name;
};

typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);

struct String {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct TypeName {
    unsigned int reserved;
    String text;
};

struct Descriptor {
    unsigned int reserved[2];
    const TypeInfo* type;
    TypeName* name;
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any {
    Placeholder* content;
    void assign(const bool&);
};

struct CastError {
    unsigned char storage[36];
    CastError(const String&);
};

extern String __cdecl format(const char*, const char*, const char*);
extern String* __cdecl stringValue(Any*);
extern bool __cdecl parseValue(const String*, bool*);
extern bool* __cdecl boolValue(Any*);
extern Descriptor* __cdecl descriptor();
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

struct Holder {
    Descriptor* description;
    Any value;

    void convert();
};

void Holder::convert()
{
    TypeEqual equal = *reinterpret_cast<TypeEqual*>(0x802878);
    Any* source = &value;

    if (source) {
        const TypeInfo* type = source->content
            ? &source->content->type()
            : reinterpret_cast<const TypeInfo*>(0x929614);

        if (equal(type, *reinterpret_cast<const TypeInfo*>(0x929644))) {
            bool* result = reinterpret_cast<bool*>(
                reinterpret_cast<char*>(source->content) + 4);
            if (result)
                return;
        }
    }

    bool result;
    if (equal(reinterpret_cast<const TypeInfo*>(0x92bef8),
              *description->type) &&
        parseValue(stringValue(source), &result)) {
        source->assign(result);
        description = descriptor();
        boolValue(source);
        return;
    }

    TypeName* target = descriptor()->name;
    const char* targetName = target->text.capacity >= 16
        ? target->text.data.pointer : target->text.data.buffer;
    String& current = description->name->text;
    const char* currentName = current.capacity >= 16
        ? current.data.pointer : current.data.buffer;

    String message = format(
        reinterpret_cast<const char*>(0x82f71c),
        currentName, targetName);
    CastError error(message);
    throwException(&error, reinterpret_cast<void*>(0x8d1bc8));
}
