// from server: 81% by king_originala
extern "C" void (__cdecl* invalid_parameter_noinfo)();

typedef void (__cdecl* ErrorHandler)();

struct Node {
    Node* links[3];
    unsigned int value;
};

struct Container {
    unsigned char padding[24];
    Node* sentinel;
};

struct Iterator {
    Container** owner;
    Node* node;

    void advance();
    unsigned int& value(ErrorHandler error) const;
    bool different(const Iterator& other, ErrorHandler error) const;
};

struct Output {
    void append(unsigned int value);
};

struct Checked {
    bool value;
};

extern void __cdecl finish(void* result, Iterator first, Iterator last,
                           Output* output1, Output* output2, Output* output3,
                           Checked checked);

__forceinline bool Iterator::different(const Iterator& other,
                                      ErrorHandler error) const
{
    if (!owner || owner != other.owner)
        error();
    return node != other.node;
}

__forceinline unsigned int& Iterator::value(ErrorHandler error) const
{
    if (!owner)
        error();

    Container* container = owner ? *owner : 0;
    if (node == container->sentinel)
        error();

    return node->value;
}

void* __cdecl difference(void* result, Iterator first, Iterator last,
                        Iterator second, Iterator secondLast, Output* output)
{
    ErrorHandler error = invalid_parameter_noinfo;

    while (first.different(last, error) &&
           second.different(secondLast, error)) {
        if (first.value(error) < second.value(error)) {
            output->append(first.value(error));
            first.advance();
        } else if (second.value(error) < first.value(error)) {
            second.advance();
        } else {
            first.advance();
            second.advance();
        }
    }

    Checked checked;
    checked.value = false;
    finish(result, first, last, output, output, output, checked);
    return result;
}
