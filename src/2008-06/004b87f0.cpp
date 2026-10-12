// from server: 63% by king_originala
extern "C" void (__cdecl *const invalid_parameter_noinfo)();

struct Node
{
    Node *left;
    Node *parent;
    Node *right;
};

typedef void (__cdecl *Callback)(void *);
extern void __cdecl releaseEntry(void *);
extern void __cdecl processRange(
    void **, Node *, Node *, Node *, Node *, Callback, unsigned);

struct Tree
{
    Node *owner;
    char padding[20];
    Node *head;
    unsigned count;
    void release(Node *);
};

struct Sequence
{
    void *owner;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
    unsigned capacity;
    void erase(void **, void *, unsigned, void *, unsigned);
};

struct Event
{
    void clear();
};

struct Object
{
    void *getPrimary();
    void *getFirst();
    void *getSecond();
    void *getThird();
    void *getFourth();
    void *getFifth();
    void *getSixth();
};

struct Listener
{
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual void slot31();
    virtual void slot32();
    virtual void slot33();
    virtual void slot34();
    virtual void slot35();
    virtual void slot36();
    virtual void slot37();
    virtual void slot38();
    virtual void slot39();
    virtual void slot40();
    virtual void slot41();
    virtual void slot42();
    virtual void slot43();
    virtual void slot44();
    virtual void slot45();
    virtual void slot46();
    virtual void slot47();
    virtual void slot48();
    virtual void slot49();
    virtual void slot50();
    virtual void slot51();
    virtual void slot52();
    virtual void slot53();
    virtual void slot54();
    virtual void slot55();
    virtual void slot56();
    virtual void slot57();
    virtual void slot58();
    virtual void remove(void *);
};

struct S
{
    char padding0[0x2b74];
    char connection[0xc4];
    Tree tree;
    Sequence sequence;
    void *cached;
    Event event;
    char padding1[0xdb];
    Listener *listener;

    void update(unsigned, Object *);
    void setPrimary(void *);
    void attach(void *, int);
};

void S::update(unsigned, Object *object)
{
    void *result;
    unsigned tag;
    Tree *t = &tree;
    Node *head = t->head;
    Node *owner = t->owner;
    processRange(&result, owner, head->left, owner, head, releaseEntry, tag);

    t->release(t->head->parent);
    t->head->parent = t->head;
    t->count = 0;
    t->head->left = t->head;
    Node *root = t->head;
    root->right = root;

    event.clear();

    Sequence *s = &sequence;
    unsigned last = s->last;
    if (s->first > last)
        invalid_parameter_noinfo();

    unsigned first = s->first;
    result = s->owner;
    if (first > s->last)
        invalid_parameter_noinfo();

    s->erase(&result, s->owner, first, result, last);

    void *value = object ? object->getPrimary() : 0;
    setPrimary(value);
    if (object)
    {
        value = object->getFirst();
        attach(value, 1);
        value = object->getSecond();
        attach(value, 0);
        value = object->getThird();
        attach(value, 0);
        value = object->getFourth();
        attach(value, 0);
        value = object->getFifth();
        cached = value;
        attach(value, 0);
        value = object->getSixth();
        attach(value, 0);
    }
    else if (listener)
    {
        listener->remove(connection);
        listener = 0;
    }
}
