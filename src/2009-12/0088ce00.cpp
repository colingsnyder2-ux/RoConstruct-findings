// from server: 47% by atomic.potato
extern char G;
char* func_0088b010();

extern "C" void __stdcall func_0098dec0();
extern "C" void* __stdcall func_0098de80(void*);
void* func_7f3c3e(char*);

struct Inner {
    char pad0[0x178];
    int f178;
    int f17c;
    char pad180[0xc];
    char f18c[0x18];
    int f1a4;
    int f1a8;
    int f1ac;
};

struct Outer {
    char pad0[0x178];
    int f178;
    int f17c;
    char pad180[0x28];
    int f1a8;
    int f1ac;
    void sub_7f8c20(int, int);
    void sub_88b7f0(int);
    void sub_88bda0(void*);
    void sub_88b660(int);
    void sub_88c4a0(void*);
    void sub_88c3f0(void*);
};

struct S {
    char pad0[0x1a8];
    int f1a8;
    int f1ac;
    void f(int, int);
};

void S::f(int a, int b)
{
    Outer* self = (Outer*)this;
    self->sub_7f8c20(a, b);
    char* p = func_0088b010();
    Inner* o = (Inner*)func_7f3c3e(p);
    if (o) {
        self->f1a8 = o->f1a8;
        void* tmp;
        self->sub_88c3f0(&tmp);
        self->sub_88c4a0(tmp);
        func_0098dec0();
        self->f178 = o->f178;
        self->sub_88b7f0(o->f17c);
        void* q = func_0098de80(o->f18c);
        self->sub_88bda0(q);
        self->sub_88b660(o->f1a4);
        self->f1ac = o->f1ac;
    }
}
