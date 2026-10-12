// from server: 74% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Node {
    Node* links[3];
    void* value;
};

struct Container {
    char padding[24];
    Node* sentinel;
};

struct Iterator {
    Container** owner;
    Node* node;
    void increment();
};

struct Output {
    void append(void* value);
};

Output** __cdecl copy_range(Output** result, Iterator first,
                            Iterator last, Output* destination)
{
    for (;;) {
        if (!first.owner || first.owner != last.owner)
            invalid_parameter_noinfo();

        if (first.node == last.node)
            break;

        if (!first.owner)
            invalid_parameter_noinfo();

        Container* container = first.owner ? *first.owner : 0;
        if (first.node == container->sentinel)
            invalid_parameter_noinfo();

        destination->append(first.node->value);
        first.increment();
    }

    *result = destination;
    return result;
}
