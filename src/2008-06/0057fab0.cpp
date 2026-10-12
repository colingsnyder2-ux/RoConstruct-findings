// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Iterator {
    void* owner;
    Shared* current;
};

struct Predicate {
    void* first;
    void* second;

    Predicate(const Predicate&);
    void operator()(Shared);
};

__forceinline Predicate::Predicate(const Predicate& other)
    : first(other.first), second(other.second)
{
}

Predicate __cdecl apply(Iterator begin, Iterator end, Predicate predicate)
{
    Shared* current = begin.current;
    Shared* finish = end.current;
    while (current != finish) {
        predicate(*current);
        ++current;
    }
    return predicate;
}
