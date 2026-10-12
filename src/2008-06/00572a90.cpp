// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control
{
    long unused;
    volatile long references;
};

struct Value
{
    void* object;
    Control* control;
};

struct Node
{
    char unused[16];
    Value value;
};

struct Tree;

struct Proxy
{
    Tree* container;
};

struct Iterator
{
    Proxy* proxy;
    Node* node;
};

struct Tree
{
    Proxy* proxy;
    char unused[20];
    Node* head;

    void find(Iterator*, const int*);
};

struct S
{
    char unused[424];
    Tree tree;

    Value* func_00572a90(Value*, int);
};

Value* S::func_00572a90(Value* result, int key)
{
    Tree* container = &tree;
    Iterator position;
    position.proxy = 0;
    int lookup = key;
    container->find(&position, &lookup);

    Proxy* proxy = position.proxy;
    Node* head = container->head;
    container = reinterpret_cast<Tree*>(container->proxy);

    if (!proxy || proxy != reinterpret_cast<Proxy*>(container))
        _invalid_parameter_noinfo();

    Node* node = position.node;
    if (node != head)
    {
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->container);

        if (node == reinterpret_cast<Tree*>(proxy)->head)
            _invalid_parameter_noinfo();

        *result = node->value;
        if (result->control)
            _InterlockedExchangeAdd(&result->control->references, 1);
    }
    else
    {
        result->object = 0;
        result->control = 0;
    }

    return result;
}
