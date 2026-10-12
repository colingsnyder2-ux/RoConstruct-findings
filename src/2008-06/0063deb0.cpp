// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void (__cdecl *invalidParameter)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char partType;

typedef void (__cdecl *Check)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;
struct Vector;

struct Entry {
    Node* object;
    Control* control;
};

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Entry* position;
    bool different(const Iterator& other, Check check) const;
    Node* dereference(Check check) const;
    void advance(Check check);
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Entry* first;
    Entry* last;
    Iterator begin(Check check);
    Iterator end(Check check);
};

struct Shared {
    Vector* object;
    Control* control;
    Shared get();
    ~Shared();
};

struct Part {
    void setValue(bool value);
};

struct Node {
    char padding[0x108];
    Shared children;
    void apply(bool value);
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

inline Iterator Vector::end(Check check)
{
    Iterator result;
    result.position = last;
    if (first > result.position)
        check();
    result.owner = proxy;
    return result;
}

inline Iterator Vector::begin(Check check)
{
    Iterator result;
    result.position = first;
    if (result.position > last)
        check();
    result.owner = proxy;
    return result;
}

inline bool Iterator::different(const Iterator& other, Check check) const
{
    if (!owner || owner != other.owner)
        check();
    return position != other.position;
}

inline Node* Iterator::dereference(Check check) const
{
    Vector* container;
    if (!owner) {
        check();
        container = 0;
    } else {
        container = owner->container;
    }
    if (position >= container->last)
        check();
    return position->object;
}

inline void Iterator::advance(Check check)
{
    Vector* container;
    if (!owner) {
        check();
        container = 0;
    } else {
        container = owner->container;
    }
    if (position >= container->last)
        check();
    ++position;
}

void Node::apply(bool value)
{
    if (children.object) {
        Shared hold = children.get();
        Check check = invalidParameter;
        Iterator finish = hold.object->end(check);
        Iterator current = hold.object->begin(check);
        for (; current.different(finish, check); current.advance(check)) {
            Node* child = current.dereference(check);
            Part* part = static_cast<Part*>(
                __RTDynamicCast(child, 0, &instanceType, &partType, 0));
            if (part)
                part->setValue(value);
            else
                child->apply(value);
        }
    }
}
