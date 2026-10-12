// from server: 97% by king_originala
struct BadCast {
    unsigned int data[3];
};

extern void (__thiscall *bad_cast_constructor)(BadCast*, const char*);
extern unsigned char bad_cast_throw_info;
extern "C" __declspec(noreturn) void __stdcall throw_exception(void*, void*);

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct PropertyGetter {
    virtual ~PropertyGetter();
    virtual void reserved();
    virtual bool get(void*) const;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    unsigned char padding[20];
    PropertyGetter* getter;
};

struct ChangePropertyItem {
    PropertyDescriptor* property;
    void* instance;

    bool get() const;
};

bool ChangePropertyItem::get() const
{
    TypedPropertyDescriptor* descriptor =
        dynamic_cast<TypedPropertyDescriptor*>(property);
    if (!descriptor) {
        BadCast exception;
        bad_cast_constructor(&exception, "bad cast");
        throw_exception(&exception, &bad_cast_throw_info);
    }

    PropertyGetter* getter = descriptor->getter;
    void* object = instance;
    return getter->get(object);
}
