// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <typeinfo>


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
