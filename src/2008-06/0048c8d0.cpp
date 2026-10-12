// from server: 68% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    signed char key;
    unsigned char color;
    unsigned char nil;
};

struct Iterator
{
    void* owner;
    Node* node;

    void decrement();
};

struct Result
{
    Iterator first;
    bool second;

    Result(const Iterator&, bool);
};

inline Result::Result(const Iterator& position, bool inserted)
    : first(position), second(inserted)
{
}

struct Tree
{
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator insert(bool, Node*, const signed char*);
    Result findOrInsert(const signed char*);
};

Result Tree::findOrInsert(const signed char* key)
{
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil)
    {
        parent = current;
        left = *key < current->key;
        current = left ? current->left : current->right;
    }

    Iterator position;
    position.owner = owner;
    position.node = parent;

    if (left)
    {
        Node* first = head->left;
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (parent == first)
            return Result(insert(true, parent, key), true);

        position.decrement();
    }

    if (position.node->key < *key)
        return Result(insert(left, parent, key), true);

    return Result(position, false);
}
