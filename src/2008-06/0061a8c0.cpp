// from server: 91% by king_originala
namespace std {
    struct bad_cast {
        const char* message;
        int owned;
        bad_cast(const char*);
        bad_cast(const bad_cast&);
        virtual ~bad_cast();
    };
}

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
