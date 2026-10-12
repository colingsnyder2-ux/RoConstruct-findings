// from server: 52% by king_originala
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
    void f(int);
};

void S::f(int)
{
    context->prepare();
    resolver.get(1)->setState(2);
}
