// from server: 64% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Owner {
    void* p;
    Owner() : p(0) {}
    ~Owner() { if (p) operator delete(p); }
};

extern void* __cdecl creator();

struct State;

struct Base {
    virtual ~Base();
    char padding[20];
    State* state;

    Base(void*, void*, void*, Owner, void*);
};

struct Tool : Base {
    Tool(void*, void*, void*, void*, void*);
    virtual ~Tool();
};

struct State {
    virtual void invoke();
    Tool* tool;
    void* first;
    void* second;
    void* a;
    void* b;
    void* c;
    unsigned int unused;

    State(Tool* t, void* x, void* y)
    {
        tool = t;
        first = x;
        a = 0;
        b = 0;
        c = 0;
        second = y;
    }
};

Tool::Tool(void* x, void* y, void* a, void* b, void* owner)
    : Base(creator(), x, y, Owner(), owner)
{
    State* replacement = new State(this, a, b);
    if (replacement != state && state)
        delete state;
    state = replacement;
}
