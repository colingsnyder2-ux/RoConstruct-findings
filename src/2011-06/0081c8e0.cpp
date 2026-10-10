// from server: 32% by atomic.potato
struct CXTPCommandBarList
{
    int value;
    int f(int);
};

struct CNameItem
{
    void f(int);
};

void CNameItem::f(int)
{
}

int CXTPCommandBarList::f(int x)
{
    CNameItem item;
    item.f(x);
    return x;
}
