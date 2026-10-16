// from server: 62% by colin
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
    Result r = iface->get(arg2);
    *(int*)((char*)this + 16) = r.value;
    r.~Result();
}
