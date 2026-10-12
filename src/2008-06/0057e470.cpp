// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    unsigned int reserved;
    volatile long count;
};

struct Entry {
    void* object;
    Control* control;

    Entry(const Entry& other);
};

__forceinline Entry::Entry(const Entry& other)
{
    object = other.object;
    control = other.control;
    if (control)
        _InterlockedExchangeAdd(&control->count, 1);
}

typedef void (__cdecl *Callback)(Entry);

Callback __cdecl process(unsigned int, Entry* first, unsigned int,
                         Entry* last, Callback callback)
{
    for (; first != last; ++first)
        callback(*first);
    return callback;
}
