// from server: 79% by king_originala
extern "C" void* (__cdecl *allocateMemory)(unsigned int);

__forceinline void* __cdecl operator new(unsigned int size)
{
    return allocateMemory(size);
}

void __cdecl operator delete(void*);

struct Item
{
    unsigned char storage[0x178];

    Item(const void*);
};

struct Deleter
{
};

struct Shared
{
    Item* object;
    void* control;

    Shared(Item*, Deleter);
};

Shared __cdecl createItem(const void* argument)
{
    return Shared(new Item(argument), Deleter());
}
