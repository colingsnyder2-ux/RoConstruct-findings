// from server: 95% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string();
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

extern "C" void (__cdecl * const invalidParameter)();
extern int __cdecl valueType();

struct Object {
    virtual void destroy(unsigned int);
};

struct Holder {
    Object* pointer;

    Holder(const String&);
    ~Holder();
    void swap(Holder&);
};

inline Holder::~Holder()
{
    if (pointer)
        pointer->destroy(1);
}

inline void Holder::swap(Holder& other)
{
    if (this != &other) {
        Object* old = pointer;
        pointer = other.pointer;
        other.pointer = old;
    }
}

struct Value {
    int type;
    Holder holder;

    void set(const bool&);
};

struct Arguments {
    unsigned char prefix[12];
    Value* first;
    Value* last;
    Value* limit;

    Arguments(unsigned int);
    Arguments(const Arguments&);
    ~Arguments();
};

struct S {
    unsigned char padding[0x165];
    bool enabled;

    bool query(String*, int);
    Arguments f();
};

Arguments S::f()
{
    String text;
    if (enabled && query(&text, 0)) {
        Arguments result(2);
        void (__cdecl *invalid)() = invalidParameter;
        bool value = true;

        if (static_cast<unsigned int>(result.last - result.first) <= 0)
            invalid();

        result.first->set(value);

        if (static_cast<unsigned int>(result.last - result.first) <= 1)
            invalid();

        Value* slot = result.first + 1;
        slot->type = valueType();
        Holder& destination = slot->holder;
        Holder(text).swap(destination);
        return result;
    } else {
        Arguments result(1);
        bool value = false;

        if (static_cast<unsigned int>(result.last - result.first) <= 0)
            invalidParameter();

        result.first->set(value);
        return result;
    }
}
