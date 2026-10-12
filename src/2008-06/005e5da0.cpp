// from server: 92% by king_originala
struct Link {
    virtual void unused();
    virtual int type();

    Link* parent;
    int padding;
    int active;
};

struct State {
    char padding[0xcc];
    float value;

    void update();
};

struct S {
    int padding0;
    Link* parent;
    char padding1[0x80];
    State* state;
    float value;

    void setValue(float);
};

#pragma float_control(precise, on, push)

void S::setValue(float v)
{
    if (v != value) {
        value = v;
        if (parent) {
            Link* p = parent->type() == 7 ? parent->parent : parent;
            if (p->active) {
                State* s = state;
                s->value = v;
                s->update();
            }
        }
    }
}

#pragma float_control(pop)
