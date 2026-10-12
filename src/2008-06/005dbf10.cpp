// from server: 79% by king_originala
extern char descriptor;

struct S {
    char padding[0x1ac];
    float value;

    void notify(const void*);
    void setValue(float);
};

void S::setValue(float v)
{
    if (v != value) {
        value = v;
        notify(&descriptor);
    }
}
