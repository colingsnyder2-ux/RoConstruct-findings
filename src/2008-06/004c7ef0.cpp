// from server: 94% by king_originala
extern void (__cdecl *invalidParameter)();
extern void* __cdecl allocate(unsigned int);
extern unsigned int nextIndex;
extern void* nodeVtable[];

struct Node
{
    void* vtable;
    int value;
};

struct Iterator
{
    void* owner;
    Node** position;
};

struct S
{
    void* owner;
    int padding[2];
    Node** first;
    Node** last;
    Node** limit;

    static unsigned int index();
    Iterator insert(Iterator, Node* const&);
    int* f();
};

__forceinline unsigned int S::index()
{
    static unsigned int value = nextIndex++;
    return value;
}

int* S::f()
{
    void (__cdecl *check)() = invalidParameter;

    for (;;)
    {
        unsigned int count = (unsigned int)(last - first);
        unsigned int required = index();
        if (count > required)
            break;

        Node* value = 0;
        Node** begin = first;
        unsigned int capacity;
        if (!begin)
            capacity = 0;
        else
            capacity = (unsigned int)(limit - begin);

        Node** end = last;
        if ((unsigned int)(end - begin) < capacity)
        {
            *end = value;
            last = end + 1;
        }
        else
        {
            if (begin > end)
                check();

            Iterator position = { owner, end };
            insert(position, value);
        }
    }

    unsigned int offset = index();
    unsigned int count = (unsigned int)(last - first);
    if (offset >= count)
        check();

    Node** slot = first + offset;
    if (!*slot)
    {
        Node* node = (Node*)allocate(8);
        if (node)
        {
            node->vtable = nodeVtable;
            node->value = 0;
        }
        else
        {
            node = 0;
        }
        *slot = node;
    }

    return &(*slot)->value;
}
