// from server: 46% by atomic.potato
struct XItem
{
    XItem* f(int);
};

XItem* XItem::f(int value)
{
    typedef void (__thiscall *Function)(void*, int);
    Function imported_function = (Function)0x98de94;
    imported_function((char*)this + 0xa4, 0);
    return this;
}
