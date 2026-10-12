// from server: 71% by king_originala
extern "C" void (__cdecl *invalid_parameter)();

struct Tree
{
    unsigned char padding[24];
    void *sentinel;
};

struct Owner
{
    Tree *tree;
};

struct Iterator
{
    Owner *owner;
    void *node;

    void increment();
};

typedef void (__thiscall *Callback)(void *, void *);

struct Functor
{
    Callback callback;
    void *object;
};

Functor func_00423b10(Iterator first, Iterator last, Functor function)
{
    Iterator current = first;
    Iterator finish = last;
    void (__cdecl * const fail)() = invalid_parameter;

    for (;;)
    {
        Owner *owner = current.owner;
        void *node = current.node;

        if (!owner || owner != finish.owner)
            fail();

        if (node == finish.node)
            break;

        Tree *tree = reinterpret_cast<Tree *>(owner);
        if (!owner)
            fail();
        else
            tree = owner->tree;

        if (node == tree->sentinel)
            fail();

        function.callback(function.object,
                          static_cast<unsigned char *>(node) + 12);
        current.increment();
    }

    return function;
}
