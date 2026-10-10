// from server: 59% by colin
struct CXTPControlWorkspaceActions
{
    char pad_0000[0x80];
    int m_nIndex;
    char pad_0084[0x14];
    int m_nSomething98;
    char pad_009c[0x34];
    int m_dwFlags;
    char pad_00d4[0x20];
    void* m_pList;
    char pad_00f8[0x4];
    void* m_pSomethingFC;

    void DoAction(int);
    void AddAction(void*, int, int*);
};

extern "C" void* __stdcall sub_00646570(void*);
extern "C" void* __stdcall sub_00738364(void*);
extern "C" void* __stdcall sub_00630202(void*, void*);
extern "C" void* __stdcall sub_006305bc(void*, void*);
extern "C" void* __stdcall sub_00689b30(void*);

void CXTPControlWorkspaceActions::DoAction(int arg)
{
    if (m_pSomethingFC == 0)
        return;

    int i = m_nIndex + 1;
    if (i < *(int*)((char*)m_pList + 0x2c))
    {
        for (;;)
        {
            int idx = m_nIndex + 1;
            void* item;
            if (idx >= 0 && idx < *(int*)((char*)m_pList + 0x2c))
                item = *(void**)(*(int*)((char*)m_pList + 0x28) + idx * 4);
            else
                item = 0;

            int type = *(int*)((char*)item + 0x84);
            if (type < 0x23c3 || type > 0x23c6)
                break;

            void** vtbl = *(void***)m_pList;
            typedef void (__stdcall *Fn)(void*, void*);
            Fn fn = (Fn)vtbl[0x58 / 4];
            fn(m_pList, item);

            int next = m_nIndex + 1;
            if (next >= *(int*)((char*)m_pList + 0x2c))
                break;
        }
    }

    void* a = sub_00646570(m_pSomethingFC);
    void* b = sub_00738364(a);
    void* c = sub_00630202(b, 0);
    void* d;
    if (c != 0)
        d = *(void**)((char*)c + 0xd4);
    else
        d = 0;

    void* e = sub_006305bc(d, 0);
    void* f = sub_00689b30(e);
    void* g = sub_00630202(f, 0);

    if (g == 0)
        return;

    int newIndex = m_nIndex + 1;
    m_dwFlags |= 1;

    int tmp;
    AddAction(g, 0x23c5, &tmp);
    AddAction(g, 0x23c6, &tmp);
    AddAction(g, 0x23c3, &tmp);
    AddAction(g, 0x23c4, &tmp);

    int check = m_nIndex + 1;
    if (tmp == check)
        return;

    void* item2;
    if (check >= 0 && check < *(int*)((char*)m_pList + 0x2c))
        item2 = *(void**)(*(int*)((char*)m_pList + 0x28) + check * 4);
    else
        item2 = 0;

    void** vtbl2 = *(void***)item2;
    typedef void (__stdcall *Fn2)(void*, int);
    Fn2 fn2 = (Fn2)vtbl2[0x64 / 4];
    fn2(item2, m_nSomething98);
}
