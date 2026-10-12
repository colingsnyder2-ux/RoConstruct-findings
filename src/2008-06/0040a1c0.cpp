// from server: 72% by king_originala
struct Arguments {
    unsigned int first;
    unsigned int second;

    Arguments(const Arguments& other);
    ~Arguments();
};

inline Arguments::Arguments(const Arguments& other)
    : first(other.first), second(other.second)
{
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
    }
    catch (...) {
        volatile char storage[40];
        storage[0] = 0;
        throw;
    }
}
