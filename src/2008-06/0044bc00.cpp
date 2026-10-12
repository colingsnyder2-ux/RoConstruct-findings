// from server: 85% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Container
{
    unsigned char padding[16];
    unsigned long* end;
};

struct Iterator
{
    unsigned long context;
    Container** owner;
    unsigned long* position;
};

struct Value
{
    unsigned long value;
    unsigned long context;
    Value(unsigned long v, unsigned long c);
};

inline Value::Value(unsigned long v, unsigned long c)
    : value(v), context(c)
{
}

typedef void (__cdecl *Callback)(Value);

Callback __cdecl visit(Iterator first, Iterator last, Callback callback)
{
    Iterator current = first;
    Iterator finish = last;

    for (;;)
    {
        if (!current.owner || current.owner != finish.owner)
            invalid_parameter_noinfo();

        if (current.position == finish.position)
            break;

        Container* container;
        if (current.owner)
            container = *current.owner;
        else
        {
            invalid_parameter_noinfo();
            container = 0;
        }

        if (current.position >= container->end)
            invalid_parameter_noinfo();

        callback(Value(*current.position, current.context));

        if (current.owner)
            container = *current.owner;
        else
        {
            invalid_parameter_noinfo();
            container = 0;
        }

        if (current.position >= container->end)
            invalid_parameter_noinfo();

        ++current.position;
    }

    return callback;
}
