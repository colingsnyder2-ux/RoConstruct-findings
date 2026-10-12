// from server: 75% by king_originala
struct Node;
struct Joint;
struct World;

struct Category {
    bool equals(const Category& other) const;
};

extern const Category& __cdecl categoryInstance();

struct Parent {
    char pad0[0x1c];
    Category* category;
};

struct Node {
    virtual void reserved();
    virtual int kind();
    Node* link;
    char pad0[4];
    World* world;
};

struct World {
    void detach(Node* node);
    void attach(Node* node);
};

struct Provider {
    char pad0[0x2e4];
    World* world;
};

struct Joint {
    char pad0[0x104];
    Parent* parent;
    char pad1[0x48];
    Node* node;
    void update(void* argument);
    void f(void* argument);
};

extern Provider* __cdecl findProvider(Joint* joint);
extern World* __cdecl findWorld(Joint* joint);

void Joint::f(void* argument)
{
    update(argument);

    Node* n = node;
    World* oldWorld;
    if (!n->link) {
        oldWorld = 0;
    } else {
        if (n->link->kind() != 7)
            n = n->link;
        else
            n = n->link->link;
        oldWorld = n->world;
    }

    World* newWorld;
    if (parent && parent->category->equals(categoryInstance())) {
        Provider* provider = findProvider(this);
        if (provider)
            newWorld = provider->world;
        else
            newWorld = 0;
    } else {
        newWorld = findWorld(this);
    }

    if (oldWorld != newWorld) {
        if (oldWorld)
            oldWorld->detach(node);
        if (newWorld)
            newWorld->attach(node);
    }
}
