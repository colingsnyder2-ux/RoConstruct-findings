// from server: 85% by king_originala
extern "C" void (__cdecl* const invalidParameter)();

struct Flag {
    bool value;
    Flag(bool v);
};

inline Flag::Flag(bool v) : value(v)
{
}

struct Iteration {
    unsigned int index;
    unsigned int count;
    Iteration* previous;
};

struct Descriptor {
    unsigned char padding[16];
    void** first;
    void** last;
    void** capacity;
    Iteration* active;

    void visit(Flag value, void* entry);
    void apply(Flag value);
};

void Descriptor::apply(Flag value)
{
    Iteration iteration = {
        0,
        static_cast<unsigned int>(last - first),
        active
    };

    active = &iteration;

    if (iteration.count) {
        void (__cdecl* handler)() = invalidParameter;
        do {
            unsigned int index = iteration.index;
            if (index >= static_cast<unsigned int>(last - first))
                handler();

            visit(Flag(value.value), first[index]);
            ++iteration.index;
        } while (iteration.index < iteration.count);
    }

    active = iteration.previous;
}
