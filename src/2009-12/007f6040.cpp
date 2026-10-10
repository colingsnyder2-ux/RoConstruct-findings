// from server: 65% by atomic.potato
struct CRobloxControlColorSelector
{
    int value;
    void DelayLayoutParent();
    void SetValue(int);
};

void CRobloxControlColorSelector::DelayLayoutParent()
{
    int* p = (int*)((char*)this + 0x100);
    if (*p)
        *(int*)((char*)*p + 0xe8) |= 1;
}

void CRobloxControlColorSelector::SetValue(int value)
{
    if (value != *(int*)((char*)this + 0x10c))
    {
        *(int*)((char*)this + 0x10c) = value;
        DelayLayoutParent();
    }
}
