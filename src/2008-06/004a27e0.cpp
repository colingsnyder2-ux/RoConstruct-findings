// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Node;
struct Vector;

template<class T> struct Shared {
    T* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
    Shared copy() const;
};

template<class T>
__forceinline Shared<T>::Shared(const Shared<T>& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Vector {
    Vector* owner;
    unsigned long reserved[2];
    Shared<Node>* first;
    Shared<Node>* last;

    Vector* container(void (__cdecl *fail)()) const;
};

__forceinline Vector* Vector::container(void (__cdecl *fail)()) const
{
    if (!this) {
        fail();
        return 0;
    }
    return owner;
}

struct Action {
    unsigned long first;
    unsigned long second;
    void* context;
    unsigned long fourth;

    void invoke(void* context, Shared<Node> item);
};

struct Node {
    unsigned char reserved[0x108];
    Shared<Vector> children;

    void visit(Action action);
};

void Node::visit(Action action)
{
    if (children.object) {
        Shared<Vector> collection = children.copy();
        Vector* vector = collection.object;
        Shared<Node>* finish = vector->last;
        void (__cdecl *fail)() = invalid_parameter;

        if (vector->first > finish)
            fail();

        Shared<Node>* current = vector->first;
        Vector* expected = vector->owner;

        if (current > vector->last)
            fail();

        for (;;) {
            vector = vector->owner;
            if (!vector || vector != expected)
                fail();

            if (current == finish)
                break;

            if (current >= vector->container(fail)->last)
                fail();

            action.invoke(action.context, *current);

            if (current >= vector->container(fail)->last)
                fail();

            current->object->visit(action);

            if (current >= vector->container(fail)->last)
                fail();

            ++current;
        }
    }
}
