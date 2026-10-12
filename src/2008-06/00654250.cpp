// from server: 80% by king_originala
extern "C" void (__cdecl *invalid_parameter)();

struct Key {
    unsigned char data[28];
};

extern bool (__cdecl *key_less)(const Key&, const Key&);

struct Compare {};
struct Allocator {};

struct Value {
    unsigned char data[32];
    Value(const Compare&, const Allocator&);
    ~Value();
};

struct Pair {
    Key first;
    Value second;
    Pair(const Key&, const Value&);
    ~Pair();
};

struct S;

struct Owner {
    S* container;
};

struct Node {
    unsigned char links[12];
    Key key;
    Value value;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

struct S {
    Owner* owner;
    unsigned char padding[20];
    Node* head;

    Node* lower_bound(const Key&);
    Iterator& insert(Iterator*, Iterator, const Pair&);
    Value& lookup(const Key&);
};

Value& S::lookup(const Key& key)
{
    Node* node = lower_bound(key);

    if (!this)
        invalid_parameter();

    Owner* proxy = owner;
    Iterator finish;
    finish.owner = owner;
    finish.node = head;

    if (!proxy || proxy != finish.owner)
        invalid_parameter();

    if (node == finish.node || key_less(key, node->key)) {
        Compare options;
        Value value(options, reinterpret_cast<const Allocator&>(options));
        Iterator hint;
        hint.owner = proxy;
        hint.node = node;
        Iterator storage;
        Iterator& result = insert(&storage, hint, Pair(key, value));
        proxy = result.owner;
        node = result.node;
    }

    if (!proxy)
        invalid_parameter();
    else
        proxy = reinterpret_cast<Owner*>(proxy->container);

    if (node == reinterpret_cast<S*>(proxy)->head)
        invalid_parameter();

    return node->value;
}
