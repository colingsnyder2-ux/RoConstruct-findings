// from server: 85% by king_originala
namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
    };

    class bad_cast {
        char storage[12];
    public:
        bad_cast(const char*);
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Value {
    String text;
    unsigned int extra;
};

struct Holder {
    virtual void destroy(unsigned int) = 0;
    virtual void unused() = 0;
    virtual Holder* clone() = 0;
};

struct Argument {
    void* object;
    Holder* holder;
    Argument(void*, Holder*);
    ~Argument();
    const Value& get();
};

inline Argument::Argument(void* value, Holder* owner)
    : object(value), holder(owner ? owner->clone() : 0)
{
}

inline Argument::~Argument()
{
    if (holder)
        holder->destroy(1);
}

struct Receiver {
    virtual void unused() = 0;
    virtual void set(unsigned int, const Argument*) = 0;
};

struct __multiple_inheritance Object;
typedef void (Object::*Method)(Value);

extern "C" void* __cdecl dynamicCastHelper(
    void*, long, const void*, const void*, int);
extern "C" void __stdcall throwExceptionHelper(void*, void*);

extern const char sourceType[];
extern const char targetType[];
extern char badCastThrowInfo[];

struct S {
    char padding[56];
    Method method;
    void* object;
    Holder* holder;

    void invoke(void*, Receiver*);
};

void S::invoke(void* instance, Receiver* receiver)
{
    Argument argument(object, holder);

    receiver->set(1, &argument);

    Object* target = static_cast<Object*>(
        dynamicCastHelper(instance, 0, sourceType, targetType, 0));

    if (!target) {
        std::bad_cast error("bad cast");
        throwExceptionHelper(&error, badCastThrowInfo);
    }

    (target->*method)(argument.get());
}
