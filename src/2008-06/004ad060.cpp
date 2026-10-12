// from server: 97% by king_originala
struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual int get(void*) = 0;
};

struct TypedDescriptor {
    unsigned char padding[24];
    Accessor* accessor;
};

struct BadCast {
    unsigned char storage[12];
};

extern unsigned char propertyDescriptorType;
extern unsigned char typedPropertyDescriptorType;
extern unsigned char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern "C" TypedDescriptor* __stdcall throwBadCast(void*, void*);

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);
extern BadCastConstructor constructBadCast;

struct ChangePropertyItem {
    void* descriptor;
    void* instance;
    int get();
};

int ChangePropertyItem::get()
{
    TypedDescriptor* typed = static_cast<TypedDescriptor*>(
        __RTDynamicCast(descriptor, 0, &propertyDescriptorType,
                        &typedPropertyDescriptorType, 0));

    if (!typed) {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        typed = throwBadCast(&exception, &badCastThrowInfo);
    }

    Accessor* accessor = typed->accessor;
    void* object = instance;
    return accessor->get(object);
}
