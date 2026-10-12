// from server: 65% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Object
{
    virtual void v0();
    virtual void v1();
    virtual void finish();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void process();
};

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    Object* value;
};

struct Container
{
    char padding[24];
    Node* head;
};

struct Proxy
{
    Container* container;
};

struct Iterator
{
    Proxy* owner;
    Node* node;
    void advance();
};

struct S
{
    char padding0[8];
    Object* next;
    char padding1[36];
    Proxy* owner;
    char padding2[20];
    Node* head;
    void f();
};

void S::f()
{
    Iterator it;
    it.node = head->left;
    it.owner = owner;

    Node* node = it.node;
    Proxy* proxy = it.owner;

    for (;;)
    {
        Iterator end;
        end.node = head;
        end.owner = owner;

        if (!proxy || proxy != end.owner)
            invalid_parameter_noinfo();

        if (node == end.node)
            break;

        if (!proxy)
            invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->container);

        if (node == reinterpret_cast<Container*>(proxy)->head)
            invalid_parameter_noinfo();

        node->value->process();
        it.advance();
        node = it.node;
        proxy = it.owner;
    }

    return next->finish();
}
