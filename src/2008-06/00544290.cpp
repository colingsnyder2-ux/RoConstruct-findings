// from server: 82% by king_originala
struct W {
    void *p;
    W(const W &);
};

struct B {
    unsigned char data[20];
    B(int, W);
};

struct S : B {
    W value;
    S(int, W);
};

#pragma optimize("", off)
S::S(int n, W w)
    : B(n, w), value(w)
{
}
