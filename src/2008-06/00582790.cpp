// from server: 56% by colin
struct Context {
    void prepare();
};

struct Result {
    void setState(int);
};

struct Resolver {
    Result* get(int);
};

struct S {
    char padding[0x0C];
    Context* context;
    Resolver resolver;
    void f();
};

void S::f()
{
    Context* c = context;
    c->prepare();
    Result* r = resolver.get(1);
    r->setState(2);
}
