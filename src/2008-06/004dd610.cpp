// from server: 50% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Key {
    float x, y, z;
    unsigned int index;
    int value;
};

struct Node {
    Node *left, *parent, *right;
    Key key;
    unsigned char padding[20];
    unsigned char color, nil;
};

struct Iterator {
    void *owner;
    Node *node;
    void decrement();
};

struct Result {
    Iterator position;
    bool inserted;
};

struct Compare {
    bool less(const Key &, const Key &) const;
};

struct S {
    void *owner;
    unsigned int reserved;
    Compare compare;
    unsigned char padding[15];
    Node *head;
    unsigned int count;

    Iterator *insert(Iterator *, bool, Node *, const Key &);
    Result *f(Result *, const Key &);
};

Result *S::f(Result *result, const Key &key)
{
    Node *parent = head;
    Node *current = head->parent;
    bool left = true;

    while (!current->nil) {
        parent = current;
        left =
            key.x < current->key.x ? true :
            key.x > current->key.x ? false :
            key.y < current->key.y ? true :
            key.y > current->key.y ? false :
            key.z < current->key.z ? true :
            key.z > current->key.z ? false :
            key.index < current->key.index ? true :
            key.index > current->key.index ? false :
            key.value < current->key.value;
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

        if (parent == first.node) {
            Iterator temporary;
            result->position = *insert(&temporary, true, parent, key);
            result->inserted = true;
            return result;
        }

        position.decrement();
    }

    if (compare.less(position.node->key, key)) {
        Iterator temporary;
        result->position = *insert(&temporary, left, parent, key);
        result->inserted = true;
        return result;
    }

    result->position = position;
    result->inserted = false;
    return result;
}
