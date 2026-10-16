// from server: 55% by colin
struct Node
{
    char pad0[8];
    double value;
};

struct Container
{
    char pad0[4];
    Node *first;
};

struct Base
{
    char pad0[4];
    Container *container;
};

struct Holder
{
    char pad0[0x60];
    Node node;
};

struct Sender
{
    char pad0[0xc];
    Base base;

    bool check(Node *node, double value, Node *other);
};

extern "C" Node *__cdecl find_lower(Node **slot);
extern "C" Node *__cdecl find_upper(Node **slot);

bool Sender::check(Node *node, double value, Node *other)
{
    Base *self = &this->base;
    Container *c = self->container;
    Node *current = c->first;

    if (node != current)
    {
        Node *slot;
        if (node)
        {
            slot = &((Holder *)node)->node;
        }
        else
        {
            slot = 0;
        }
        Node *found = find_lower(&slot);
        Node *result;
        if (found)
        {
            result = (Node *)((char *)found - 0x60);
        }
        else
        {
            result = 0;
        }
        if (!(result->value < value))
        {
            return false;
        }
    }

    Node *slot2;
    if (node)
    {
        slot2 = &((Holder *)node)->node;
    }
    else
    {
        slot2 = 0;
    }
    Node *found2 = find_upper(&slot2);
    Node *result2;
    if (found2)
    {
        result2 = (Node *)((char *)found2 - 0x60);
    }
    else
    {
        result2 = 0;
    }

    if (result2 != self->container->first)
    {
        if (!(value < result2->value))
        {
            return false;
        }
    }

    return true;
}
