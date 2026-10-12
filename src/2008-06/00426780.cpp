// from server: 67% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object
{
    char padding[0x104];
    Object* parent;
};

struct Shared
{
    Object* object;
    Control* control;

    ~Shared()
    {
        if (control)
        {
            if (_InterlockedExchangeAdd(&control->strong, -1) == 1)
            {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                    control->destroy();
            }
        }
    }
};

struct Tree
{
    Tree* insert(const Shared*);
};

struct Node
{
    char padding[0x10];
    Tree* value;
};

struct Proxy
{
    void* container;
};

struct Iterator
{
    Proxy* owner;
    Node* node;

    bool operator!=(const Iterator& other) const
    {
        if (!owner || owner != other.owner)
            _invalid_parameter_noinfo();
        return node != other.node;
    }

    Tree* value() const;
};

struct Map
{
    Proxy* proxy;
    char padding[0x14];
    Node* sentinel;
    char tail[0x10];

    Iterator find(Object* const&);
    Iterator end() const
    {
        Iterator result;
        result.owner = proxy;
        result.node = sentinel;
        return result;
    }
};

inline Tree* Iterator::value() const
{
    if (!owner)
        _invalid_parameter_noinfo();
    if (node == owner->container)
        _invalid_parameter_noinfo();
    return node->value;
}

struct Lock
{
    void acquire();
    void release();
};

extern Shared* __cdecl makeShared(Shared*, Object*);

struct CSelectionTreeCtrl
{
    char padding[0x98];
    Map map;
    Lock lock;

    Tree* find(const Shared*);
};

Tree* CSelectionTreeCtrl::find(const Shared* object)
{
    if (!object->object)
        return 0;

    lock.acquire();
    Object* key = object->object;
    Iterator position = map.find(key);
    Iterator finish = map.end();

    if (position != finish)
    {
        Tree* result = position.value();
        lock.release();
        return result;
    }

    lock.release();

    Tree* parent;
    {
        Shared temporary;
        parent = find(makeShared(&temporary, object->object->parent));
    }

    if (!parent)
        return 0;

    return parent->insert(object);
}
