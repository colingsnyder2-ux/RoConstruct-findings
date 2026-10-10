// from server: 59% by colin
extern "C" int __stdcall lstrcmpA(const char*, const char*);

struct Node
{
    char* key;
    int pad[4];
    Node* next;
};

struct Inner
{
    int pad0[10];
    Node* head;
};

struct Outer
{
    int pad0[15];
    Inner* inner;
    int pad1[4];
    Outer* next;
};

struct CXTPPropExchangeArchive
{
    int pad0[8];
    Node* list1;
    int pad1[10];
    Outer* list2;

    Node* Find(const char* name);
};

extern CXTPPropExchangeArchive* __cdecl func_0062ff02();

Node* CXTPPropExchangeArchive::Find(const char* name)
{
    CXTPPropExchangeArchive* self = func_0062ff02();
    Node* n = self->list1;
    while (n)
    {
        if (lstrcmpA(n->key, name) == 0)
            return n;
        n = n->next;
    }
    Outer* o = self->list2;
    while (o)
    {
        Node* m = o->inner->head;
        while (m)
        {
            if (lstrcmpA(m->key, name) == 0)
                return m;
            m = m->next;
        }
        o = o->next;
    }
    return 0;
}
