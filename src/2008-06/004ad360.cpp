// from server: 97% by king_originala
struct PropertyAccess {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* object, const void* value);
};

struct TypedPropertyDescriptor {
    char padding[24];
    PropertyAccess* access;
};

struct BadCast {
    char data[12];
};

extern char sourceType;
extern char destinationType;
extern char badCastThrowInfo;

extern "C" void* __cdecl runtimeCast(
    void*, int, const void*, const void*, int);

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);
extern BadCastConstructor constructBadCast;

extern "C" TypedPropertyDescriptor* __stdcall throwException(
    void*, const void*);

struct ChangePropertyItem {
    void* property;
    void* object;
    void apply(const void* value);
};

void ChangePropertyItem::apply(const void* value)
{
    TypedPropertyDescriptor* descriptor =
        static_cast<TypedPropertyDescriptor*>(
            runtimeCast(property, 0, &sourceType, &destinationType, 0));

    if (!descriptor) {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        descriptor = throwException(&exception, &badCastThrowInfo);
    }

    descriptor->access->set(object, value);
}
