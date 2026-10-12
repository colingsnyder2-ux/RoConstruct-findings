// from server: 78% by king_originala
extern double __cdecl timer_now();
extern "C" void (__cdecl *const __imp__invalid_parameter_noinfo)();

union FunctionBuffer
{
    char bytes[24];
    double alignment;
};

struct FunctionTable
{
    void (__cdecl *manage)(FunctionBuffer *, FunctionBuffer *, int);
};

struct Function
{
    FunctionTable *table;
    FunctionBuffer buffer;

    Function();
    Function &operator=(const Function &);
    ~Function();
};

inline Function::Function() : table(0)
{
}

inline Function::~Function()
{
    if (table)
    {
        void (__cdecl *manager)(FunctionBuffer *, FunctionBuffer *, int) =
            table->manage;
        if (manager)
            manager(&buffer, &buffer, 1);
        table = 0;
    }
}

struct Value
{
    double time;
    Function callback;
};

struct List;

struct Proxy
{
    List *owner;
};

struct Node
{
    Node *next;
    Node *previous;
    Value value;
};

struct List
{
    Proxy *proxy;
    char padding[16];
    Node *head;

    void insert(void *, Proxy *, Node *, const Value *);
    Node *make_node(Node *, Node *, const Value *);
    void grow(unsigned int);
};

struct Service
{
    char padding[316];
    List timers;

    void schedule(Function callback, double delay);
};

void Service::schedule(Function callback, double delay)
{
    Value value;
    value.time = timer_now() + delay;
    value.callback = callback;

    List &list = timers;
    Node *node = list.head->next;
    Proxy *proxy = list.proxy;

    for (;;)
    {
        Node *end = list.head;
        Proxy *current = list.proxy;
        if (!proxy || proxy != current)
            __imp__invalid_parameter_noinfo();

        if (node == end)
        {
            Node *last = list.head;
            Node *created = list.make_node(last, last->previous, &value);
            list.grow(1);
            last->previous = created;
            created->previous->next = created;
            break;
        }

        List *owner;
        if (!proxy)
        {
            __imp__invalid_parameter_noinfo();
            owner = 0;
        }
        else
            owner = proxy->owner;

        if (node == owner->head)
            __imp__invalid_parameter_noinfo();

        if (value.time >= node->value.time)
        {
            list.insert(&delay, proxy, node, &value);
            break;
        }

        if (!proxy)
        {
            __imp__invalid_parameter_noinfo();
            owner = 0;
        }
        else
            owner = proxy->owner;

        if (node == owner->head)
            __imp__invalid_parameter_noinfo();

        node = node->next;
    }
}
