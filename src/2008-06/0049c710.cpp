// from server: 86% by king_originala
struct Mutex {
    void* handle;
    unsigned char kind;
    void acquire();
    void release();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->acquire();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->release();
}

struct Result {
    void* first;
    void* second;
    Result(const Result&);
};

void __cdecl callback();
Result __cdecl prepare(void*, void*, void*, void**, void (__cdecl*)(), int);

struct Arguments {
    void* first;
    char padding[16];
    void** data;
};

struct Object {
    char padding[32];
    Mutex mutex;
    void apply(int);
};

struct Completion {
    void finish();
};

struct S {
    Object* object;
    void* unused;
    Completion* completion;
    void f(int, Arguments*);
};

void S::f(int value, Arguments* args)
{
    prepare(args->first, *args->data, args->first, args->data, callback, value);
    {
        Guard guard(&object->mutex);
        object->apply(value);
    }
    completion->finish();
}
