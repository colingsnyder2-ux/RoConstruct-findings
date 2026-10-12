// from server: 92% by king_originala
struct S;
struct P {
    void g(S*);
};

struct S {
    char pad0[88];
    P* p;
    char pad1[84];
    float value;
    void f(float v);
};

void S::f(float v)
{
    if (value != v) {
        value = v;
        if (p)
            p->g(this);
    }
}
