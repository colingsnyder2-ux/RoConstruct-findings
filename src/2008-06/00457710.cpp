// from server: 62% by king_originala
extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Item
{
    unsigned char padding[12];
    void* listener;
};

struct Vector;

struct Iterator
{
    Vector** proxy;
    Item** position;

    Item* operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

struct Vector
{
    Vector** proxy;
    unsigned long padding[2];
    Item** first;
    Item** last;
    Item** limit;
    unsigned long reserved;

    Iterator begin();
    Iterator end();
    Iterator* erase(Iterator*, Iterator, Iterator);
};

struct Owner
{
    unsigned char padding[44];
    unsigned char criticalSection[24];
};

struct EventData
{
    unsigned long base;
    Vector items;
    Owner* owner;

    void detach();
};

__forceinline Iterator Vector::begin()
{
    if (first > last)
        _invalid_parameter_noinfo();

    Iterator result;
    result.proxy = proxy;
    result.position = first;
    return result;
}

__forceinline Iterator Vector::end()
{
    if (first > last)
        _invalid_parameter_noinfo();

    Iterator result;
    result.proxy = proxy;
    result.position = last;
    return result;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();

    return position != other.position;
}

__forceinline Item* Iterator::operator*() const
{
    if (!proxy)
        _invalid_parameter_noinfo();

    Vector* container = proxy ? *proxy : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();

    return *position;
}

__forceinline Iterator& Iterator::operator++()
{
    if (!proxy)
        _invalid_parameter_noinfo();

    Vector* container = proxy ? *proxy : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();

    ++position;
    return *this;
}

void EventData::detach()
{
    void* lock = owner->criticalSection;
    EnterCriticalSection(lock);

    for (Iterator i = items.begin(); i != items.end(); ++i)
        (*i)->listener = 0;

    Iterator result;
    items.erase(&result, items.begin(), items.end());

    LeaveCriticalSection(lock);
}
