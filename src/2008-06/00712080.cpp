// from server: 94% by colin
struct CXTPPropertyGridItem {
    int IsSelected();
    void Refresh(int);
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

void CXTPPropertyGridItem::Refresh(int arg)
{
    if (*(void**)((char*)this + 0xbc) != 0)
    {
        if (*(int*)(*(char**)((char*)this + 0xbc) + 0x20) != 0)
        {
            if (IsSelected())
            {
                (*(void(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0xb0))(this);
                (*(void(__thiscall**)(CXTPPropertyGridItem*))(*(int*)this + 0xac))(this);
            }
        }
    }
    if (arg != 0)
    {
        InvalidateRect(*(void**)(*(char**)((char*)this + 0xbc) + 0x20), 0, 0);
    }
}
