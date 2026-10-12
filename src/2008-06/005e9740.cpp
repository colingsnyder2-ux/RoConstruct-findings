// from server: 76% by king_originala
struct Callback {
    virtual void invoke(void *, int) = 0;
};

struct S {
    void f(int value, Callback *callback);
};

void S::f(int value, Callback *callback)
{
    volatile char storage[40];
    void *base = 0;
    try {
        if (this != base)
            base = reinterpret_cast<char *>(this) - 0x40;
        callback->invoke(base, value);
        storage[0] = 0;
    }
    catch (...) {
        throw;
    }
}
