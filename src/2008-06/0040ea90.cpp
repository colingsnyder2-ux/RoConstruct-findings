// from server: 80% by king_originala
typedef unsigned int size_t;
typedef unsigned long DWORD;

extern "C" {
    extern void* (__cdecl *calloc)(size_t, size_t);
    extern void* (__cdecl *_recalloc)(void*, size_t, size_t);
    void* __cdecl memset(void*, int, size_t);
}

struct S {
    void** entries;
    int capacity;

    DWORD Add(void* object);
};

DWORD S::Add(void* object)
{
    if (capacity == 0) {
        void** allocated = (void**)calloc(4, 4);
        if (!allocated)
            return (DWORD)allocated;

        memset(allocated, 0, 16);
        entries = allocated;
        capacity = 4;
    }

    DWORD index = 1;
    for (void** slot = entries; slot < entries + capacity; ++slot, ++index) {
        if (*slot == 0) {
            *slot = object;
            return index;
        }
    }

    int newCapacity = capacity * 2;
    void** allocated = (void**)_recalloc(entries, 4, newCapacity);
    if (!allocated)
        return (DWORD)allocated;

    entries = allocated;
    memset((char*)allocated + capacity * 4, 0, capacity * 4);
    entries[capacity] = object;
    DWORD result = capacity + 1;
    capacity = newCapacity;
    return result;
}
