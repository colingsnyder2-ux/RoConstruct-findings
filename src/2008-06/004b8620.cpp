// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Text {
    unsigned allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
    ~Text();
};

struct NamedText {
    unsigned prefix[2];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct NameInterface {
    virtual void unused();
    virtual NamedText* name();
};

struct Object {
    unsigned prefix[2];
    unsigned textPart[2];
    NameInterface namePart;
    unsigned callbackPart;
    unsigned unknown;
    unsigned identifier;
    void prepare();
};

struct TextPart {
    Text* format(Text*, int);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    unsigned* object;
    Control* control;
    ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

struct Lookup {
    int find(Object**);
};

struct IdentifierWriter {
    void write(void*, unsigned);
};

struct LabelProvider {
    const char* get(int);
};

struct Callback {
    const void* tag;
    void* object;
};

struct Owner {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual bool flag(Object*);
    void writeObject(void*, Object*);
    void finishObject(Object*, void*);
    void writeCallback(Callback*, int, void*);
};

struct Settings {
    char padding[0x131];
    bool logging;
};

extern Settings* __cdecl settings();
extern void __cdecl writeKind(void*, int);
extern Shared* __cdecl acquire(Shared*);
extern void __cdecl report(unsigned, int, const char*, const char*, const char*, const char*);
extern void* __cdecl writeFlag(void*, bool);
extern const char message[];
extern const char callbackTag[];

struct Item {
    unsigned prefix;
    Owner* owner;
    Object* object;
    void write(void*);
};

void Item::write(void* stream)
{
    Object* key = object;
    if (!reinterpret_cast<Lookup*>(
            reinterpret_cast<char*>(owner) + 0x2c90)->find(&key))
        return;

    writeKind(stream, 2);
    owner->writeObject(stream, object);

    if (settings()->logging) {
        Object* instance = object;
        NameInterface* names = &instance->namePart;
        instance->prepare();

        Text text;
        Text* formatted = reinterpret_cast<TextPart*>(
            reinterpret_cast<char*>(instance) + 8)->format(&text, 4);

        Shared shared;
        Shared* acquired = acquire(&shared);

        const char* value;
        if (formatted->capacity >= 16)
            value = formatted->pointer;
        else
            value = formatted->buffer;

        NamedText* name = names->name();
        const char* nameValue;
        if (name->capacity >= 16)
            nameValue = name->pointer;
        else
            nameValue = name->buffer;

        unsigned destination = *acquired->object;
        const char* label = reinterpret_cast<LabelProvider*>(
            reinterpret_cast<char*>(owner) + 0x2d54)->get(1);

        report(destination, 1, message, nameValue, value, label);
    }

    reinterpret_cast<IdentifierWriter*>(
        reinterpret_cast<char*>(owner) + 0x2bb0)->write(
            stream, object->identifier);

    bool enabled = owner->flag(object);
    writeFlag(stream, enabled);
    owner->finishObject(object, stream);

    void* callbackObject = object
        ? reinterpret_cast<char*>(object) + 0x14
        : 0;

    Callback callback;
    callback.object = callbackObject;
    callback.tag = callbackTag;
    owner->writeCallback(&callback, 0, stream);
}
