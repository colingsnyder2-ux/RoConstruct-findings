// from server: 80% by king_originala
struct Type
{
    unsigned char data[16];
    Type(const char*, const void*);
    ~Type();
};

const Type& singleton();

struct Value;
typedef Value* (__thiscall *Callback)(void*, Value*);

struct Value
{
    unsigned char data[24];
    Value(Callback, void*, Value*&);
    ~Value();
};

__forceinline Value::Value(Callback callback, void* object, Value*& returned)
{
    returned = callback(object, this);
}

struct Object
{
    virtual void destroy(unsigned int);
};

struct Handle
{
    Object* pointer;
    Handle(const Value&);
    ~Handle();
    void swap(Handle&);
};

__forceinline Handle::~Handle()
{
    if (pointer)
        pointer->destroy(1);
}

__forceinline void Handle::swap(Handle& other)
{
    if (this != &other)
    {
        Object* saved = pointer;
        pointer = other.pointer;
        other.pointer = saved;
    }
}

struct Result
{
    const Type* type;
    Handle handle;
};

struct Holder
{
    unsigned char padding[56];
    Callback callback;
    unsigned int offset;
    void evaluate(void*, Result*);
};

void Holder::evaluate(void* object, Result* result)
{
    Value* returned;
    Value value(callback, static_cast<char*>(object) + offset, returned);
    result->type = &singleton();
    Handle(*returned).swap(result->handle);
}
