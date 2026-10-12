// from server: 45% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    unsigned char data[28];
    String(const String&);
    ~String();
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other) : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    ~Shared()
    {
        if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
};

struct TextSource {
    String begin();
    String end();
};

struct Object {
    unsigned char prefix[8];
    TextSource text;
    unsigned char padding[48];
    void* callable;
};

struct S;

struct Handle {
    Object* object;
    unsigned int state;
    Handle(S*);
    ~Handle();
};

struct Callback {
    unsigned char data[28];
    Callback(String, Shared);
    ~Callback();
};

struct Flag {
    bool value;
    Flag() : value(false) {}
    ~Flag()
    {
        if (value)
            value = false;
    }
};

struct Range {
    unsigned char data[64];
    Range(String, String, Callback*, bool*);
};

struct Callable {
    void invoke(void*, Range, Range);
};

struct S {
    Object* object;
    void* f(void*, String, Shared);
};

void* S::f(void* result, String text, Shared owner)
{
    Handle handle(this);
    Callback callback(text, owner);
    Flag flag;
    Object* source = object;
    Callable* callable =
        reinterpret_cast<Callable*>(static_cast<unsigned char*>(source->callable) + 4);

    callable->invoke(
        result,
        Range(handle.object->text.begin(), source->text.end(),
              &callback, &flag.value),
        Range(handle.object->text.end(), source->text.end(),
              &callback, &flag.value));

    return result;
}
