// from server: 75% by king_originala
extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct ThrowInfo;
extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, ThrowInfo*);

extern char baseType;
extern char clientType;
extern ThrowInfo badCastThrowInfo;

namespace std
{
    class bad_cast
    {
        char storage[8];

    public:
        bad_cast(const char*);
        virtual ~bad_cast();
    };
}

struct ValueObject
{
    virtual ~ValueObject();
    virtual void unused() = 0;
    virtual ValueObject* clone() = 0;
};

struct Value
{
    void* type;
    ValueObject* object;

    Value(const Value&);
    ~Value();
    int* get();
};

inline Value::Value(const Value& source)
{
    type = source.type;
    object = source.object ? source.object->clone() : 0;
}

inline Value::~Value()
{
    if (object)
        delete object;
}

struct Arguments
{
    virtual void unused() = 0;
    virtual void read(int, Value*) = 0;
};

typedef void (__thiscall *BoundMethod)(void*, int);

struct S
{
    char reserved[0x38];
    BoundMethod method;
    int adjustment;
    Value defaultValue;

    void invoke(void*, Arguments*);
};

void S::invoke(void* instance, Arguments* arguments)
{
    Value value(defaultValue);
    arguments->read(1, &value);

    void* client = __RTDynamicCast(
        instance, 0, &baseType, &clientType, 0);

    if (!client)
    {
        std::bad_cast exception("bad cast");
        throwException(&exception, &badCastThrowInfo);
    }

    method(static_cast<char*>(client) + adjustment, *value.get());
}
