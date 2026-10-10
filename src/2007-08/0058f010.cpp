// from server: 19% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct Inner {
    void ctor();
};

struct Outer {
    void method(int, int, int);

    void method2(int a, int b, int c);
};

void Inner_ctor(Inner* p);

void Outer::method(int a, int b, int c) {
    Inner* p = 0;
    char flag = 0;
    void* mem = malloc(0x140);
    if (mem) {
        Inner_ctor((Inner*)mem);
        p = (Inner*)mem;
    } else {
        p = 0;
    }
    Inner* q = p;
    Inner* r = (Inner*)0;
    (void)r;
    this->method2(a, (int)q, b);
}

void Outer_method2(Outer* self, int a, int b, int c);

void Outer::method2(int a, int b, int c) {
    Inner* p = (Inner*)b;
    Inner* q = (Inner*)c;
    (void)p;
    (void)q;
    (void)a;
}
