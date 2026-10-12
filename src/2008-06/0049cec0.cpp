// from server: 46% by king_originala
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
        if (control) {
            volatile long* count = &control->strong;
            _InterlockedExchangeAdd(count, 1);
        }
    }

    ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
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
    unsigned char padding[79];
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
    Range(const Range&);
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
    Object* destination = handle.object;
    Object* source = object;
    Callable* callable =
        reinterpret_cast<Callable*>(
            static_cast<unsigned char*>(source->callable) + 4);

    callable->invoke(
        result,
        Range(destination->text.begin(), source->text.end(),
              &callback, &flag.value),
        Range(destination->text.end(), source->text.end(),
              &callback, &flag.value));

    return result;
}
