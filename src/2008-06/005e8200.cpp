// from server: 84% by king_originala
struct Primitive;
struct Group;

struct Value {
    bool differs(const void*);
};

struct State {
    char pad[0x94];
    char data[1];
    const void* get();
    void set(Value*);
};

struct Link {
    void update();
};

struct Record {
    char pad[0x1c];
    Primitive* primitive;
};

struct Group {
    char pad[0x24];
    Record* record;
    void update();
};

struct Owner {
    char pad[0x24];
    Group* group;
};

struct World {
    void notify(Primitive*);
    void advance(Group*);
    void refresh(Primitive*, int);
};

struct Primitive {
    char pad0[0x58];
    World* world;
    Owner* owner;
    char pad1[0x40];
    State* state;
    Link* link;
    unsigned char flag0;
    unsigned char flag1;
    unsigned char flag2;
    void f(Value*);
};

void Primitive::f(Value* value)
{
    State* current = state;
    current->get();
    if (value->differs(current->data)) {
        Group* group = owner ? owner->group : 0;
        if (!group) {
            state->set(value);
            link->update();
            if (world)
                world->notify(this);
        } else if (group->record->primitive == this) {
            state->set(value);
            group->update();
            world->advance(group);
            if (!flag0 && !flag1 && !flag2)
                world->refresh(this, 0);
        }
    }
}
