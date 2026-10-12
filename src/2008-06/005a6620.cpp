// from server: 78% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Item
{
    unsigned char storage[0x158];
    Item(int, int, int);
};

struct Empty
{
};

struct Result
{
    void* object;
    void* control;
    Result(Item*, Empty = Empty());
};

Result __cdecl makeItem(int a, int b, int c)
{
    return Result(new Item(a, b, c));
}
