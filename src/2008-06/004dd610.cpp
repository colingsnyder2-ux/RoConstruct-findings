// from server: 44% by king_originala
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Key {
    float x, y, z;
    unsigned int index;
    int value;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    unsigned char padding[20];
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

struct Compare {
    bool less(const Key&, const Key&) const;
};

struct S {
    void* owner;
    unsigned int reserved;
    Compare compare;
    unsigned char padding[15];
    Node* head;
    unsigned int count;

    Iterator insert(bool, Node*, const Key&);
    Result f(const Key&);
};

Result S::f(const Key& key)
{
    Node* parent = head;
    Node* current = head->parent;
    bool left = true;

    while (!current->nil) {
        parent = current;

        if (current->key.x > key.x)
            left = true;
        else if (current->key.x < key.x)
            left = false;
        else if (current->key.y > key.y)
            left = true;
        else if (current->key.y < key.y)
            left = false;
        else if (current->key.z > key.z)
            left = true;
        else if (current->key.z < key.z)
            left = false;
        else if (key.index < current->key.index)
            left = true;
        else if (key.index > current->key.index)
            left = false;
        else
            left = key.value < current->key.value;

        current = left ? current->left : current->right;
    }

    Iterator position;
    position.owner = owner;
    position.node = parent;

    if (left) {
        Iterator first;
        first.owner = owner;
        first.node = head->left;

        if (!position.owner || position.owner != first.owner)
            _invalid_parameter_noinfo();

        if (position.node == first.node) {
            Result result;
            result.position = insert(true, parent, key);
            result.inserted = true;
            return result;
        }

        position.decrement();
    }

    if (compare.less(position.node->key, key)) {
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
