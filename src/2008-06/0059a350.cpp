// from server: 97% by king_originala
struct Flag {
    bool value;
    Flag(const Flag &other) : value(other.value) {}
};

struct Error {
    char data[40];
};

struct Callback {
    virtual void invoke(void *, Flag) = 0;
};

struct S {
    char unused;
    __declspec(noreturn) void f(Flag, Callback *);
};

void S::f(Flag flag, Callback *callback)
{
    void *object = 0;
    try {
        if (this != object)
            object = reinterpret_cast<char *>(this) - 0x1a0;
        callback->invoke(object, flag);
        __assume(0);
    }
    catch (Error error) {
        throw;
    }
}
