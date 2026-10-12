// from server: 94% by king_originala
extern void __cdecl callback();
extern bool __cdecl func_0060a2f0();

struct Pair {
    void (__cdecl *function)();
    unsigned long argument;
};

struct S {
    unsigned long words[90];

    void initialize();
    S* construct(unsigned long argument);
};

S* S::construct(unsigned long argument)
{
    initialize();

    Pair pair;
    pair.function = callback;

    words[0] = 0x00837f1c;
    words[4] = 0x00837f10;
    words[5] = 0x00837f08;
    words[8] = 0x00837f00;
    words[9] = 0x00837ef0;
    words[17] = 0x00837ee0;
    words[25] = 0x00837ed0;
    words[33] = 0x00837ec0;
    words[41] = 0x00837eb0;
    words[49] = 0x00837ea0;

    pair.argument = argument;
    words[86] = 0;

    if (!((bool (__cdecl *)(Pair*))func_0060a2f0)(&pair)) {
        Pair* destination = reinterpret_cast<Pair*>(&words[88]);
        if (destination) {
            destination->function = pair.function;
            destination->argument = pair.argument;
        }
        words[86] = 0x00837954;
        return this;
    }

    words[86] = 0;
    return this;
}
