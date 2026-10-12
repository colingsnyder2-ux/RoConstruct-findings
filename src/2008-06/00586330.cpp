// from server: 81% by king_originala
struct Value;
extern void (__thiscall *destroyValue)(Value*);
extern void* __cdecl valueType();

struct Value
{
    char data[28];
    ~Value();
};

inline Value::~Value()
{
    destroyValue(this);
}

struct Object
{
    virtual ~Object();
};

struct Holder
{
    Object* value;
    Holder(const Value&);
    ~Holder();
    void swap(Object*&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Object*& other)
{
    if (&value != &other)
    {
        Object* old = other;
        other = value;
        value = old;
    }
}

struct Accessor
{
    virtual void slot0();
    virtual void slot1();
    virtual Value get(void*);
};

struct Result
{
    void* type;
    Object* value;
    void assign(const Value&);
};

inline void Result::assign(const Value& source)
{
    type = valueType();
    Holder(source).swap(value);
}

struct Descriptor
{
    char unused[24];
    Accessor* accessor;
    void getValue(void*, Result*) const;
};

void Descriptor::getValue(void* instance, Result* result) const
{
    result->assign(accessor->get(instance));
}
