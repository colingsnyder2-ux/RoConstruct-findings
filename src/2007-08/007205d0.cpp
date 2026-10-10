// from server: 48% by colin
extern "C" __declspec(dllimport) long __stdcall SetWindowLongA(void*, int, long);

struct Node
{
    Node* next;
    Node* prev;
    int   data;
};

struct CXTWindowMap
{
    Node* find(Node*);
    Node* erase(Node*);
    Node* insert(Node*, Node*);
    Node* remove(Node*);
};

Node* CXTWindowMap::remove(Node* p)
{
    Node* n = find(p);
    if (n == p)
    {
        Node* q = n->next;
        if (q != 0)
        {
            Node* r = erase(p);
            r->next = q;
            return r;
        }
        else
        {
            Node* r = insert(p, p->prev);
            SetWindowLongA((void*)p->prev, -4, (long)p->data);
            return r;
        }
    }
    else
    {
        while (n->next != p)
            n = n->next;
        n->next = p->next;
        return n;
    }
}
