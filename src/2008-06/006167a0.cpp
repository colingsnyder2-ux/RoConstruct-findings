// from server: 69% by king_originala
extern void (__cdecl *invalid_parameter)();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned value;
};

struct Container {
    unsigned padding[6];
    Node* head;
};

struct Iterator {
    Container** owner;
    Node* node;

    bool operator!=(const Iterator& other) const;
    unsigned& operator*() const;
    void increment();
};

struct Selection {
    void append(unsigned value);
};

struct CopyTag {};

extern void __cdecl copy_tail(
    void* result,
    Iterator first,
    Iterator last,
    Selection* output,
    Selection* outputCopy,
    Selection* outputEnd,
    CopyTag tag);

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter();
    return node != other.node;
}

__forceinline unsigned& Iterator::operator*() const
{
    if (!owner)
        invalid_parameter();
    Container* container = owner ? *owner : 0;
    if (node == container->head)
        invalid_parameter();
    return node->value;
}

void* __cdecl difference(
    void* result,
    Iterator first,
    Iterator last,
    Iterator second,
    Iterator secondLast,
    Selection* output)
{
    while (first != last && second != secondLast) {
        if (*first < *second) {
            output->append(*first);
            first.increment();
        } else if (*second < *first) {
            second.increment();
        } else {
            first.increment();
            second.increment();
        }
    }

    copy_tail(result, first, last, output, output, output, CopyTag());
    return result;
}
