// from server: 93% by king_originala
struct Primitive;
struct Result { unsigned int data[3]; };

struct Collection {
    void remove(Result*, Primitive**);
};

struct Bucket {
    void remove(Primitive**);
};

struct WakeTarget {
    void wake();
};

struct Link3 {
    char padding[0x2c];
    WakeTarget* target;
};

struct Link2 {
    char padding[0x10];
    Link3* next;
};

struct Link1 {
    char padding[0xa0];
    Link2* next;
};

struct Link0 {
    char padding[0x1c];
    Link1* next;
};

struct State {
    int value;
    int pending;
};

struct S {
    virtual void slot0();
    virtual int rank();
    char padding[0xdc];
    Collection collection;

    Bucket* bucket(int);
    void process(Primitive*);
};

struct Primitive {
    char padding0[4];
    S* stage;
    char padding1[0x10];
    State* state;
    char padding2[8];
    Link0* link;
};

void S::process(Primitive* primitive)
{
    if (primitive->stage == 0)
        return;

    if (primitive->stage->rank() < rank())
        return;

    int value = primitive->state->value;
    if (value == 0 || value == 1)
        return;

    Primitive* key = primitive;
    int category;
    if (primitive->stage != 0 && primitive->stage->rank() >= rank())
        category = primitive->state->value;
    else
        category = 0;

    Bucket* selected = bucket(category);
    Collection* entries = &collection;
    selected->remove(&key);

    Result result;
    entries->remove(&result, &key);

    if (category == 4 || category == 5) {
        WakeTarget* target = primitive->link->next->next->next->target;
        if (target != 0)
            target->wake();
    }

    primitive->state->pending = 0;
    primitive->state->value = 1;
}
