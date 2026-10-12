// from server: 82% by king_originala
struct Callback {
    virtual void invoke(void* object, void* argument) = 0;
};

struct S {
    void f(void* argument, Callback* callback);
};

void S::f(void* argument, Callback* callback)
{
    try {
        void* object = this ? reinterpret_cast<char*>(this) - 0x344 : 0;
        callback->invoke(object, argument);
    }
    catch (...) {
        volatile char storage[40];
        storage[0] = 0;
    }
}
