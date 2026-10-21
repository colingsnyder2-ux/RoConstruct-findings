// from server: 98% by EspClaude
// from server: 90% by colin
// roc 2008-06 004e6400  unit: RBX::ViewNew::Part  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6400
//

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);

extern const float limit;
extern const float threshold;

struct Ev { bool on; };
struct Base {
    virtual ~Base();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void setValue(float);
    virtual float getValue();

    volatile long references;
    void* resource;
    char padding[196];

    struct Link* link;
    int extra;

    void releaseResource();
};

struct Reference {
    Base* pointer;

    Reference(Base*);
    ~Reference();
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void update(const Reference&, Ev);
};

struct Link {
    void* first;
    Receiver* receiver;
};

struct Listener {
    virtual void update(int, Ev) = 0;
};

struct Part : Base, Listener {
    void update(int, Ev);
};

inline Reference::Reference(Base* p) : pointer(0)
{
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->releaseResource();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

void Part::update(int, Ev ev)
{
    link->receiver->update(Reference(this), ev);
    Base* object = this;

    if (!ev.on) {
        if (object->getValue() < 0.5f)
            object->setValue(0.5f);
    } else {
        if (object->getValue() < 1.0f)
            object->setValue(0.0f);
    }
}
