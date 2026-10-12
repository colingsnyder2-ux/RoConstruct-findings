// from server: 88% by king_originala
struct Value {
    float data[12];
};

struct Provider {
    void get(Value* out);
};

struct Link2 {
    char pad0[0xA0];
    Provider* provider;
};

struct Link1 {
    char pad0[0x1C];
    Link2* next;
};

struct Base1 { int a; };
struct Base2 { int b; };

struct Callback : Base1, Base2 {
    float evaluate();
};

struct Consumer {
    void process(const Value* value, float depth, float scale);
};

struct Container {
    char pad0[8];
    Consumer consumer;
};

struct Argument {
    char pad0[0x18];
    Container* container;
    char pad1C[8];
    Link1* link;
    char pad28[0x28];
    float cached;
    bool dirty;
    char pad55[3];
    Callback* object;
    char pad5C[4];
    float (Callback::*callback)();
};

extern float scale;

struct S {
    void f(Argument* arg);
};

void S::f(Argument* arg)
{
    Value value;
    arg->link->next->provider->get(&value);
    if (arg->dirty) {
        arg->cached = (arg->object->*arg->callback)();
        arg->dirty = false;
    }
    arg->container->consumer.process(&value, arg->cached, scale);
}
