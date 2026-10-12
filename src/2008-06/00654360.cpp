// from server: 73% by king_originala
extern "C" void (__stdcall* _invalid_parameter_noinfo)();

struct Value {
    unsigned char storage[32];
    Value(const void*, const void*);
    Value(const Value&);
    ~Value();
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    Value value;
    unsigned char color;
    unsigned char nil;
};

struct S;

struct Iterator {
    S** owner;
    Node* node;
};

struct Pair {
    unsigned int key;
    Value value;

    Pair(unsigned int k, const Value& v) : key(k), value(v) {}
};

struct S {
    S** owner;
    unsigned char padding[20];
    Node* head;

    Iterator insert(Iterator, const Pair&);
    Value& f(const unsigned int*);
};

Value& S::f(const unsigned int* key)
{
    Node* candidate = head;
    Node* current = head->parent;

    while (!current->nil) {
        if (current->key < *key) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator position;
    position.owner = owner;
    position.node = candidate;

    Iterator finish;
    finish.owner = owner;
    finish.node = head;

    if (!position.owner || position.owner != finish.owner)
        _invalid_parameter_noinfo();

    if (position.node == finish.node || *key < position.node->key) {
        Value empty(&key, &key);
        Pair value(*key, empty);
        position = insert(position, value);
    }

    if (!position.owner)
        _invalid_parameter_noinfo();

    if (position.node == (*position.owner)->head)
        _invalid_parameter_noinfo();

    return position.node->value;
}
