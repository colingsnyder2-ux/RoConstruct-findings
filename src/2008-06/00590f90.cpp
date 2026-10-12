// from server: 90% by king_originala
void* __cdecl operator new(unsigned int);

struct Arguments;

struct Proxy {
    Arguments* owner;
    Proxy(Arguments* p) : owner(p) {}
};

struct Entry {
    void* object;
    void* ownership;
};

struct Arguments {
    Proxy* proxy;
    unsigned int unused[2];
    Entry* first;
    Entry* last;
    Entry* limit;

    Arguments() : proxy(new Proxy(this)), first(0), last(0), limit(0) {}
    ~Arguments();
};

struct Bounds {
    float values[6];

    Bounds() {}
    Bounds(const Bounds& b) {
        values[0] = b.values[0];
        values[1] = b.values[1];
        values[2] = b.values[2];
        values[3] = b.values[3];
        values[4] = b.values[4];
        values[5] = b.values[5];
    }
};

struct Result {
    void finish();
};

struct Target {
    virtual void unused();
    virtual Result* update(Bounds, void*, int);
};

struct Root {
    char padding[0x288];
    Target target;
    char gap[0x48];
    unsigned int context;

    void apply(void*, Arguments*);
    void collect(void*, Arguments*, void*);
    void run(void*, void*);
};

extern void* __cdecl getCharacter(Root*);
extern void __cdecl calculateBounds(Bounds*, Arguments*);

void Root::run(void* argument, void* extra)
{
    Arguments arguments;

    if (getCharacter(this))
        apply(argument, &arguments);
    else
        collect(argument, &arguments, extra);

    if (static_cast<unsigned int>(arguments.last - arguments.first) > 0) {
        Bounds bounds;
        calculateBounds(&bounds, &arguments);
        target.update(bounds, &context, 1)->finish();
    }
}
