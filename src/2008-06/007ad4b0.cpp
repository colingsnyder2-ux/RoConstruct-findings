// from server: 79% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p)
{
    return p;
}

inline void operator delete(void*, void*)
{
}

extern const float growthSmall;
extern const float growthMedium;
extern const float growthLarge;
extern int minimum;
extern int minimumInitialized;

struct Element {
    virtual void first();
    virtual ~Element();
    char bytes[52];
    Element();
};

struct Storage {
    Element* data;
    int count;
    int capacity;

    void reallocate(int preservedCount);
    void resize(int newCount, bool allowShrink);
};

void Storage::resize(int newCount, bool allowShrink)
{
    int oldCount = count;
    count = newCount;

    if (newCount < oldCount) {
        int i = newCount;
        int remaining = oldCount - newCount;
        do {
            data[i].~Element();
            ++i;
        } while (--remaining);
    }

    int minCount;
    if (!(minimumInitialized & 1)) {
        minimumInitialized |= 1;
        minCount = 10;
        minimum = minCount;
    } else {
        minCount = minimum;
    }

    int currentCount = count;
    if (currentCount > capacity) {
        if (capacity != 0) {
            capacity = newCount;
            reallocate(oldCount);
        } else {
            if (currentCount < minCount) {
                capacity = minCount;
            } else {
                double growth = growthSmall;
                int currentCapacity = capacity;
                unsigned bytes = currentCapacity * sizeof(Element);
                if (bytes > 400000)
                    growth = growthLarge;
                else if (bytes > 64000)
                    growth = growthMedium;

                newCount = currentCapacity;
                int newCapacity = int(newCount * growth) - newCount + currentCount;
                capacity = newCapacity;
                minCount = minimum;
                if (newCapacity < minCount)
                    capacity = minCount;
            }
            reallocate(oldCount);
        }
    } else if (currentCount <= capacity / 3 &&
               allowShrink && currentCount > minCount) {
        reallocate(currentCount < oldCount ? currentCount : oldCount);
    }

    for (int i = oldCount; i < count; ++i)
        new (data + i) Element;
}
