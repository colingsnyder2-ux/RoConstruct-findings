// from server: 86% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Value {
    char data[56];
    Value();
    Value(const Value&);
    ~Value();
};

struct Entry {
    unsigned key;
    Value value;

    Entry(unsigned k, const Value& v) : key(k), value(v) {}
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    Value value;
    unsigned char color;
    unsigned char nil;
};

struct Map;

struct Proxy {
    Map* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;

    Iterator(Proxy* p, Node* n) : owner(p), node(n) {}

    bool operator==(const Iterator& other) const {
        if (!owner || owner != other.owner)
            _invalid_parameter_noinfo();
        return node == other.node;
    }

    Iterator& operator=(const Iterator& other) {
        owner = other.owner;
        node = other.node;
        return *this;
    }
};

struct Map {
    Proxy* proxy;
    char padding[20];
    Node* head;

    Iterator insert(Iterator position, const Entry& entry);
    Value& lookup(const unsigned& key);
};

Value& Map::lookup(const unsigned& key)
{
    Node* candidate = head;
    Node* current = head->parent;

    while (!current->nil) {
        if (current->key < key) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator position(proxy, candidate);
    Iterator finish(proxy, head);

    if (position == finish || key < position.node->key)
        position = insert(position, Entry(key, Value()));

    if (!position.owner)
        _invalid_parameter_noinfo();

    if (position.node == position.owner->container->head)
        _invalid_parameter_noinfo();

    return position.node->value;
}
