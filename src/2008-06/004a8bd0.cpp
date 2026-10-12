// from server: 63% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Key {
    bool less(const Key& other) const;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    unsigned char payload[31];
    unsigned char color;
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;
    void decrement();
};

struct Result {
    Iterator position;
    bool inserted;

    Result(const Iterator& p, bool b) : position(p), inserted(b) {}
};

struct Tree {
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator insert(bool left, Node* parent, const Key& key);
    Result insertUnique(const Key& key);
};

Result Tree::insertUnique(const Key& key) {
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil) {
        left = key.less(current->key);
        parent = current;
        if (left)
            current = current->left;
        else
            current = current->right;
    }

    Iterator candidate;
    candidate.owner = owner;
    candidate.node = parent;

    if (left) {
        Node* first = head->left;
        if (!candidate.owner || candidate.owner != owner)
            _invalid_parameter_noinfo();

        if (parent == first)
            return Result(insert(true, parent, key), true);

        candidate.decrement();
    }

    if (candidate.node->key.less(key))
        return Result(insert(left, parent, key), true);

    return Result(candidate, false);
}
