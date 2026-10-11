// from server: 55% by atomic.potato
struct Node
{
    Node* next;
    Node* prev;
    Node* parent;
    char pad[0x1d - 0x0c];
    char flag;
};

struct List
{
    Node* head;
    Node* prev;
    void insert(Node*);
};

void List::insert(Node* node)
{
    Node* first = node->next;
    node->next = first->next;
    Node* m = first->next;
    if (m->flag == 0)
        m->prev = node;
    Node* p = node->prev;
    first->prev = p;
    Node* c = node->prev;
    if (node == c->prev)
    {
        c->prev = first;
        first->next = node;
        node->prev = first;
        return;
    }
    Node* d = node->prev;
    if (node == d->next)
    {
        d->next = first;
        first->next = node;
        node->prev = first;
        return;
    }
    d->next = first;
    first->next = node;
    node->prev = first;
}
