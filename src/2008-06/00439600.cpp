// from server: 83% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    char padding[0xB0];
    Node **begin;
    Node **end;
};

struct Listener {
    void resolve(Node **);
};

struct S {
    int header;
    Listener listener;

    void f(Node *);
};

void S::f(Node *node)
{
    listener.resolve(&node);

    Node **last = node->end;
    if (node->begin > last)
        _invalid_parameter_noinfo();

    Node **first = node->begin;
    if (first > node->end)
        _invalid_parameter_noinfo();

    while (first != last) {
        f(*first);
        ++first;
    }
}
