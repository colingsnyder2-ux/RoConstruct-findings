// from server: 19% by atomic.potato
struct CValueItem
{
    CValueItem *f(int);
    CValueItem *g(int);
};

CValueItem *CValueItem::f(int value)
{
    return this->g(value);
}
