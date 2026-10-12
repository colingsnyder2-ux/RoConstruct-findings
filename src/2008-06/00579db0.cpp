// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern void (__thiscall* string_copy_ctor)(String*, const String&);
extern void (__thiscall* string_dtor)(String*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const String& other) {
        string_copy_ctor(this, other);
    }

    ~String() {
        string_dtor(this);
    }

    const char* c_str() const {
        const char* p = pointer;
        if (capacity < 16)
            p = buffer;
        return p;
    }
};

struct Input {
    String text;
    int value;
};

struct Destroyable {
    virtual ~Destroyable();
};

struct Resource : virtual Destroyable {
};

struct TemporaryPtr {
    mutable Resource* pointer;

    ~TemporaryPtr() {
        if (pointer)
            delete pointer;
    }
};

struct ResourcePtr {
    Resource* pointer;

    ResourcePtr(const TemporaryPtr& other) {
        Resource* p = other.pointer;
        other.pointer = 0;
        pointer = p;
    }

    ~ResourcePtr() {
        if (pointer)
            delete pointer;
    }
};

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct LogPtr {
    void* pointer;
    RefCount* count;

    void* get() const {
        return pointer;
    }

    ~LogPtr() {
        if (count) {
            RefCount* p = count;
            if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                    p->destroy();
            }
        }
    }
};

struct Factory {
    TemporaryPtr create(Input input);
};

struct Metrics {
    char padding[0x410];
    double preparation;
    double loading;
    double completion;

    void finish();
};

struct S;

struct Loader {
    unsigned int state;
    void run(Resource*, S*);
};

extern double __cdecl clock_seconds();
extern LogPtr __cdecl get_log();
extern void __cdecl write_log(void*, int, const char*, const char*);

struct S {
    char padding[0x204];
    Metrics* metrics;

    Factory* factory();
    Factory* get_factory() {
        return this ? factory() : 0;
    }
    void load(Input input);
};

void S::load(Input input) {
    double start = clock_seconds();
    ResourcePtr resource(get_factory()->create(input));
    double prepared = clock_seconds();

    write_log(get_log().get(), 1, "DataModel Loading %s", input.text.c_str());

    Loader loader;
    loader.run(resource.pointer, this);

    double loaded = clock_seconds();
    metrics->finish();
    double finished = clock_seconds();

    metrics->preparation = prepared - start;
    metrics->loading = loaded - prepared;
    metrics->completion = finished - loaded;
}
