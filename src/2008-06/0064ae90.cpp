// from server: 64% by king_originala
struct Context;

struct Token {
    unsigned char data[24];
    Token() throw();
};

struct Leaf {
    void leave();
};

struct Link {
    unsigned char pad[44];
    Leaf* leaf;
};

struct Node {
    unsigned char pad[16];
    Link* link;
    void enter(Token*);
};

struct Owner {
    unsigned char pad[160];
    Node* node;
};

struct Root {
    unsigned char pad[28];
    Owner* owner;
};

struct State {
    int value;
    int pending;
};

struct Handler {
    void activate(Context*);
    void deactivate(Context*);
};

struct Vector {
    float x, y, z;
};

struct Entry {
    void first(Context* const*);
    Vector second(Context* const*);
};

struct Stage {
    virtual void slot0();
    virtual int rank();
    int unused;
    Handler* handler;
    Entry* lookup(int);
    void update(Context*, int);
};

struct Context {
    int unused0;
    Stage* stage;
    unsigned char pad0[16];
    State* state;
    unsigned char pad1[8];
    Root* root;
};

void Stage::update(Context* const context, int next)
{
    int previous;
    if (context->stage && context->stage->rank() >= rank())
        previous = context->state->value;
    else
        previous = 0;

    lookup(previous)->first(&context);
    lookup(next)->second(&context);

    if ((previous == 4 || previous == 5) && next != 4 && next != 5) {
        Leaf* leaf = context->root->owner->node->link->leaf;
        if (leaf)
            leaf->leave();
    }

    if (next == 3) {
        if (context->stage->rank() <= rank())
            handler->activate(context);
    } else {
        if (next == 4 || next == 5) {
            static Token token;
            context->root->owner->node->enter(&token);
        }

        if (next == 4 || next == 5 || next == 6) {
            Stage* other = context->stage;
            int currentRank = rank();
            if (other->rank() > currentRank)
                handler->deactivate(context);
        }
    }

    context->state->pending = 0;
    context->state->value = next;
}
