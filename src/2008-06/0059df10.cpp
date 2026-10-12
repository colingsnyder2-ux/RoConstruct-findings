// from server: 89% by king_originala
extern char descriptor;

struct S {
    char padding[492];
    float value;

    void notify(const void*);
    void f(float);
};

void S::f(float v)
{
    if (value != v) {
        value = v;
        notify(&descriptor);
    }
}
