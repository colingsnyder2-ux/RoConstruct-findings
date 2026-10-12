// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter)();
typedef void (__cdecl *Report)();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle
{
    void* object;
    Control* control;
    Handle(const Handle&);
    ~Handle();
};

extern Handle __cdecl makeHandle(void*);

struct Vector;

struct Proxy
{
    Vector* owner;
};

struct Iterator
{
    Proxy* proxy;
    Handle* position;

    bool different(const Iterator&, Report) const;
    void* get(Report) const;
    void advance(Report);
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Handle* first;
    Handle* last;
    Handle* limit;

    Iterator begin(Report);
    Iterator end(Report);
};

inline Iterator Vector::end(Report report)
{
    Iterator result;
    Handle* value = last;
    if (first > value)
        report();
    result.position = value;
    result.proxy = proxy;
    return result;
}

inline Iterator Vector::begin(Report report)
{
    Iterator result;
    Handle* value = first;
    if (value > last)
        report();
    result.position = value;
    result.proxy = proxy;
    return result;
}

inline bool Iterator::different(const Iterator& other, Report report) const
{
    if (!proxy || proxy != other.proxy)
        report();
    return position != other.position;
}

inline void* Iterator::get(Report report) const
{
    if (!proxy)
        report();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        report();
    return position->object;
}

inline void Iterator::advance(Report report)
{
    if (!proxy)
        report();
    Vector* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        report();
    ++position;
}

struct Holder
{
    Vector* object;
    Control* control;
    Holder get() const;
    ~Holder();
};

inline Holder::~Holder()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct S
{
    unsigned char reserved[0xe4];
    Holder children;

    void apply(Handle, int);
    void f(int);
};

void S::f(int argument)
{
    if (children.object)
    {
        Holder snapshot = children.get();
        Vector* vector = snapshot.object;
        Report report = invalid_parameter;
        Iterator finish = vector->end(report);
        Iterator current = vector->begin(report);
        for (; current.different(finish, report); current.advance(report))
            apply(makeHandle(current.get(report)), argument);
    }
}
