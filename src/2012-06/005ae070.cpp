// from server: 16% by atomic.potato
struct Node
{
    Node *next;
    Node *prev;
    // padding to make the node 0x70 bytes
    char pad[0x70 - 8];
};

struct List
{
    Node *head;
};

struct S
{
    bool f(List *list, int unused1, int unused2);
};

bool S::f(List *list, int, int)
{
    Node *node = list->head;
    Node *first = node;
    if (node == first)
        return true;

    while (true)
    {
        Node *cur = list->head;
        Node *tmp;
        if (node != 0)
            tmp = (Node *)((char *)node - 0x70);
        else
            tmp = 0;

        if (cur == tmp->next)
        {
            list->head = node;
            return false;
        }

        node = node->next;
        if (node == list->head)
            break;
    }

    return true;
}
