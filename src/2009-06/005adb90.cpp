// from server: 41% by atomic.potato
struct Inner {
    int a;
    int b;
};

struct Outer {
    Inner get(int x);
};

struct S {
    Inner f(int a, int b);
};

Inner Outer::get(int x) {
    Inner r;
    r.a = 0;
    r.b = 0;
    return r;
}

extern "C" Inner __stdcall helper(Outer* o, int x);

Inner S::f(int a, int b) {
    Outer* o = (Outer*)this;
    return helper(o, b);
}
