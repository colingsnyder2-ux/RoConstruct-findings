// from server: 95% by king_originala
namespace std {
    class bad_cast {
        const char* message;
        int ownsMessage;
    public:
        bad_cast(const char*);
        virtual ~bad_cast();
    };
}

extern "C" void* (__thiscall* bad_cast_constructor)(void*, const char*);
extern "C" __declspec(noreturn) void __stdcall
throw_exception(void*, void*);
extern unsigned char bad_cast_throw_info;

struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct PropertyDescriptor {
    virtual ~PropertyDescriptor();
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    Result get(int);
};

struct LuaArguments {
    PropertyDescriptor* property;
    int index;
    Result get();
};

Result LuaArguments::get()
{
    TypedPropertyDescriptor* descriptor =
        dynamic_cast<TypedPropertyDescriptor*>(property);
    if (!descriptor) {
        char exceptionObject[sizeof(std::bad_cast)];
        bad_cast_constructor(exceptionObject, "bad cast");
        throw_exception(exceptionObject, &bad_cast_throw_info);
    }
    return descriptor->get(index);
}
