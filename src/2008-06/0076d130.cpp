// from server: 58% by colin
struct CShadowWnd;

struct CList
{
    void Remove(CShadowWnd* wnd);
    void RemoveHelper(CShadowWnd* wnd);
};

struct CShadowWnd
{
    void Release();
    void OnRemoved();
    void OnDetached(int flag);
    int field_0x20;
    int field_0x68;
};

void CList::Remove(CShadowWnd* wnd)
{
    if (wnd != 0 && wnd->field_0x20 != 0)
    {
        wnd->Release();
    }
    wnd->field_0x68 = 0;
    CList* list = this;
    CShadowWnd* tmp = wnd;
    list->RemoveHelper(tmp);
    wnd->OnRemoved();
    wnd->OnDetached(1);
}
