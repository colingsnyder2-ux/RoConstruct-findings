// from server: 98% by king_originala
struct TypeInfo {
    bool __thiscall operator==(const TypeInfo&) const;
};

struct String;
extern void (__thiscall* const destroyString)(String*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String() { destroyString(this); }
};

struct TextureId {
    String text;
    unsigned int data;

    TextureId();
};

struct Descriptor {
    unsigned int reserved;
    String name;
};

struct Operations {
    unsigned int reserved[2];
    const TypeInfo* type;
    Descriptor* descriptor;
};

struct Holder {
    virtual ~Holder();
    virtual const TypeInfo& type() const;
};

struct Value {
    Holder* content;
    void assign(const TextureId&);
};

struct CastError {
    unsigned int data[10];
    CastError(const String&);
    CastError(const CastError&);
    ~CastError();
};

extern const TypeInfo emptyType;
extern const TypeInfo textureType;
extern const TypeInfo stringType;

extern bool (__thiscall* const equalType)(const TypeInfo*, const TypeInfo&);

extern String* __cdecl stringValue(Value*);
extern bool __cdecl convertTexture(const String*, TextureId*);
extern Operations* __cdecl textureOperations();
extern void* __cdecl textureValue(Value*);
extern String __cdecl formatMessage(const char*, ...);

struct S {
    Operations* operations;
    Value value;

    void* getTexture();
};

void* S::getTexture()
{
    bool (__thiscall* compare)(const TypeInfo*, const TypeInfo&) = equalType;
    Value* source = &value;

    if (source) {
        const TypeInfo& actual =
            source->content ? source->content->type() : emptyType;

        if (compare(&actual, textureType)) {
            void* result = reinterpret_cast<char*>(source->content) + 4;
            if (result)
                return result;
        }
    }

    if (compare(&stringType, *operations->type)) {
        TextureId converted;
        if (convertTexture(stringValue(source), &converted)) {
            source->assign(converted);
            operations = textureOperations();
            return textureValue(source);
        }
    }

    const String* destinationName = &textureOperations()->descriptor->name;
    const char* destination =
        destinationName->capacity >= 16
            ? destinationName->storage.pointer
            : destinationName->storage.buffer;

    const String* sourceName = &operations->descriptor->name;
    const char* origin =
        sourceName->capacity >= 16
            ? sourceName->storage.pointer
            : sourceName->storage.buffer;

    throw CastError(formatMessage("Unable to cast %s to %s",
                                  origin, destination));
}
