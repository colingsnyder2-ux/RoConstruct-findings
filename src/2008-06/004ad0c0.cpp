// from server: 93% by king_originala
namespace std {
    class exception {
        const char* message;
        int ownsMessage;
    public:
        virtual ~exception();
    };

    class bad_cast : public exception {
    public:
        explicit bad_cast(const char*);
        virtual ~bad_cast();
    };
}

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual float get(void*) = 0;
};

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    char padding[20];
    Accessor* accessor;
};

struct ChangePropertyItem {
    PropertyDescriptor* descriptor;
    void* instance;

    float get();
};

float ChangePropertyItem::get()
{
    TypedPropertyDescriptor* property =
        dynamic_cast<TypedPropertyDescriptor*>(descriptor);
    if (!property)
        throw std::bad_cast("bad cast");

    Accessor* accessor = property->accessor;
    void* object = instance;
    return accessor->get(object);
}
