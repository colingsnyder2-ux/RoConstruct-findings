// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern unsigned int minimumInitialized;
extern int minimumCapacity;
extern const float smallGrowth;
extern const float mediumGrowth;
extern const float largeGrowth;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedCount {
    Control* control;
    ~SharedCount();
};

inline SharedCount::~SharedCount()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Entry {
    void* object;
    SharedCount count;
};

struct S {
    Entry* entries;
    int size;
    int capacity;

    void reallocate(int count);
    void resize(int count, bool shrink);
};

void S::resize(int count, bool shrink)
{
    int oldSize = size;
    size = count;

    for (int i = count; i < oldSize; ++i)
        entries[i].count.~SharedCount();

    int minimum;
    if (!(minimumInitialized & 1)) {
        minimumInitialized |= 1;
        minimum = 10;
        minimumCapacity = minimum;
    } else {
        minimum = minimumCapacity;
    }

    int currentSize = size;
    if (currentSize > capacity) {
        if (!capacity) {
            capacity = count;
        } else if (currentSize < minimum) {
            capacity = minimum;
        } else {
            double factor = smallGrowth;
            unsigned int bytes = capacity * sizeof(Entry);
            if (bytes > 400000)
                factor = largeGrowth;
            else if (bytes > 64000)
                factor = mediumGrowth;

            int oldCapacity = capacity;
            capacity = (int)(factor * oldCapacity)
                     - oldCapacity + currentSize;
            if (capacity < minimumCapacity)
                capacity = minimumCapacity;
        }
        reallocate(oldSize);
    } else if (currentSize <= capacity / 3 &&
               shrink && currentSize > minimum) {
        if (currentSize >= oldSize)
            currentSize = oldSize;
        reallocate(currentSize);
    }

    for (int i = oldSize; i < size; ++i) {
        Entry* p = entries + i;
        if (p) {
            p->object = 0;
            p->count.control = 0;
        }
    }
}
