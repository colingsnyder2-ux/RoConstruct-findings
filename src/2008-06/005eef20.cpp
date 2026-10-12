// from server: 99% by king_originala
struct TypeInfo {
    bool __thiscall operator==(const TypeInfo &) const;
};

typedef bool (__thiscall *TypeEqual)(const TypeInfo *, const TypeInfo *);

extern TypeEqual typeEqual;
extern TypeInfo emptyType;
extern TypeInfo valueType;
extern TypeInfo surfaceType;

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct NamedType {
    unsigned int reserved;
    String name;
};

struct Descriptor {
    unsigned int reserved[2];
    const TypeInfo *type;
    NamedType *namedType;
};

struct Holder {
    virtual void destroy();
    virtual const TypeInfo &type() const;
};

struct RuntimeError {
    unsigned int base[3];
    String message;

    RuntimeError(const String &);
    RuntimeError(const RuntimeError &);
    ~RuntimeError();
};

extern void __cdecl descriptorCallback();
extern char descriptorName[];
extern void __cdecl registerDescriptor(void (__cdecl *)(), const char *);
extern Descriptor *__cdecl getDescriptor();
extern void *__cdecl convertSurface(Holder **);
extern String __cdecl formatString(const char *, ...);
extern char castMessage[];

struct SurfaceDescriptor {
    Descriptor *descriptor;
    Holder *storage;

    void *cast();
};

void *SurfaceDescriptor::cast()
{
    TypeEqual equal = typeEqual;
    Holder **source = &storage;
    if (source) {
        const TypeInfo &actual = *source ? (*source)->type() : emptyType;
        if (equal(&actual, &valueType)) {
            void *result = reinterpret_cast<char *>(*source) + 4;
            if (result)
                return result;
        }
    }

    if (equal(&surfaceType, descriptor->type))
        convertSurface(source);

    registerDescriptor(descriptorCallback, descriptorName);

    String &targetName = getDescriptor()->namedType->name;
    const char *target = targetName.capacity >= 16
        ? targetName.storage.pointer : targetName.storage.buffer;

    String &sourceName = descriptor->namedType->name;
    const char *from = sourceName.capacity >= 16
        ? sourceName.storage.pointer : sourceName.storage.buffer;

    throw RuntimeError(formatString(castMessage, from, target));
}
