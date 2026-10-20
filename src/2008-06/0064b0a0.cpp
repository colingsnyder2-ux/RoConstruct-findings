// from server: 98% by Espeon

#include <intrin.h>

struct Stage;
struct Primitive;

struct State {
    int value;
    int auxiliary;
    void cleanup();
};

struct Action {
    void invoke();
};

struct Link3 {
    char padding[0x2c];
    Action* action;
};

struct Link2 {
    char padding[0x10];
    Link3* next;
};

struct Link1 {
    char padding[0xa0];
    Link2* next;
};

struct Link {
    char padding[0x1c];
    Link1* next;
};

struct Primitive {
    char padding0[4];
    Stage* owner;
    char padding1[0x10];
    State* state;
    char padding2[8];
    Link* link;

    bool inOrDownstream(Stage*) const;
    void setState(int value);
    void setOwner(Stage* owner);
};

struct InsertResult {
    char data[12];
};

struct Container {
    char data[1];
    void erase(Primitive* const* key);
    void insert(InsertResult* result, Primitive* const* key);
};

struct Manager {
    void remove(Primitive* primitive);
};

struct Collection {
    void remove(Primitive* primitive, int flag);
};

struct Stage {
    virtual void slot0();
    virtual int rank();

    int reserved;
    Manager* manager;
    Collection* collection;
    char padding[0x170];
    Container container;

    Container* select(int state);
    void f(Primitive* primitive);
};

extern "C" void __cdecl releaseMemory(void* memory);

inline bool Primitive::inOrDownstream(Stage*s)const {_ReadWriteBarrier();Stage* current=owner;int requested=s->rank();return current->rank() >= requested;}

void Stage::f(Primitive* primitive)
{
    Primitive* p = primitive;
    _ReadWriteBarrier();
    Primitive* key = p;
    int state;

    if(p->owner && p->inOrDownstream(this))state=p->state->value;
    else state=0;

    Container* selected = select(state);
    Container* destination = &container;
    selected->erase(&key);

    InsertResult result;
    destination->insert(&result, &key);

    if (state == 4 || state == 5) {
        Action* action = p->link->next->next->next->action;
        if (action)
            action->invoke();
    }

    if (p->owner->rank() > rank())
        manager->remove(p);

    p->state->auxiliary = 0;
    p->state->value = 6;
    collection->remove(p, 0);
    destination->erase(&primitive);

    State* oldState = p->state;
    if (oldState) {
        oldState->cleanup();
        releaseMemory(oldState);
    }

    p->setState(0);
    p->setOwner(this);
}