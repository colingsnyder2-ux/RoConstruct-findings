// from server: 77% by atomic.potato
struct CInstanceRecord_CNameItem
{
    virtual void f0();
    int pad0[19];
    int value;
    void f(void* p);
};

void CInstanceRecord_CNameItem::f(void* p)
{
    f0();
    value = (int)p;
}
