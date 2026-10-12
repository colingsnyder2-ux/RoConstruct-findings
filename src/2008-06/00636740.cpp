// from server: 92% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Value {
    Value();
    virtual ~Value();
};

inline Value::Value() {}

struct BrickValue : Value {
    int color;
    BrickValue(int);
    virtual ~BrickValue();
};

inline BrickValue::BrickValue(int value) : color(value) {}

struct ValueOwner {
    Value* pointer;
    explicit ValueOwner(Value*);
    ~ValueOwner();
    void swap(ValueOwner&);
};

inline ValueOwner::ValueOwner(Value* value) : pointer(value) {}

inline ValueOwner::~ValueOwner()
{
    delete pointer;
}

inline void ValueOwner::swap(ValueOwner& other)
{
    if (this != &other) {
        Value* previous = other.pointer;
        other.pointer = pointer;
        pointer = previous;
    }
}

struct ValueList {
    unsigned int bookkeeping[3];
    ValueOwner* begin;
    ValueOwner* end;
    ValueOwner* capacity;

    ValueList(unsigned int);
    ~ValueList();
};

struct Receiver {
    virtual ~Receiver();
    virtual void apply(const ValueList&);
};

struct S {
    Receiver* receiver;
    void f(int);
};

void S::f(int color)
{
    ValueList values(1);

    if (static_cast<unsigned int>(values.end - values.begin) <= 0U)
        invalid_parameter_noinfo();

    ValueOwner* slot = values.begin;
    {
        ValueOwner replacement(new BrickValue(color));
        replacement.swap(*slot);
    }

    receiver->apply(values);
}
