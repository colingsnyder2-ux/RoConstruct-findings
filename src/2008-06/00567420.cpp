// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
};

inline void RefCount::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1)
    {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Instance;
struct Entries;

template<class T> struct Shared
{
    T* ptr;
    RefCount* count;

    Shared(const Shared&);
    explicit Shared(Instance*);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared(const Shared<T>& other)
{
    ptr = other.ptr;
    count = other.count;
    if (count)
        _InterlockedExchangeAdd(&count->strong, 1);
}

template<class T>
inline Shared<T>::~Shared()
{
    if (count)
        count->release();
}

extern "C" void __cdecl initialize_shared(Shared<Instance>*, Instance*);

template<>
inline Shared<Instance>::Shared(Instance* source)
{
    initialize_shared(this, source);
}

struct Listener
{
    void attach(void*);
};

struct Instance
{
    char padding[0xa4];
    Listener listener;
};

struct Iterator
{
    void* owner;
    Shared<Instance>* position;
};

struct Entries
{
    void* owner;
    unsigned long padding[2];
    Shared<Instance>* first;
    Shared<Instance>* last;

    void append(const Shared<Instance>&);
    Iterator begin();
    Iterator end();
};

inline Iterator Entries::begin()
{
    Shared<Instance>* start = first;
    if (start > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.position = start;
    return result;
}

inline Iterator Entries::end()
{
    Shared<Instance>* finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.position = finish;
    return result;
}

inline Iterator find_entry(Iterator current, Iterator finish,
                           Instance* const& value)
{
    while (current.position != finish.position)
    {
        if (current.position->ptr == value)
            break;
        ++current.position;
    }
    return current;
}

struct Holder
{
    Shared<Entries>* get();
};

struct Selection
{
    char padding[0x150];
    unsigned long signal;
    Holder holder;

    void notify(Shared<Instance>);
    void select(Instance*);
};

void Selection::select(Instance* instance)
{
    Shared<Instance> item(instance);
    Shared<Entries> entries(*holder.get());

    Entries* list = entries.ptr;
    Iterator finish = list->end();
    Iterator initial = list->begin();
    Iterator current = find_entry(initial, finish, item.ptr);

    finish = list->end();
    if (!current.owner || current.owner != finish.owner)
        _invalid_parameter_noinfo();

    if (current.position == finish.position)
    {
        list->append(item);
        instance->listener.attach(this ? &signal : 0);
        notify(item);
    }
}
