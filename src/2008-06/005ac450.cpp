// from server: 92% by colin
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    void* value;
};

struct Container {
    unsigned char padding[24];
    Node* sentinel;
};

struct Owner {
    Container* container;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void increment();
};

typedef void (__thiscall *Callback)(void*, void*);

struct Function {
    Callback callback;
    int adjustment;
    char* object;
    unsigned int extra;
};

Function __cdecl for_each(Iterator begin, Iterator end, Function function)
{
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    Iterator current = begin;
    Iterator finish = end;
    Owner* owner = current.owner;
    Node* node = current.node;

    for (;;) {
        if (!owner || owner != finish.owner)
            invalid();

        if (node == finish.node)
            break;

        if (!owner)
            invalid();
        else
            owner = reinterpret_cast<Owner*>(owner->container);

        if (node == reinterpret_cast<Container*>(owner)->sentinel)
            invalid();

        function.callback(function.object + function.adjustment, node->value);
        current.increment();
        node = current.node;
        owner = current.owner;
    }

    return function;
}
