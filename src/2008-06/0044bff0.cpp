// from server: 89% by king_originala
extern void (__cdecl* invalidParameter)();

struct Container {
    unsigned char padding[16];
    unsigned int* end;
};

struct Iterator {
    void* owner;
    Container** proxy;
    unsigned int* position;
};

struct Value {
    unsigned int value;
    void* owner;
};

struct Function {
    void (__cdecl* callback)(void*, void*, Value*);
    void* first;
    void* second;
};

Function __cdecl forEach(Iterator first, Iterator last, Function function)
{
    Iterator current = first;
    Iterator finish = last;
    void (__cdecl* const error)() = invalidParameter;

    for (;;) {
        if (!current.proxy || current.proxy != finish.proxy)
            error();

        if (current.position == finish.position)
            break;

        Container* container;
        if (!current.proxy) {
            error();
            container = 0;
        } else {
            container = *current.proxy;
        }

        if (current.position >= container->end)
            error();

        Value value;
        value.value = *current.position;
        value.owner = current.owner;
        function.callback(function.first, function.second, &value);

        if (!current.proxy) {
            error();
            container = 0;
        } else {
            container = *current.proxy;
        }

        if (current.position >= container->end)
            error();

        ++current.position;
    }

    return function;
}
