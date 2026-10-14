// from server: 93% by king_originala
struct Arguments {
    unsigned int second;
    unsigned int first;

    Arguments(const Arguments& other);
};

inline Arguments::Arguments(const Arguments& other)
{
    unsigned int b = other.second;
    unsigned int a = other.first;
    second = b;
    first = a;
}

struct Callback {
    virtual void invoke(void* object, Arguments arguments) = 0;
};

struct S {
    void f(Arguments arguments, Callback* callback);
};

void S::f(Arguments arguments, Callback* callback)
{
    try {
        void* object = 0;
        if (this)
            object = reinterpret_cast<char*>(this) - 0xC4;
        callback->invoke(object, arguments);
        __assume(0);
    }
    catch (...) {
        volatile char storage[40];
        storage[0] = 0;
        throw;
    }
}
