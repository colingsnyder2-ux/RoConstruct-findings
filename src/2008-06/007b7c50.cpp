// from server: 73% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

extern const float growthSmall;
extern const float growthMedium;
extern const float growthLarge;

struct Element {
    virtual void reserved();
    virtual ~Element();
    char data[40];
    Element();
};

struct S {
    Element* data;
    int size;
    int capacity;

    void reallocate(int count);
    void resize(int count, bool shrink);
};

void S::resize(int count, bool shrink)
{
    int oldSize = size;
    size = count;

    if (count < oldSize) {
        for (int i = count; i < oldSize; ++i)
            data[i].~Element();
    }

    static int minimum = (count, 10);

    int newSize = size;
    int oldCapacity = capacity;

    if (newSize > oldCapacity) {
        if (oldCapacity == 0) {
            capacity = count;
        } else if (newSize < minimum) {
            capacity = minimum;
        } else {
            float growth = growthSmall;
            unsigned int bytes = oldCapacity * sizeof(Element);
            if (bytes > 400000)
                growth = growthLarge;
            else if (bytes > 64000)
                growth = growthMedium;

            capacity = int(growth * oldCapacity) - oldCapacity + newSize;
            if (capacity < minimum)
                capacity = minimum;
        }
        reallocate(oldSize);
    } else if (newSize <= oldCapacity / 3 && shrink && newSize > minimum) {
        reallocate(newSize < oldSize ? newSize : oldSize);
    }

    for (int i = oldSize; i < size; ++i)
        new (data + i) Element;
}
