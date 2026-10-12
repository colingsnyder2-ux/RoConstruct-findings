// from server: 75% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void (__stdcall *invalid_parameter_noinfo)();

struct Vector;

struct VectorProxy {
    Vector* owner;
    VectorProxy(Vector*);
};

inline VectorProxy::VectorProxy(Vector* p) : owner(p) {}

struct Vector {
    VectorProxy* proxy;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* limit;

    Vector();
    Vector(const Vector&);
    ~Vector();
    void tidy();
};

inline Vector::Vector()
    : proxy(new VectorProxy(this)), first(0), last(0), limit(0) {}

inline Vector::~Vector() {
    tidy();
    operator delete(proxy);
}

struct Value {
    unsigned int key;
    Vector value;

    Value(const unsigned int&, const Vector&);
};

inline Value::Value(const unsigned int& k, const Vector& v)
    : key(k), value(v) {}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    Vector value;
    unsigned char color;
    unsigned char nil;
};

struct ScoreHud;

struct IteratorProxy {
    ScoreHud* owner;
};

struct Iterator {
    IteratorProxy* proxy;
    Node* node;

    bool operator==(const Iterator&) const;
    Vector& get() const;
};

struct ScoreHud {
    IteratorProxy* proxy;
    unsigned int reserved[5];
    Node* head;
    unsigned int count;

    Iterator* insert(Iterator*, IteratorProxy*, Node*, const Value*);
    Vector& f(const unsigned int&);
};

inline bool Iterator::operator==(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return node == other.node;
}

inline Vector& Iterator::get() const {
    ScoreHud* owner;
    if (!proxy) {
        owner = 0;
        invalid_parameter_noinfo();
    } else {
        owner = proxy->owner;
    }
    if (node == owner->head)
        invalid_parameter_noinfo();
    return node->value;
}

Vector& ScoreHud::f(const unsigned int& key) {
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

    Iterator position;
    position.proxy = proxy;
    position.node = candidate;

    Iterator finish;
    finish.proxy = proxy;
    finish.node = head;

    if (position == finish || key < candidate->key) {
        Value value(key, Vector());
        Iterator result;
        position = *insert(&result, position.proxy, position.node, &value);
    }

    return position.get();
}
