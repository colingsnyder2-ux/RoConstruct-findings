// from server: 78% by king_originala
struct Argument
{
    char padding[0x178];
    unsigned long value;
    bool disabled;
};

struct S
{
    char padding[0x28c];
    unsigned long value;

    bool f(const Argument* argument);
};

bool S::f(const Argument* argument)
{
    if (argument->disabled)
        return false;
    return value != argument->value;
}
