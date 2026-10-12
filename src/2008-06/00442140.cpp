// from server: 64% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct TextureItem;

struct Proxy {
    void* container;
    explicit Proxy(void* p) : container(p) {}
};

struct ValueBase {
    Proxy* proxy;
    void* reserved[2];

    ValueBase() : proxy(new Proxy(this)) {}
    ~ValueBase();
};

struct Value : ValueBase {
    void* first;
    void* last;
    void* limit;

    Value() : first(0), last(0), limit(0) {}
    Value(const Value&);
    ~Value();
};

struct Entry {
    unsigned int key;
    Value value;

    Entry(const unsigned int& k, const Value& v) : key(k), value(v) {}
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

struct Iterator {
    Proxy* proxy;
    Node* node;

    Iterator(Proxy* p, Node* n) : proxy(p), node(n) {}

    bool operator==(const Iterator& other) const
    {
        if (!proxy || proxy != other.proxy)
            _invalid_parameter_noinfo();
        return node == other.node;
    }
};

struct TextureItem {
    Proxy* proxy;
    unsigned char reserved[20];
    Node* head;
    unsigned int count;

    Iterator insert(Iterator hint, const Entry& entry);
    Value& lookup(const unsigned int& key);
};

Value& TextureItem::lookup(const unsigned int& key)
{
    Node* candidate = head;
    Node* current = head->parent;
    while (!current->nil) {
        if (current->key < key)
            current = current->right;
        else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator result(proxy, candidate);
    if (result == Iterator(proxy, head) || key < result.node->key) {
        Value empty;
        Entry entry(key, empty);
        result = insert(result, entry);
    }

    TextureItem* owner;
    if (!result.proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = static_cast<TextureItem*>(result.proxy->container);
    }
    if (result.node == owner->head)
        _invalid_parameter_noinfo();
    return result.node->value;
}
