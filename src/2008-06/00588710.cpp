// from server: 80% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Payload
{
    void f();
};

struct Node
{
    Node* next;
    unsigned int reserved[3];
    Payload value;
};

struct S;

struct Proxy
{
    S* owner;
};

struct Iterator
{
    Proxy* proxy;
    Node* node;

    void next();
};

struct S
{
    Proxy* volatile proxy;
    unsigned int reserved[5];
    Node* head;

    void f();
};

void S::f()
{
    Node* node = head->next;
    Proxy* currentProxy = proxy;
    Iterator it;
    it.node = node;
    it.proxy = currentProxy;

    for (;;)
    {
        Node* end = head;
        Proxy* endProxy = proxy;

        if (currentProxy && currentProxy != endProxy)
            _invalid_parameter_noinfo();

        if (node == end)
            break;

        if (!currentProxy)
            _invalid_parameter_noinfo();
        else
            currentProxy = reinterpret_cast<Proxy*>(currentProxy->owner);

        if (node == reinterpret_cast<Node*>(currentProxy))
            _invalid_parameter_noinfo();

        node->value.f();
        it.next();
        node = it.node;
        currentProxy = it.proxy;
    }
}
