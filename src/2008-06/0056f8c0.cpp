// from server: 54% by king_originala
struct TypeInfo {};
extern bool (__thiscall *typeEqual)(const TypeInfo *, const TypeInfo *);

extern TypeInfo emptyType;
extern TypeInfo instancePointerType;
extern TypeInfo objectPointerType;
extern TypeInfo instanceType;
extern TypeInfo objectType;

struct String;
extern String *(__thiscall *constructString)(String *, const char *);

struct String {
    unsigned char storage[28];
    String(const char *text) { constructString(this, text); }
    ~String();
};

struct CastError {
    unsigned char storage[40];
    CastError(const String &);
    CastError(const CastError &);
    ~CastError();
};

struct SharedPointer {
    void *pointer;
    void *control;

    SharedPointer() : pointer(0), control(0) {}
    ~SharedPointer();
};

struct Holder {
    virtual void destroy();
    virtual const TypeInfo &type() const;
};

struct PointerHolder : Holder {
    SharedPointer value;
};

struct Any {
    Holder *holder;
    Any &assign(const SharedPointer &);
};

struct Descriptor {
    unsigned int reserved[2];
    const TypeInfo *type;
};

extern Descriptor *__cdecl objectDescriptor();
extern void *__cdecl dynamicCast(void *, int, const TypeInfo *,
                                 const TypeInfo *, int);
extern SharedPointer *__cdecl makeObjectPointer(SharedPointer *, void *);

struct Value {
    Descriptor *descriptor;
    Any value;

    SharedPointer &getObject();
};

SharedPointer &Value::getObject()
{
    if (typeEqual(&emptyType, descriptor->type)) {
        SharedPointer empty;
        value.assign(empty);
        descriptor = objectDescriptor();
    }

    if (typeEqual(&instancePointerType, descriptor->type)) {
        Any *a = &value;
        SharedPointer *source = 0;

        if (a) {
            const TypeInfo *type = a->holder
                ? &a->holder->type() : &emptyType;
            if (typeEqual(type, &instancePointerType))
                source = &static_cast<PointerHolder *>(a->holder)->value;
        }

        if (source) {
            void *object = dynamicCast(source->pointer, 0,
                                      &instanceType, &objectType, 0);
            if (!object) {
                String message("Unable to cast value to Object");
                throw CastError(message);
            }

            SharedPointer temporary;
            makeObjectPointer(&temporary, object);
            a->assign(temporary);
        } else {
            SharedPointer empty;
            a->assign(empty);
        }

        descriptor = objectDescriptor();
    }

    Any *a = &value;
    SharedPointer *result = 0;

    if (a) {
        const TypeInfo *type = a->holder
            ? &a->holder->type() : &emptyType;
        if (typeEqual(type, &objectPointerType))
            result = &static_cast<PointerHolder *>(a->holder)->value;
    }

    if (!result) {
        String message("Unable to cast value to Object");
        throw CastError(message);
    }

    return *result;
}
