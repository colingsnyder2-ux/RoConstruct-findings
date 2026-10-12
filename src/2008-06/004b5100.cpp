// from server: 94% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }

extern "C" void __cdecl callback();
bool __cdecl func_0060a2f0();

struct Pair {
    void (__cdecl* function)();
    void* argument;
};

struct S {
    unsigned long data[90];

    void initialize();
    S* construct(void* argument);
};

S* S::construct(void* argument)
{
    initialize();

    Pair value;
    value.function = callback;

    data[0]  = 0x824e9c;
    data[4]  = 0x824e8c;
    data[5]  = 0x824e84;
    data[8]  = 0x824e7c;
    data[9]  = 0x824e6c;
    data[17] = 0x824e5c;
    data[25] = 0x824e4c;
    data[33] = 0x824e3c;
    data[41] = 0x824e2c;
    data[49] = 0x824e1c;

    value.argument = argument;
    data[86] = 0;

    if (!reinterpret_cast<bool (__cdecl*)(Pair*)>(func_0060a2f0)(&value)) {
        new (data + 88) Pair(value);
        data[86] = 0x824a2c;
    } else {
        data[86] = 0;
    }

    return this;
}
