// from server: 87% by king_originala
struct Text {
    const char *data;
    ~Text();
};

struct Context {
    void *reserved;
    struct Service *service;
};

struct Service {
    void prepare();
};

extern Context *getContext();

struct S;

struct VTable {
    void *reserved[109];
    int (__thiscall *invoke)(S *, int, int, int, int, const char *);
};

struct S {
    VTable *vtable;
    int f(int, int, int, int, Text);
};

int S::f(int a, int b, int c, int d, Text text)
{
    getContext()->service->prepare();
    return vtable->invoke(this, a, b, c, d, text.data);
}
