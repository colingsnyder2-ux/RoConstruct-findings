// from server: 44% by colin
struct GuiItem {
    char pad0[0x20];
    float m_20;
    char pad1[0x58 - 0x24];
    virtual bool vf58();
    bool check();
};

struct TopMenuBar {
    char pad0[0xe8];
    GuiItem m_item;
    char pad1[0x20 - 0x18];
    float m_20;
    bool f(int a, int b);
    void call1(int a, int* out);
    void call2(int a, int* out);
};

bool TopMenuBar::f(int a, int b)
{
    if (!m_item.vf58())
        goto fail;

    {
        int local;
        call1(a, &local);
        if (local == 0) {
            *(int*)b = local;
            *(int*)(b + 4) = local;
            return true;
        }
    }

    if (!(m_20 > 0.0f))
        goto fail;

    if (!((GuiItem*)a)->check())
        goto fail;

    {
        int local;
        call2(*(int*)(a + 8), &local);
        if (!((GuiItem*)&local)->check())
            goto fail;
    }

    *(int*)b = 1;
    *(int*)(b + 4) = 0;
    return true;

fail:
    *(int*)b = 0;
    *(int*)(b + 4) = 0;
    return false;
}
