// from server: 78% by king_originala
struct Primitive;

struct State {
    int value;
    int pending;
};

struct WakeTarget {
    void wake();
};

struct Link4 {
    char padding[0x2c];
    WakeTarget* target;
};

struct Link3 {
    char padding[0x10];
    Link4* next;
};

struct Link2 {
    char padding[0xa0];
    Link3* next;
};

struct Link1 {
    char padding[0x1c];
    Link2* next;
};

struct InsertResult {
    unsigned int words[3];
};

struct Tree {
    void remove(Primitive**);
    InsertResult insert(Primitive**);
};

struct S {
    virtual void slot0();
    virtual int rank();
    char padding[0xfc];
    Tree tree;

    Tree* bucket(int);
    void f(Primitive*);
};

struct Primitive {
    unsigned int unused0;
    S* stage;
    char padding0[0x10];
    State* state;
    char padding1[8];
    Link1* link;
};

void S::f(Primitive* p)
{
    Primitive* original = p;
    if (original->stage) {
        int otherRank = original->stage->rank();
        int ownRank = rank();
        if (otherRank < ownRank)
            return;

        int state = original->state->value;
        if (state == 0 || state == 2 || state == 1)
            return;

        p = original;
        int oldState;
        if (original->stage) {
            otherRank = original->stage->rank();
            ownRank = rank();
            if (otherRank >= ownRank)
                oldState = original->state->value;
            else
                oldState = 0;
        } else {
            oldState = 0;
        }

        Tree* oldTree = bucket(oldState);
        oldTree->remove(&p);
        tree.insert(&p);

        if (oldState == 4 || oldState == 5) {
            WakeTarget* target = original->link->next->next->next->target;
            if (target)
                target->wake();
        }

        original->state->pending = 0;
        original->state->value = 2;
    }
}
