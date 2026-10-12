// from server: 50% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
void __cdecl operator delete(void *);

struct Payload {
    void merge(Payload *);
    ~Payload();
};

struct Node {
    Node *next;
    Node *prev;
    Payload *value;
};

struct List;

struct Proxy {
    List *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;
};

struct List {
    Proxy *proxy;
    unsigned char reserved[16];
    Node *head;

    Iterator erase(Iterator);
};

struct S {
    unsigned char reserved[0x138];
    List list;
    Iterator first;
    Iterator second;

    void f();
};

void S::f()
{
    Proxy *owner = list.proxy;
    Node *node = list.head;

    if (!owner)
        invalid_parameter_noinfo();
    if (node == (owner ? owner->container : 0)->head)
        invalid_parameter_noinfo();

    node = node->next;

    if (!owner)
        invalid_parameter_noinfo();
    if (node == (owner ? owner->container : 0)->head)
        invalid_parameter_noinfo();

    Node *head = list.head;
    if (!list.proxy)
        invalid_parameter_noinfo();
    if (head == (list.proxy ? list.proxy->container : 0)->head)
        invalid_parameter_noinfo();

    head->value->merge(node->value);

    if (!second.owner || second.owner != owner)
        invalid_parameter_noinfo();

    if (second.node == node) {
        if (!second.owner)
            invalid_parameter_noinfo();
        second.node = second.node->prev;
        if (second.node ==
            (second.owner ? second.owner->container : 0)->head)
            invalid_parameter_noinfo();
    }

    if (!first.owner || first.owner != owner)
        invalid_parameter_noinfo();

    if (first.node == node) {
        if (!first.owner)
            invalid_parameter_noinfo();
        if (first.node ==
            (first.owner ? first.owner->container : 0)->head)
            invalid_parameter_noinfo();
        first.node = first.node->next;
    }

    if (!owner)
        invalid_parameter_noinfo();
    if (node == (owner ? owner->container : 0)->head)
        invalid_parameter_noinfo();

    Payload *value = node->value;
    if (value) {
        value->~Payload();
        operator delete(value);
    }

    Iterator position;
    position.owner = owner;
    position.node = node;
    list.erase(position);
}
