// from server: 58% by king_originala
extern "C" void (__cdecl *const invalid_parameter_noinfo)();
extern "C" void __cdecl release_memory(void *);

struct Value {
    void merge(Value *);
    void destroy();
};

struct Node {
    Node *next;
    Node *prev;
    Value *value;
};

struct List;

struct Proxy {
    List *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;

    Value *&get() const;
    void advance();
    void retreat();
    bool equals(const Iterator &) const;
};

struct List {
    Proxy *proxy;
    char padding[16];
    Node *head;
    unsigned size;

    Iterator begin();
    Iterator erase(Iterator);
};

struct S {
    char padding[0x138];
    List list;
    Iterator forward;
    Iterator backward;

    void f();
};

inline Iterator List::begin()
{
    Iterator result;
    result.owner = proxy;
    result.node = head->next;
    return result;
}

inline Value *&Iterator::get() const
{
    if (!owner)
        invalid_parameter_noinfo();
    List *container = owner ? owner->container : 0;
    if (node == container->head)
        invalid_parameter_noinfo();
    return node->value;
}

inline void Iterator::advance()
{
    if (!owner)
        invalid_parameter_noinfo();
    List *container = owner ? owner->container : 0;
    if (node == container->head)
        invalid_parameter_noinfo();
    node = node->next;
}

inline void Iterator::retreat()
{
    if (!owner)
        invalid_parameter_noinfo();
    node = node->prev;
    List *container = owner ? owner->container : 0;
    if (node == container->head)
        invalid_parameter_noinfo();
}

inline bool Iterator::equals(const Iterator &other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return node == other.node;
}

void S::f()
{
    Iterator current = list.begin();
    current.advance();

    Value *&secondValue = current.get();
    list.begin().get()->merge(secondValue);

    if (backward.equals(current))
        backward.retreat();

    if (forward.equals(current))
        forward.advance();

    Value *value = current.get();
    if (value) {
        value->destroy();
        release_memory(value);
    }

    list.erase(current);
}
