// from server: 97% by king_originala
namespace std {
    struct bad_cast {
        char data[12];
        bad_cast(const char*);
    };
}

extern void (__thiscall *construct_bad_cast)(std::bad_cast*, const char*);

inline std::bad_cast::bad_cast(const char* message)
{
    construct_bad_cast(this, message);
}

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct PropertyWriter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void write(void*, void*);
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    char padding[20];
    PropertyWriter* writer;
};

extern char bad_cast_throw_info;
extern "C" TypedPropertyDescriptor* __stdcall throw_bad_cast(
    void*, void*);

struct ChangePropertyItem {
    PropertyDescriptor* descriptor;
    void* instance;
    void apply(void* value);
};

void ChangePropertyItem::apply(void* value)
{
    TypedPropertyDescriptor* property =
        dynamic_cast<TypedPropertyDescriptor*>(descriptor);
    if (!property) {
        std::bad_cast error("bad cast");
        property = throw_bad_cast(&error, &bad_cast_throw_info);
    }
    property->writer->write(instance, value);
}
