// from server: 87% by king_originala
extern "C" void (__cdecl * const invalid_parameter_handler)();

struct Container {
    unsigned char padding[16];
    unsigned int *end;
};

struct Iterator {
    void *tag;
    Container **owner;
    unsigned int *position;
};

struct Value {
    unsigned int value;
    void *tag;
};

typedef void (__thiscall *Callback)(void *, Value *);

struct Function {
    Callback callback;
    void *object;
    Function(const Function &other);
};

inline Function::Function(const Function &other)
    : callback(other.callback), object(other.object)
{
}

Function __cdecl process(Iterator first, Iterator last, Function function)
{
    void *tag = first.tag;
    void (__cdecl *handler)() = invalid_parameter_handler;
    Container **owner = first.owner;
    unsigned int *position = first.position;
    volatile Iterator finishStorage = last;
    Iterator &finish = const_cast<Iterator &>(finishStorage);

    for (;;) {
        if (!owner || owner != finish.owner)
            handler();

        if (position == finish.position)
            break;

        Container *container;
        if (!owner) {
            handler();
            container = 0;
        } else {
            container = *owner;
        }

        if (position >= container->end)
            handler();

        Value value;
        value.value = *position;
        value.tag = tag;
        function.callback(function.object, &value);

        if (!owner) {
            handler();
            container = 0;
        } else {
            container = *owner;
        }

        if (position >= container->end)
            handler();

        ++position;
    }

    return function;
}
