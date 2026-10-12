// from server: 88% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct Link;

struct State {
    Link* owner;
    char dirty;
    char padding[3];
    float values[3];
    char reserved[0x28];

    State(Link*);
};

struct Fallback {
    char reserved[8];
    char dirty;
};

struct Node {
    char reserved[0x18];
    int index;
};

struct Child : Node {
};

struct Children {
    Node** data;
    int size;
    int capacity;

    void append(Node* const&);
};

struct Link {
    char reserved0[0x14];
    Link* parent;
    char reserved1[4];
    Children children;
    State* state;
    Fallback* fallback;

    void reset();
    void f(Child*);
};

void Link::f(Child* child)
{
    if (!state || !state->dirty) {
        char dirty = 1;
        if (parent)
            parent->reset();
        else if (fallback)
            fallback->dirty = dirty;

        if (state)
            state->dirty = dirty;
    }

    child->index = children.size;
    children.append(child);

    if (!state)
        state = new State(this);
}
