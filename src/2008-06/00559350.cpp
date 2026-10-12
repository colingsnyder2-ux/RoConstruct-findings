// from server: 93% by king_originala
struct Node {
    Node* next;
};

struct Root {
    int reserved;
    Node* first;
    Node* last;
    ~Root();
};

struct Result {
    char storage[28];
    ~Result();
};

extern Root* __cdecl makeRoot();
extern Result __cdecl convertRoot(Root*);
void __cdecl operator delete(void*);

struct Owner {
    Root* pointer;
    explicit Owner(Root* p);
    ~Owner();
};

inline Owner::Owner(Root* p)
    : pointer(p)
{
}

inline Owner::~Owner()
{
    delete pointer;
}

struct Instance {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual Node* makeNode();

    Result build();
};

Result Instance::build()
{
    Root* root = makeRoot();
    Node* node = makeNode();

    if (!root->last)
        root->first = node;
    else
        root->last->next = node;

    root->last = node;

    Owner owner(root);
    return convertRoot(root);
}
