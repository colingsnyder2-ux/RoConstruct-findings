// from server: 90% by king_originala
void* __cdecl operator new(unsigned int);

struct Item
{
    virtual void __stdcall first() = 0;
    virtual unsigned long __stdcall addRef() = 0;
};

struct COutputView
{
    unsigned char padding[16];
    Item*** map;
    unsigned int mapSize;
    unsigned int offset;
    unsigned int size;

    void grow(unsigned int);
    void push_back(Item* const&);
};

void COutputView::push_back(Item* const& value)
{
    if (((offset + size) & 3) == 0 &&
        mapSize <= ((size + 4) >> 2))
        grow(1);

    unsigned int position = offset + size;
    unsigned int block = position >> 2;
    if (mapSize <= block)
        block -= mapSize;

    if (map[block] == 0)
        map[block] = static_cast<Item**>(operator new(16));

    Item** slot = map[block] + (position & 3);
    if (slot != 0)
    {
        *slot = value;
        if (*slot != 0)
            (*slot)->addRef();
    }

    ++size;
}
