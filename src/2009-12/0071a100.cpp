// from server: 86% by atomic.potato
struct Inner {
    virtual int f();
    char pad[4];
    Inner* next;
    void g(int);
};

struct Outer {
    char pad[0xd8];
    Inner* inner;
    void g(int);
};

void Outer::g(int x) {
    Inner* p = inner;
    while (p->f() != 9) {
        p = p->next;
    }
    p->g(x);
}
