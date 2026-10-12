// from server: 48% by king_originala
extern "C" {
extern void (__cdecl *invalidParameter)();
extern int (__cdecl *randomNumber)();
}

extern const float randomScale;
extern const float randomLimit;

extern void* __stdcall resolveHandle(void*);
extern void __cdecl releaseHandle(void*);

struct Container;

struct Proxy {
    Container* owner;
};

struct Value {
    void* handle;
    unsigned char padding[4];
    int active;
};

struct Node {
    Node* left;
    unsigned char padding[40];
    Value* value;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    void advance();
};

struct Container {
    Proxy* proxy;
    unsigned char padding[20];
    Node* head;
    Iterator* erase(Iterator* result, Iterator position);
};

void update(Container* container)
{
    Node* node = container->head->left;
    Proxy* proxy = container->proxy;
    Iterator position;
    position.proxy = proxy;
    position.node = node;

    for (;;) {
        Node* end = container->head;
        Proxy* owner = container->proxy;

        if (!proxy || proxy != owner)
            invalidParameter();

        if (node == end)
            break;

        Container* source;
        if (proxy)
            source = proxy->owner;
        else {
            invalidParameter();
            source = 0;
        }

        if (node == source->head)
            invalidParameter();

        if (node->value->active == 0 &&
            !(randomNumber() * randomScale < randomLimit)) {
            if (proxy)
                source = proxy->owner;
            else {
                invalidParameter();
                source = 0;
            }

            if (node == source->head)
                invalidParameter();

            Value* value = node->value;
            if (value->handle) {
                releaseHandle(resolveHandle(value->handle));
                value->handle = 0;
            }

            Iterator result;
            Iterator* next = container->erase(&result, position);
            proxy = next->proxy;
            node = next->node;
            position.proxy = proxy;
            position.node = node;
        } else {
            position.advance();
            node = position.node;
            proxy = position.proxy;
        }
    }
}
