// from server: 83% by king_originala
struct Callback {
    virtual void invoke(void*, void*) = 0;
};

struct Exception {
    char data[40];
};

struct S {
    void f(void*, Callback*);
};

void S::f(void* argument, Callback* callback)
{
    void* object = 0;
    try {
        if (this)
            object = reinterpret_cast<char*>(this) - 0x190;
        callback->invoke(object, argument);
    }
    catch (volatile Exception exception) {
        (void)exception.data[0];
        throw;
    }
}
