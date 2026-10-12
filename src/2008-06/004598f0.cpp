// from server: 57% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Object {
    unsigned char padding[496];
};

struct Control {
    void* vtable;
    volatile long references;
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Guard {
    unsigned long value;
    Guard(Shared);
    ~Guard();
};

struct Node {
    unsigned char padding[16];
    const char* value;
};

struct Tree {
    void* owner;
    unsigned char padding[20];
    Node* end;
    void find(void*, const unsigned long*);
};

struct Iterator {
    Tree** owner;
    Node* node;
};

struct Verb {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void execute(void*);
};

struct Registry {
    Verb* find(const char*);
};

struct View {
    unsigned char padding[88];
    Tree tree;
    unsigned char padding2[4];
    Registry registry;
    Shared get();
    void invoke(unsigned long, long);
};

#pragma optimize("y", off)

void View::invoke(unsigned long key, long mode)
{
    if (mode != 0 && mode != -1)
        return;

    Iterator i;
    Tree* treeAddress = &tree;
    treeAddress->find(&i, &key);

    Tree** owner = i.owner;
    Node* end = treeAddress->end;
    void* expected = treeAddress->owner;

    if (!owner || owner != expected)
        _invalid_parameter_noinfo();

    Node* node = i.node;
    if (node == end)
        return;

    Tree* container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = 0;
    } else {
        container = *owner;
    }

    if (node == container->end)
        _invalid_parameter_noinfo();

    if (!node->value)
        return;

    Shared value = get();
    Guard guard(value);

    if (!owner)
        _invalid_parameter_noinfo();
    else
        owner = reinterpret_cast<Tree**>(*owner);

    if (node == reinterpret_cast<Tree*>(owner)->end)
        _invalid_parameter_noinfo();

    const char* name = node->value;
    if (!this)
        return;

    Registry* verbs = &registry;
    if (!verbs)
        return;

    Verb* verb = verbs->find(name);
    if (!verb)
        return;

    if (mode == 0)
        verb->execute(value.object
            ? reinterpret_cast<unsigned char*>(value.object) + 496
            : 0);
}
