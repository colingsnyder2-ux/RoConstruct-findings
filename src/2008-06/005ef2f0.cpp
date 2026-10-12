// from server: 92% by atomic.potato
struct type_info;

typedef bool (__thiscall* TypeInfoEqualProc)(const type_info*, const type_info&);
extern TypeInfoEqualProc typeInfoEqual;
extern type_info inputType;

struct Metadata {
    unsigned char padding[8];
    const type_info* type;
};

struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone();
    Value* copy();
};

__forceinline Value* Value::copy()
{
    if (this)
        return clone();
    return 0;
}

extern int* __cdecl directValue(Value**);

struct S {
    Metadata* metadata;
    Value* value;

    S(const S&);
    ~S();
    int* convertedValue();
    int f();
};

inline S::S(const S& other)
    : metadata(other.metadata)
{
    value = other.value->copy();
}

inline S::~S()
{
    if (value)
        delete value;
}

int S::f()
{
    if (typeInfoEqual(&inputType, *metadata->type))
        return *directValue(&value);

    S temporary(*this);
    return *temporary.convertedValue();
}
