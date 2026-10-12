// from server: 87% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Object {
    virtual ~Object();
    virtual void reserved();
    virtual Object *clone();
};

struct Value {
    void *type;
    Object *object;

    Value();
    Value(const Value &);
    ~Value();
};

inline Value::Value(const Value &other)
{
    void *t = other.type;
    Object *p = other.object;
    type = t;
    object = p ? p->clone() : 0;
}

inline Value::~Value()
{
    if (object)
        delete object;
}

struct Entry {
    unsigned int key;
    Value value;

    Entry(const unsigned int &, const Value &);
};

inline Entry::Entry(const unsigned int &k, const Value &v)
    : key(k), value(v)
{
}

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned int key;
    Value value;
    unsigned char color;
    unsigned char nil;
};

struct Map;

struct Proxy {
    Map *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;
};

struct Map {
    Proxy *proxy;
    unsigned char padding[20];
    Node *head;
    unsigned int count;

    Iterator *insert(Iterator *, Proxy *, Node *, const Entry &);
    Value *findOrInsert(const unsigned int &);
};

Value *Map::findOrInsert(const unsigned int &key)
{
    Node *candidate = head;
    Node *current = head->parent;

    while (!current->nil) {
        if (current->key < key) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }

    Iterator position;
    position.owner = proxy;
    position.node = candidate;

    Iterator end;
    end.owner = proxy;
    end.node = head;

    if (!position.owner || position.owner != end.owner)
        _invalid_parameter_noinfo();

    if (position.node == end.node || key < position.node->key) {
        Iterator result;
        position = *insert(&result, position.owner, position.node,
                           Entry(key, Value()));
    }

    Map *container = reinterpret_cast<Map *>(position.owner);
    if (position.owner)
        container = position.owner->container;
    else
        _invalid_parameter_noinfo();

    if (position.node == container->head)
        _invalid_parameter_noinfo();

    return &position.node->value;
}
