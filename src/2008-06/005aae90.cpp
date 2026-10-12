// from server: 85% by king_originala
extern unsigned int counter;
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Key
{
    static unsigned int index();
};

inline unsigned int Key::index()
{
    static unsigned int value = counter++;
    return value;
}

struct S
{
    unsigned int padding[3];
    void** begin;
    void** end;

    int f();
};

int S::f()
{
    unsigned int size = static_cast<unsigned int>(end - begin);
    if (size > Key::index())
    {
        unsigned int index = Key::index();
        if (index >= static_cast<unsigned int>(end - begin))
            invalid_parameter_noinfo();

        if (begin[index] != 0)
            return 1;
    }
    return 0;
}
