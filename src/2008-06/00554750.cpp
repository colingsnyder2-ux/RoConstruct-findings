// from server: 100% by Gemini
struct Callback {
    virtual void invoke(void *, void *) = 0;
};

struct S {
    void f(void *, Callback *);
};

void S::f(void *a, Callback *callback)
{
    volatile char scratch[40];
    try {
        void *owner = 0;
        if (this)
            owner = reinterpret_cast<char *>(this) - 0x190;
        callback->invoke(owner, a);
        __assume(0);
    }
    catch (...) {
        scratch[0] = 0;
    }
}
