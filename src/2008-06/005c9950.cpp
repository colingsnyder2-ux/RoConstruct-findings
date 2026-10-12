// from server: 70% by king_originala
struct Value {
    unsigned char storage[24];
    Value(const Value&);
    ~Value();
};

struct Input {
    virtual ~Input();
    const double& get();
};

struct Holder {
    Input* pointer;
    Holder& assign(const Value& value);
};

struct Output {
    void* type;
    Holder value;
};

struct __multiple_inheritance Object;

extern void* valueType();

struct S {
    unsigned char padding[56];
    Value (Object::*method)(double);
    void invoke(Object* object, Output* output, Input* argument);
};

void S::invoke(Object* object, Output* output, Input* argument)
{
    const Value& value = (object->*method)(argument->get());
    output->type = valueType();

    Holder& destination = output->value;
    Holder& source = reinterpret_cast<Holder&>(argument).assign(value);
    if (&source != &destination) {
        Input* old = destination.pointer;
        destination.pointer = source.pointer;
        source.pointer = old;
    }

    if (argument)
        delete argument;
}
