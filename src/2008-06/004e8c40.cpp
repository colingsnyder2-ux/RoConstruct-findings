// from server: 59% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Key {
    char padding[12];
    int value;
    int extra;
};

inline bool less_key(const Key* a, const Key* b)
{
    if (a->value < b->value)
        return true;
    if (a->value > b->value)
        return false;
    return a < b;
}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
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
};

struct S {
    void* owner;
    char padding[20];
    Node* head;

    Iterator insert(bool, Node*, const Key&);
    Result f(const Key&);
};

Result S::f(const Key& key)
{
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil) {
        left = less_key(&key, &current->key);
        parent = current;
        current = left ? current->left : current->right;
    }

    Iterator position;
    position.owner = owner;
    position.node = parent;

    if (left) {
        Node* first = head->left;
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (parent == first) {
            Result result;
            result.position = insert(true, parent, key);
            result.inserted = true;
            return result;
        }
        position.decrement();
    }

    if (less_key(&position.node->key, &key)) {
        Result result;
        result.position = insert(left, parent, key);
        result.inserted = true;
        return result;
    }

    Result result;
    result.position = position;
    result.inserted = false;
    return result;
}
