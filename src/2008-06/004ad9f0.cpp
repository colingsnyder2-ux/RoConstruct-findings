// from server: 83% by king_originala
extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Node;

struct Tree {
    char reserved[24];
    Node* end;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void advance();
};

struct Function {
    void (__cdecl *callback)(void*);
    void* state;
    Function();
};

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    Iterator finish = last;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    Owner* owner = first.owner;
    Node* node = first.node;
    Iterator current = first;

    for (;;) {
        if (!owner || owner != finish.owner)
            invalid();

        if (node == finish.node)
            break;

        Tree* tree = reinterpret_cast<Tree*>(owner);
        if (!owner)
            invalid();
        else
            tree = owner->tree;

        if (node == tree->end)
            invalid();

        function.callback(reinterpret_cast<char*>(node) + 12);
        current.advance();
        node = current.node;
        owner = current.owner;
    }

    return function;
}
