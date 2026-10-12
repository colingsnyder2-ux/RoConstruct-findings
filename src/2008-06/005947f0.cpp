// from server: 82% by king_originala
namespace std {
    class type_info {};

    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        __thiscall basic_string(const T*);
        __thiscall ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern bool (__thiscall *typeEqual)(
    const std::type_info*, const std::type_info&);

struct FunctionRef {
    char storage[36];
    __thiscall FunctionRef();
    __thiscall ~FunctionRef();
};

struct Holder {
    virtual ~Holder();
    virtual const std::type_info& type() const;
};

struct Any {
    Holder* content;
    __thiscall Any(const FunctionRef&);
    __forceinline ~Any();
    __forceinline void swap(Any&);
};

__forceinline Any::~Any()
{
    if (content)
        delete content;
}

__forceinline void Any::swap(Any& other)
{
    if (this != &other) {
        Holder* old = other.content;
        other.content = content;
        content = old;
    }
}

struct CastError {
    char storage[40];
    __thiscall CastError(const std::string&);
    __thiscall CastError(const CastError&);
    __thiscall ~CastError();
};

extern const std::type_info placeholderType;
extern const std::type_info functionRefType;
extern const std::type_info* __cdecl getFunctionRefType();

struct Value {
    const std::type_info** descriptor;
    Any value;
    FunctionRef& __thiscall castFunctionRef();
};

FunctionRef& Value::castFunctionRef()
{
    bool (__thiscall *equal)(const std::type_info*, const std::type_info&) =
        typeEqual;

    if (equal(&placeholderType, *descriptor[2])) {
        Any(FunctionRef()).swap(value);
        descriptor = reinterpret_cast<const std::type_info**>(
            const_cast<std::type_info*>(getFunctionRefType()));
    }

    Any* source = &value;
    FunctionRef* result = 0;
    if (source) {
        const std::type_info& actual = source->content
            ? source->content->type()
            : placeholderType;
        if (equal(&actual, functionRefType))
            result = reinterpret_cast<FunctionRef*>(
                reinterpret_cast<char*>(source->content) + 4);
    }

    if (!result) {
        std::string message("Unable to cast value to RBX::Lua::FunctionRef");
        throw CastError(message);
    }

    return *result;
}
