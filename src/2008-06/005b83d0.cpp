// from server: 74% by colin
extern "C" void __cdecl invalid_parameter_noinfo();

struct Container;

struct Proxy
{
    Container* container;
};

struct Value
{
    unsigned char padding[8];
    int count;
};

struct Node
{
    Node* left;
    unsigned char padding[40];
    Value* value;
};

struct Container
{
    Proxy* volatile proxy;
    unsigned char padding[20];
    Node* head;
};

struct Iterator
{
    Proxy* proxy;
    Node* node;
    Iterator& increment();
};

void __cdecl func_005b83d0(Container* container, int* total, int* empty)
{
    Iterator it;
    Node* node = container->head->left;
    Proxy* proxy = container->proxy;
    it.node = node;
    it.proxy = proxy;

    for (;;)
    {
        Node* end = container->head;
        Proxy* owner = container->proxy;

        if (!proxy || proxy != owner)
            invalid_parameter_noinfo();

        if (node == end)
            break;

        ++*total;

        if (!proxy)
            invalid_parameter_noinfo();

        proxy = reinterpret_cast<Proxy*>(proxy->container);

        if (node == reinterpret_cast<Container*>(proxy)->head)
            invalid_parameter_noinfo();

        if (node->value->count == 0)
            ++*empty;

        it.increment();
        node = it.node;
        proxy = it.proxy;
    }
}
