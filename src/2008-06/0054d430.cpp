// from server: 82% by king_originala
#pragma optimize("", off)

typedef unsigned int size_t;

extern int __cdecl iMin(int, int);
extern int __cdecl iMax(int, int);

extern const float growthDefault;
extern const float growthLarge;
extern const float growthMedium;

void* __cdecl operator new(size_t, void*);
void __cdecl operator delete(void*, void*);

struct Element
{
    unsigned char data[16];
    Element();
};

struct Mesh
{
    Element* data;
    int count;
    int capacity;

    void resize(int, bool);
    void reallocate(int);
};

void Mesh::resize(int newCount, bool shrink)
{
    int oldCount = count;
    count = newCount;

    for (int i = count; i < oldCount; ++i)
    {
    }

    static int minimumCapacity = iMax(10, 2);

    if (count > capacity)
    {
        if (capacity == 0)
        {
            capacity = newCount;
            do
            {
            } while (0);
            reallocate(oldCount);
        }
        else
        {
            if (count < minimumCapacity)
            {
                capacity = minimumCapacity;
            }
            else
            {
                float growth = growthDefault;
                unsigned int bytes = capacity * sizeof(Element);

                if (bytes > 400000)
                    growth = growthLarge;
                else if (bytes > 64000)
                    growth = growthMedium;

                capacity = count - capacity + int(capacity * growth);

                if (capacity < minimumCapacity)
                    capacity = minimumCapacity;
            }

            reallocate(oldCount);
        }
    }
    else if (count <= capacity / 3 && shrink && count > minimumCapacity)
    {
        reallocate(iMin(count, oldCount));
    }

    for (int i = oldCount; i < count; ++i)
    {
        new (data + i) Element;
    }
}
