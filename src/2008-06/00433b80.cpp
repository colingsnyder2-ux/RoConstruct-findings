// from server: 57% by king_originala
struct Context
{
    void* first;
    void* second;
    void* third;
    void* fourth;
    void* fifth;
};

struct Node
{
    char padding[0xa8];
    Node* first;
    Node* second;
    Node* third;
};

struct Control;

struct ControlTable
{
    char padding0[0x148];
    int (__thiscall *create)(Control*, void*, int, int, unsigned long, unsigned long);
    int (__thiscall *insert)(Control*, int, int, const char*, int, int, Context*);
    char padding1[0x80];
    void (__thiscall *setMode)(Control*, int);
};

struct Control
{
    ControlTable* table;
    char padding[0x114];

    unsigned long query(int, int);
    Node* getNode(int, int);
};

extern const char textFirst[];
extern const char textSecond[];
extern const char textThird[];

struct CObjectBrowser
{
    char padding[0x54];
    void* value;
    Control first;
    Control second;

    int initialize(int);
    int create(int);
};

int CObjectBrowser::create(int argument)
{
    int result = initialize(argument);
    if (result == -1)
        return result;

    if (!first.table->create(&first, this, 1, 2, 0x50000000UL, 0xe900UL))
        return -1;

    first.table->setMode(&first, 4);

    Context context = { 0, 0, 0, 0, 0 };
    context.second = value;

    if (!first.table->insert(&first, 0, 0, textFirst, 200, 600, &context))
        return -1;

    if (!second.table->create(&second, &first, 2, 1, 0x50800000UL,
                              first.query(0, 1)))
        return -1;

    if (!second.table->insert(&second, 0, 0, textSecond, 300, 200, &context))
        return -1;

    if (!second.table->insert(&second, 1, 0, textThird, 100, 190, &context))
        return -1;

    Node* root = first.getNode(0, 0);
    Node* left = second.getNode(0, 0);
    Node* right = second.getNode(1, 0);

    root->first = left;
    root->second = right;
    left->third = right;
    return 0;
}
