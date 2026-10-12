// from server: 89% by king_originala
extern char descriptor;

struct S {
    char padding[0x1e8];
    float value;

    void notify(void*);
    void set(float);
};

void S::set(float v)
{
    if (value != v) {
        value = v;
        notify(&descriptor);
    }
}
