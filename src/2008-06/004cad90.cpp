// from server: 71% by colin
struct Node
{
    Node* next;
    Node* prev;
};

struct List
{
    Node* head;
};

struct S
{
    bool f(List* a, List* b, int c);
};

bool S::f(List* a, List* b, int c)
{
    Node* n = a->head;
    Node* first = n;
    if (n != first)
        return true;
    while (true)
    {
        Node* m = b->head;
        Node* p;
        if (n != 0)
            p = (Node*)((char*)n - 0x70);
        else
            p = 0;
        if (m == p->next)
        {
            b->head = n;
            return false;
        }
        n = n->next;
        if (n == a->head)
            return true;
    }
}
