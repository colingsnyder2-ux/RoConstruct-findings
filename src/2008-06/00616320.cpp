// from server: 74% by king_originala
struct Node {
    char padding[12];
    void* value;
};

struct Container {
    char padding[24];
    Node* head;
};

struct Iterator {
    Container** owner;
    Node* node;

    Iterator& increment();
};

struct Function {
    void apply(void* value);
};

extern "C" void (__cdecl* _imp__invalid_parameter_noinfo)();

Function** __cdecl run(Function** result, Iterator first,
                      Iterator last, Function* function)
{
    for (;;) {
        if (!first.owner || first.owner != last.owner)
            _imp__invalid_parameter_noinfo();

        if (first.node == last.node)
            break;

        if (!first.owner)
            _imp__invalid_parameter_noinfo();

        Container* container = first.owner ? *first.owner : 0;
        if (first.node == container->head)
            _imp__invalid_parameter_noinfo();

        function->apply(first.node->value);
        first.increment();
    }

    *result = function;
    return result;
}
