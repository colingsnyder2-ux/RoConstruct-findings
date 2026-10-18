// from server: 65% by colin
struct Result {
    char padding[28];
    int value;
    Result(const Result&);
    ~Result();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Result get(int) = 0;
};

struct S {
    char padding[24];
    Interface *iface;
    void f(void *arg1, int arg2);
};

void S::f(void *arg1, int arg2) {
    Result r = ((Interface *)arg1)->get(arg2);
    char buf[32];
    *(Result *)buf = r;
    *(int *)(buf + 28) = *(int *)((char *)&r + 28);
    ((Interface *)arg1)->slot0();
    r.~Result();
}
