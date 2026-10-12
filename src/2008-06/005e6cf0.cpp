// from server: 82% by king_originala
void* __cdecl operator new(unsigned int);

struct __multiple_inheritance Clump;

struct Action {
    void reset(int);
};

struct Ball {
    char pad[0x5c];
    int field_5c;
    char pad60[0x40];
    Action* action;
    void setField(int);
};

struct Pending {
    void refresh();
};

struct Link {
    void* owner;
    Link(void* p) : owner(p) {}
};

struct Links {
    Link* link;
    char pad[8];
    void* first;
    void* last;
    void* limit;

    Links() : link(new Link(this)), first(0), last(0), limit(0) {}
    ~Links();
};

struct Base {
    int references;
    Base() : references(0) {}
    virtual ~Base();
};

struct EmptyBase {
};

struct Triplet {
    int allocation;
    int first;
    int last;
    Triplet() : first(0), last(0) { allocation = 0; }
};

struct Zero {
    int value;
    Zero() : value(0) {}
};

struct BindingA {
    Clump* owner;
    int unused;
    void (Clump::*function)();

    BindingA(Clump* p, void (Clump::*f)()) : owner(p) {
        function = f;
    }
    ~BindingA();
};

struct BindingB {
    Clump* owner;
    void (Clump::*function)();

    BindingB(Clump* p, void (Clump::*f)()) : owner(p) {
        function = f;
    }
};

struct Clump : Base, EmptyBase {
    Triplet fields;
    bool dirty;
    char pad15[3];
    int field18;
    Ball* ball;
    Pending* pending;
    Clump* self;
    Links links;
    Zero field40;
    int field44;
    int field48;
    char pad4c[8];
    bool enabled;
    char pad55[3];
    BindingA bindingA;
    char pad68;
    bool active;
    char pad6a[2];
    BindingB bindingB;

    Clump(Ball*);
    virtual ~Clump();
    void callbackA();
    void callbackB();
};

Clump::Clump(Ball* p)
    : dirty(true), field18(0), ball(p), pending(0),
      field44(-1), field48(-1),
      enabled(true), bindingA(this, &Clump::callbackA),
      active(true), bindingB(this, &Clump::callbackB)
{
    Ball* b = ball;
    self = this;
    b->setField(reinterpret_cast<int>(this));
    b->action->reset(0);
    dirty = true;
    enabled = true;
    active = true;
    if (pending)
        pending->refresh();
}
