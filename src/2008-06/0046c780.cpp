// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Guard {
    int saved;
    int* target;
    void* token;
    int active;
    Guard(void*);
    ~Guard();
};

extern "C" void* __cdecl current_context();
extern "C" void __stdcall release_context(int, void*);

inline Guard::~Guard()
{
    if (target)
        target[1] = saved;
    if (active)
        release_context(0, token);
}

struct Stream {
    char storage[136];
    Stream();
    ~Stream();
    void open(const char*);
};

extern void (__thiscall* stream_construct)(Stream*, int);
extern void (__thiscall* stream_destroy)(Stream*);
extern void (__thiscall* stream_open)(Stream*, const char*);

inline Stream::Stream()
{
    stream_construct(this, 1);
}

inline Stream::~Stream()
{
    stream_destroy(this);
}

inline void Stream::open(const char* name)
{
    stream_open(this, name);
}

struct Text {
    void* data;
    Text(const char*);
    ~Text();
    const char* convert(int, int);
};

extern Text* (__thiscall* text_construct)(Text*, const char*);
extern void (__thiscall* text_destroy)(Text*);
extern const char* (__thiscall* text_convert)(Text*, int, int);

inline Text::Text(const char* value)
{
    text_construct(this, value);
}

inline Text::~Text()
{
    text_destroy(this);
}

inline const char* Text::convert(int a, int b)
{
    return text_convert(this, a, b);
}

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Scope {
    char storage[16];
    Scope(Shared);
    ~Scope();
};

struct Owned {
    void destroy();
};

extern "C" void __cdecl free_owned(void*);

struct Owner {
    Owned* object;
    ~Owner();
};

inline Owner::~Owner()
{
    if (object) {
        Owned* p = object;
        p->destroy();
        free_owned(p);
    }
}

struct S {
    char padding[36];
    Shared shared;
    Owner acquire();
    int write(Owned*, Stream*);
};

int __stdcall function(S* source, const char* name)
{
    try {
        Guard guard(current_context());
        Stream stream;
        stream.open(Text(name).convert(34, 64));
        Scope scope(source->shared);
        return source->write(source->acquire().object, &stream);
    }
    catch (...) {
        return 0;
    }
}
