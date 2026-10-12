// from server: 82% by king_originala
struct Callback {
    virtual void invoke(void *, void *) = 0;
};

struct S {
    void f(void *, Callback *);
};

void S::f(void *argument, Callback *callback)
{
    try {
        void *object = this ? reinterpret_cast<char *>(this) - 0x130 : 0;
        callback->invoke(object, argument);
    } catch (...) {
        volatile char scratch[40];
        scratch[0] = 0;
    }
}
