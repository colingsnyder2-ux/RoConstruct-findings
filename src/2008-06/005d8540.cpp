// from server: 57% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;

struct NodePtr {
    Node* object;
    Control* control;

    NodePtr(const NodePtr&);
    ~NodePtr();
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Vector {
    Proxy* proxy;
    unsigned char padding[8];
    NodePtr* first;
    NodePtr* last;
};

struct VectorPtr {
    Vector* object;
    Control* control;

    ~VectorPtr();
};

struct Holder {
    Vector* object;
    Control* control;

    VectorPtr get() const;
};

struct Iterator {
    Proxy* proxy;
    NodePtr* position;

    NodePtr& value() const;
    void advance();
    bool different(const Iterator&) const;
};

typedef void (__cdecl *Visitor)(NodePtr, void*);

struct Node {
    unsigned char padding[0x108];
    Holder children;

    void visit(Visitor, void*);
};

inline NodePtr::NodePtr(const NodePtr& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline NodePtr::~NodePtr()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

inline VectorPtr::~VectorPtr()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

inline NodePtr& Iterator::value() const
{
    if (!proxy)
        _invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        _invalid_parameter_noinfo();
    return *position;
}

inline void Iterator::advance()
{
    if (!proxy)
        _invalid_parameter_noinfo();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        _invalid_parameter_noinfo();
    ++position;
}

inline bool Iterator::different(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return position != other.position;
}

void Node::visit(Visitor visitor, void* context)
{
    if (children.object) {
        VectorPtr snapshot = children.get();
        Vector* vector = snapshot.object;

        Iterator finish;
        finish.position = vector->last;
        if (vector->first > finish.position)
            _invalid_parameter_noinfo();
        finish.proxy = vector->proxy;

        Iterator current;
        current.position = vector->first;
        current.proxy = vector->proxy;
        if (current.position > vector->last)
            _invalid_parameter_noinfo();

        while (current.different(finish)) {
            visitor(current.value(), context);
            current.value().object->visit(visitor, context);
            current.advance();
        }
    }
}
