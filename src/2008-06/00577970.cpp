// from server: 97% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
typedef void (__cdecl *Manager)(void*, void*, int);

union Buffer {
    double alignment;
    char data[24];
};

struct Function {
    Manager* manager;
    Buffer buffer;

    Function(const Function&);
    ~Function();
};

struct Value {
    int value;

    Value(const Value&);
};

struct Flag {
    char value;

    Flag(const Flag&);
};

struct Holder {
    Function function;
    Value value;
    int padding;
    Flag flag;

    Holder(Function, Value, Flag);
    Holder(const Holder&);
};

struct Result {
    void* pointer;
    Holder holder;

    Result(void*, const Holder&);
};

__forceinline Function::Function(const Function& other)
    : manager(0)
{
    if (other.manager) {
        manager = other.manager;
        (*other.manager)((void*)&other.buffer, &buffer, 0);
    }
}

__forceinline Function::~Function()
{
    if (manager) {
        Manager destroy = *manager;
        if (destroy)
            destroy(&buffer, &buffer, 1);
        manager = 0;
    }
}

__forceinline Value::Value(const Value& other)
    : value(other.value)
{
}

__forceinline Flag::Flag(const Flag& other)
    : value(other.value)
{
}

__forceinline Holder::Holder(const Holder& other)
    : function(other.function), value(other.value), flag(other.flag)
{
}

__forceinline Result::Result(void* p, const Holder& other)
    : pointer(p), holder(other)
{
}

Result makeResult(void* pointer, Function function, Value value, Flag flag)
{
    return Result(pointer, Holder(function, value, flag));
}
