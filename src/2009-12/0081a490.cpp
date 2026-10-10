// from server: 62% by atomic.potato
struct CInstanceRecord_CNameItem
{
    int IsFocusable();
};

int CInstanceRecord_CNameItem::IsFocusable()
{
    if (this == 0)
        return 0;

    int value = *(int *)((char *)this + 0x4c);
    if (value == 0)
        return 0;

    if (*(int *)((char *)value + 0x48) == 0)
        return 0;

    if (*(int *)((char *)this + 0x44) == 0)
        return 0;

    typedef int (__thiscall *Method)(void *);
    Method method = *(Method *)(*(int *)this + 0x104);
    if (method(this) == 0)
        return 0;

    return 1;
}
