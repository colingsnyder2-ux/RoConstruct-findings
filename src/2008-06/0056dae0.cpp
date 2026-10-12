// from server: 96% by king_originala
struct TypeInfo {};

extern bool (__thiscall * const typeEqual)(const TypeInfo *, const TypeInfo &);

struct String {
    unsigned char allocator;
    char padding[3];
    union {
        char buffer[16];
        char *pointer;
    } data;
    unsigned length;
    unsigned capacity;
    ~String();
};

struct TypeName {
    unsigned reserved;
    String text;
};

struct Type {
    unsigned reserved[2];
    const TypeInfo *info;
    TypeName *name;
};

struct Vector {
    short x;
    short y;
};

struct Placeholder {
    virtual void destroy() = 0;
    virtual const TypeInfo &type() const = 0;
};

struct Any {
    Placeholder *content;
    void assign(const Vector &);
};

struct Exception {
    unsigned char storage[40];
    Exception(const String &);
    Exception(const Exception &);
    ~Exception();
};

extern const TypeInfo emptyType;
extern const TypeInfo vectorType;
extern const TypeInfo stringType;

extern const Type &singleton();
extern const String *getString(const Any *);
extern bool parseVector(const String *, Vector *);
extern Vector *getVector(const Any *);
extern String format(const char *, ...);

struct S {
    const Type *type;
    Any value;
    Vector *f();
};

Vector *S::f()
{
    bool (__thiscall *equal)(const TypeInfo *, const TypeInfo &) = typeEqual;
    Any *p = &value;
    if (p) {
        const TypeInfo &actual =
            p->content ? p->content->type() : emptyType;
        if (equal(&actual, vectorType)) {
            Vector *result = reinterpret_cast<Vector *>(p->content + 1);
            if (result)
                return result;
        }
    }

    if (equal(&stringType, *type->info)) {
        Vector result;
        result.x = 0;
        result.y = 0;
        if (parseVector(getString(p), &result)) {
            p->assign(result);
            type = &singleton();
            return getVector(p);
        }
    }

    TypeName *target = singleton().name;
    const char *targetName =
        target->text.capacity >= 16
        ? target->text.data.pointer : target->text.data.buffer;

    String *source = &type->name->text;
    const char *sourceName =
        source->capacity >= 16 ? source->data.pointer : source->data.buffer;

    throw Exception(format("Unable to cast %s to %s", sourceName, targetName));
}
