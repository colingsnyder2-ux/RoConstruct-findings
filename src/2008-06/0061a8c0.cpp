// from server: 95% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <typeinfo>


struct FunctionRef {
    void* object;
    void* owner;
    FunctionRef(const FunctionRef&);
    ~FunctionRef();
};

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    FunctionRef get(void* instance);
};

struct LuaArguments {
    PropertyDescriptor* descriptor;
    void* instance;
    FunctionRef get();
};

FunctionRef LuaArguments::get()
{
    TypedPropertyDescriptor* property =
        dynamic_cast<TypedPropertyDescriptor*>(descriptor);
    if (!property)
        throw std::bad_cast("bad cast");
    return property->get(instance);
}
