// from server: 74% by king_originala
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
    try {
        void* owner = 0;
        if (this)
            owner = (char*)this - 0x344;
        callback->invoke(owner, argument);
    }
    catch (Exception exception) {
        throw;
    }
}
