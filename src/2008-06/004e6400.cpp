// from server: 88% by king_originala
extern "C" long __stdcall InterlockedIncrement(volatile long*);
extern "C" long __stdcall InterlockedDecrement(volatile long*);

extern const float limit;
extern const float threshold;

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
    virtual void update(const Reference&, bool);
};

struct Link {
    void* first;
    Receiver* receiver;
};

struct Part {
    void update(int, bool);
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

void Part::update(int, bool enabled)
{
    Base* object = reinterpret_cast<Base*>(
        reinterpret_cast<char*>(this) - 216);

    {
        Reference reference(object);
        object->link->receiver->update(reference, enabled);
    }

    if (!enabled) {
        if (object->getValue() < limit)
            object->setValue(limit);
    } else {
        if (object->getValue() < threshold)
            object->setValue(0.0f);
    }
}
