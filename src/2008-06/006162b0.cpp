// from server: 74% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Node {
    unsigned char padding[12];
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
    void advance();
};

struct Output {
    void append(void* value);
};

Output** __cdecl copy_range(Output** result, Iterator first,
                            Iterator last, Output* output)
{
    for (;;) {
        if (!first.owner || first.owner != last.owner)
            _invalid_parameter_noinfo();

        if (first.node == last.node)
            break;

        if (!first.owner)
            _invalid_parameter_noinfo();

        Container* container = first.owner ? first.owner->container : 0;
        if (first.node == container->sentinel)
            _invalid_parameter_noinfo();

        output->append(first.node->value);
        first.advance();
    }

    *result = output;
    return result;
}
