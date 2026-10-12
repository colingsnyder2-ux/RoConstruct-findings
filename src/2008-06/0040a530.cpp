// from server: 98% by king_originala
extern "C" void (__cdecl * _invalid_parameter_noinfo)();

struct Arguments {
    unsigned first;
    unsigned second;

    Arguments(const Arguments& other);
};

inline Arguments::Arguments(const Arguments& other)
{
    const volatile Arguments& source = other;
    unsigned secondValue = source.second;
    unsigned firstValue = source.first;
    second = secondValue;
    first = firstValue;
}

struct Iteration {
    unsigned index;
    unsigned count;
    Iteration* previous;
};

struct S {
    unsigned padding[4];
    unsigned* begin;
    unsigned* end;
    unsigned reserved;
    Iteration* active;

    void dispatch(Arguments args, unsigned value);
    void f(Arguments args);
};

void S::f(Arguments args)
{
    Iteration iteration;
    iteration.index = 0;
    iteration.count = static_cast<unsigned>(end - begin);
    iteration.previous = active;
    active = &iteration;

    if (iteration.count > 0) {
        void (__cdecl * invalid)() = _invalid_parameter_noinfo;
        do {
            unsigned index = iteration.index;
            if (index >= static_cast<unsigned>(end - begin))
                invalid();
            dispatch(args, begin[index]);
            ++iteration.index;
        } while (iteration.index < iteration.count);
    }

    active = iteration.previous;
}
