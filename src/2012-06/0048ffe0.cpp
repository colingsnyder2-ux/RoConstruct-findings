// from server: 37% by atomic.potato
struct CValueItem
{
    CValueItem* __cdecl initialize(int, int);
};

CValueItem* CValueItem::initialize(int value, int unused)
{
    value = 0;
    unused = 0;
    initialize(value, unused);
    return this;
}
