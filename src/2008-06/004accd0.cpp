// from server: 97% by king_originala
struct Vector3 {
    float x, y, z;
};

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual Vector3 get(void* object);
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    char padding[20];
    Accessor* accessor;
};

extern void* (__thiscall* bad_cast_constructor)(void*, const char*);
extern unsigned char bad_cast_throw_info;
extern "C" __declspec(noreturn) void __stdcall
throw_exception(void*, void*);

struct ChangePropertyItem {
    PropertyDescriptor* descriptor;
    void* object;
    Vector3 get();
};

Vector3 ChangePropertyItem::get() {
    TypedPropertyDescriptor* property =
        dynamic_cast<TypedPropertyDescriptor*>(descriptor);
    if (!property) {
        char exception[12];
        bad_cast_constructor(exception, "bad cast");
        throw_exception(exception, &bad_cast_throw_info);
    }
    return property->accessor->get(object);
}
