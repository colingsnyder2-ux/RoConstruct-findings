// from server: 79% by king_originala
extern "C" void (__cdecl *invalid_parameter)();

struct Node {
    unsigned char padding[12];
    void *object;
};

struct Container {
    unsigned char padding[24];
    Node *sentinel;
};

struct Owner {
    Container *container;
};

struct Iterator {
    Owner *owner;
    Node *node;

    Iterator &advance();
};

typedef void (__thiscall *Callback)(void *, void *);

struct Function {
    Callback callback;
    void *argument;

    Function();
};

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    struct State {
        Iterator current;
        Iterator finish;
    };

    State state;
    state.current = first;
    state.finish = last;

    void (__cdecl *const fail)() = invalid_parameter;
    Owner *const finishOwner = state.finish.owner;
    Owner *owner = state.current.owner;
    Node *node = state.current.node;

    for (;;) {
        if (!owner || owner != finishOwner)
            fail();

        if (node == state.finish.node)
            break;

        if (owner)
            goto dereference;
        fail();

    check:
        if (node == reinterpret_cast<Container *>(owner)->sentinel)
            fail();

        function.callback(node->object, function.argument);
        state.current.advance();
        node = state.current.node;
        owner = state.current.owner;
    }

    return function;

dereference:
    owner = reinterpret_cast<Owner *>(owner->container);
    goto check;
}
