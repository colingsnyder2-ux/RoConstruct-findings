// from server: 80% by king_originala
struct Node
{
    unsigned char data[12];
};

struct Container
{
    unsigned char data[24];
    Node* head;
};

struct Owner
{
    Container* container;
};

struct Iterator
{
    Owner* owner;
    Node* node;
    void increment();
};

struct Tag
{
    char value;
};

struct Output;

struct Inserter
{
    void* value;
    void insert(Tag, Output*, void**, int);
};

struct Output
{
    void* owner;
    Inserter inserter;
    Output();
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();

Output func_00588240(Iterator first, Iterator last, Output result)
{
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    Iterator current = first;
    volatile Iterator end = last;
    Owner* owner = current.owner;
    Node* node = current.node;

    for (;;)
    {
        if (!owner || owner != end.owner)
            invalid();

        if (node == end.node)
            break;

        Container* container = reinterpret_cast<Container*>(owner);
        if (!owner)
            invalid();
        else
            container = owner->container;

        if (node == container->head)
            invalid();

        void* value = reinterpret_cast<char*>(node) + 12;
        Tag tag = { 0 };
        result.inserter.insert(tag, &result, &value, 0);
        current.increment();
        node = current.node;
        owner = current.owner;
    }

    return result;
}
