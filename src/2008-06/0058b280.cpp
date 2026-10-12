// from server: 70% by king_originala
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    unsigned char padding[57];
    unsigned char nil;
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Iterator {
    void* owner;
    Node* node;

    Iterator(void* o, Node* n);
    bool equal(const Iterator& other) const;
    void decrement();
};

inline Iterator::Iterator(void* o, Node* n) : owner(o), node(n)
{
}

inline bool Iterator::equal(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return node == other.node;
}

struct Result {
    Iterator position;
    bool inserted;

    Result(const Iterator& p, bool b);
};

inline Result::Result(const Iterator& p, bool b)
    : position(p), inserted(b)
{
}

struct Holder {
    void* owner;
    unsigned char padding[20];
    Node* volatile head;

    Iterator* insert(Iterator* result, bool left, Node* parent,
                     const unsigned int* key);
    Result find_or_insert(const unsigned int* key);
};

Result Holder::find_or_insert(const unsigned int* key)
{
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil) {
        parent = current;
        left = *key < current->key;
        if (left)
            current = current->left;
        else
            current = current->right;
    }

    Iterator position(owner, parent);

    if (left) {
        if (position.equal(Iterator(owner, head->left)))
            return Result(*insert(&position, true, parent, key), true);
        position.decrement();
    }

    if (position.node->key < *key)
        return Result(*insert(&position, left, parent, key), true);

    return Result(position, false);
}
