// from server: 65% by colin
struct Container;
struct Node;

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Proxy {
    Container* owner;
};

struct Object {
    void setParent(Object*);
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    void advance();
};

struct Payload {
    unsigned int reserved;
    Object* object;
    unsigned int unused;
    int kind;
    unsigned int padding[2];
    Proxy* proxy;
    unsigned int padding2[5];
    Node* head;
    void process();
};

struct Node {
    Node* next;
    unsigned int padding[3];
    Payload value;
};

struct Container {
    Proxy* proxy;
    unsigned int padding[5];
    Node* head;
    void processAll();
};

extern void __cdecl processValue(Payload*);
extern Iterator* __cdecl processRange(
    Iterator*, Iterator, Iterator,
    void (__cdecl*)(Payload*), Payload*
);

void Container::processAll()
{
    Iterator it;
    Node* node = head->next;
    Proxy* owner = proxy;
    it.node = node;
    it.proxy = owner;

    for (;;) {
        Node* end = head;
        Proxy* current = proxy;
        if (!owner || owner != current)
            _invalid_parameter_noinfo();

        if (node == end)
            break;

        if (!owner)
            _invalid_parameter_noinfo();
        else
            owner = reinterpret_cast<Proxy*>(owner->owner);

        if (node == reinterpret_cast<Container*>(owner)->head)
            _invalid_parameter_noinfo();

        Payload* value = &node->value;
        switch (value->kind) {
        case 1:
            value->object->setParent(0);
            break;
        case 2:
            {
                __declspec(align(8)) Iterator result;
                Iterator last;
                last.node = value->head;
                last.proxy = value->proxy;
                Iterator first;
                first.node = last.node->next;
                first.proxy = last.proxy;
                processRange(&result, first, last, &processValue, value);
            }
            it.advance();
            node = it.node;
            owner = it.proxy;
            continue;
        case 3:
            value->process();
            it.advance();
            node = it.node;
            owner = it.proxy;
            continue;
        }

        it.advance();
        node = it.node;
        owner = it.proxy;
    }
}
