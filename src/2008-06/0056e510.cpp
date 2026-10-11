// from server: 45% by atomic.potato
struct Inner {
    virtual void f(int, int*);
};

struct Outer {
    char pad[0x18];
    Inner* p;
    int method(int, int);
};

extern "C" void __stdcall sub_5be8a0(int*, int*);

int Outer::method(int a, int b) {
    int tmp = 0;
    p->f(b, &tmp);
    sub_5be8a0(&tmp, &tmp);
    return tmp;
}
