// from server: 17% by atomic.potato
struct CXTPControlComboBoxAutoCompleteWnd {
    char pad[0x164];
    struct Item { char pad0[4]; int val; int flag; } items[0x3f];
    int GetItemData(int idx);
};

int CXTPControlComboBoxAutoCompleteWnd::GetItemData(int idx)
{
    if ((unsigned)idx > 0x3e)
        return -1;
    Item* p = &items[idx];
    if (p->flag != -1)
        return p->flag;
    return p->val;
}

struct CXTPPaintManager {
    int sub_7f45f8(int* out, int a);
    int func(int a, int b, int c, int d, int e, int f, int g);
};

int CXTPPaintManager::func(int a, int b, int c, int d, int e, int f, int g)
{
    CXTPControlComboBoxAutoCompleteWnd* p = (CXTPControlComboBoxAutoCompleteWnd*)this;
    int r1 = p->GetItemData(g);
    int r2 = p->GetItemData(r1);
    int out;
    sub_7f45f8(&out, r2);
    return out;
}
