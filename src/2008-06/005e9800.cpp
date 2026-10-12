// from server: 81% by king_originala
struct Callback {
    virtual void invoke(void *, int) = 0;
};

struct S {
    void f(int value, Callback *callback);
};

void S::f(int value, Callback *callback)
{
    try {
        void *object = 0;
        if (this)
            object = reinterpret_cast<char *>(this) - 96;
        callback->invoke(object, value);
    }
    catch (...) {
        volatile char storage[40];
        storage[0] = 0;
        throw;
    }
}
