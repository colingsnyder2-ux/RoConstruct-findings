// from server: 92% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Node {
    Node* next;
    unsigned char padding[20];
    Node* sentinel;
};

struct Position {
    Node* owner;
    Node* node;
};

struct Iterator {
    Node* owner;
    Node* node;
    Node* endOwner;
    Node* endNode;

    void advance();
};

struct Tag {
    unsigned char value;
};

struct Action {
    unsigned int state[4];

    void apply(Tag, void*, void**, int);
};

struct Functor {
    unsigned int bound[2];
    Action action;
};

Functor __cdecl run(Position first, Position last, Functor functor)
{
    void (__cdecl * const invalid)() = invalid_parameter_noinfo;
    void* value;
    Tag tag;
    Iterator current;
    current.owner = first.owner;
    current.node = first.node;
    current.endOwner = last.owner;
    current.endNode = last.node;

    Node* owner = current.owner;
    Node* node = current.node;

    for (;;) {
        if (!owner || owner != current.endOwner)
            invalid();

        if (node == current.endNode)
            break;

        if (!owner)
            invalid();
        else
            owner = owner->next;

        if (node == owner->sentinel)
            invalid();

        tag.value = 0;
        value = reinterpret_cast<unsigned char*>(node) + 12;
        functor.action.apply(tag, &functor, &value, 0);
        current.advance();
        node = current.node;
        owner = current.owner;
    }

    return functor;
}
