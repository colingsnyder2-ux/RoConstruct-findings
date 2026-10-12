// from server: 56% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

typedef void (String::*StringCopy)(const String&);
typedef void (String::*StringDestroy)();

extern StringCopy stringCopy;
extern StringDestroy stringDestroy;

namespace std {
    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(const basic_string& other)
    {
        (this->*stringCopy)(other);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        (this->*stringDestroy)();
    }
}

struct StringArgument {
    const String& get();
};

struct BoolArgument {
    const bool* get();
};

struct ValueBase {
    virtual ~ValueBase();
};

struct Holder {
    ValueBase* value;
    Holder(const String&);
    ~Holder();
    void swap(Holder&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Holder& other)
{
    if (this != &other) {
        ValueBase* old = value;
        value = other.value;
        other.value = old;
    }
}

struct Result {
    void* type;
    Holder value;
};

void* getStringType();

struct __multiple_inheritance Object;

struct S {
    char padding[56];
    typedef String (Object::*Function)(String, String, bool);
    Function function;

    void invoke(Object*, Result*, StringArgument*, StringArgument*, BoolArgument*);
};

void S::invoke(Object* object, Result* output, StringArgument* first,
               StringArgument* second, BoolArgument* third)
{
    String result = (object->*function)(first->get(), second->get(), *third->get());
    output->type = getStringType();
    Holder(result).swap(output->value);
}
