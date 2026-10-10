// from server: 29% by atomic.potato
struct CInstanceRecord_CNameItem
{
    int f();
};

int CInstanceRecord_CNameItem::f()
{
    struct VTable
    {
        int unused[22];
        int (__thiscall *get)();
    };

    CInstanceRecord_CNameItem *item;
    item = *(CInstanceRecord_CNameItem **)((char *)this + 0x48);
    if (item == 0)
        return 0;

    VTable *table;
    table = *(VTable **)item;
    return table->get();
}
