// from server: 61% by colin
struct MyXTPCommandBars;

struct XTPItem {
    void SetSomething(MyXTPCommandBars* p);
};

struct XTPItems {
    int m_nCount;
    XTPItem** m_pItems;
    XTPItems();
    ~XTPItems();
};

struct MyXTPCommandBars {
    char pad[0x180];
    void* m_pSomething;
    int FindIndex(int, int);
    void GetItems(XTPItems* out, int index);
    void DoSomething(MyXTPCommandBars* p);
};

extern "C" void __stdcall sub_62FF20();

void MyXTPCommandBars::DoSomething(MyXTPCommandBars* p)
{
    void* s = m_pSomething;
    if (s != 0)
        return;
    int idx = ((int (__thiscall*)(void*, int, MyXTPCommandBars*))0x6A17B0)(s, -1, p);
    if (idx == -1)
        return;
    XTPItems items;
    ((void (__thiscall*)(void*, XTPItems*, int))0x6A27F0)(s, &items, idx);
    int i = 0;
    while (i < items.m_nCount)
    {
        if (i < 0 || i >= items.m_nCount)
        {
            sub_62FF20();
        }
        items.m_pItems[i]->SetSomething(p);
        i++;
    }
    items.~XTPItems();
}
