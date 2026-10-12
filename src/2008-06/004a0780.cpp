// from server: 73% by king_originala
struct Control
{
    virtual void destroy(unsigned int) = 0;
    virtual void unused() = 0;
    virtual Control* clone() = 0;
};

struct Value
{
    void* object;
    Control* control;

    Value(const Value&);
    ~Value();
    int* get();
};

inline Value::Value(const Value& other)
{
    object = other.object;
    control = other.control ? other.control->clone() : 0;
}

inline Value::~Value()
{
    if (control)
        control->destroy(1);
}

struct Arguments
{
    virtual void unused() = 0;
    virtual void set(int, Value*) = 0;
};

namespace std
{
    class bad_cast
    {
        unsigned char storage[12];
    public:
        bad_cast(const char*);
    };
}

extern char sourceType;
extern char targetType;
extern char badCastInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);
extern "C" void __stdcall throwException(void*, void*);

struct S
{
    unsigned char reserved[56];
    void (__thiscall* invoke)(void*, int);
    int adjustment;
    Value value;

    void function(void*, Arguments*);
};

void S::function(void* object, Arguments* arguments)
{
    Value temporary(value);
    arguments->set(1, &temporary);

    void* client = __RTDynamicCast(
        object, 0, &sourceType, &targetType, 0);

    if (!client)
    {
        std::bad_cast exception("bad cast");
        throwException(&exception, &badCastInfo);
    }

    invoke(static_cast<char*>(client) + adjustment, *temporary.get());
}
