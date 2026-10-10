// from server: 47% by colin
struct CXTPRibbonBar;

struct CXTPRibbonBar
{
    char pad0[0x260];
    void* m_pPanel;
    char pad1[0x4];
    void* m_pItem;
    void* sub_6a86c0(void*);
    void sub_643c30(int);
    void* sub_67c5b0(void*, int, int);

    void* sub_6aa360();
};

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void* __stdcall sub_67c5b0(void*, int, int);

void* CXTPRibbonBar::sub_6a86c0(void* p)
{
    return p;
}

void CXTPRibbonBar::sub_643c30(int)
{
}

void* CXTPRibbonBar::sub_67c5b0(void* p, int a, int b)
{
    return p;
}

void* CXTPRibbonBar::sub_6aa360()
{
    void* p = sub_62fef6(0x24c);
    void* result = 0;
    if (p != 0)
        result = sub_6a86c0(p);
    void* panel = *(void**)((char*)this + 0x260);
    int count = *(int*)((char*)panel + 0x2c);
    int i = 0;
    if (count > 0)
    {
        do
        {
            void* item;
            if (i >= 0 && i < *(int*)((char*)panel + 0x2c))
                item = *(void**)(*(int*)((char*)panel + 0x28) + i * 4);
            else
                item = 0;
            if ((*(unsigned char*)((char*)item + 0xd0) & 2) != 0)
            {
                void* obj = sub_67c5b0(*(void**)((char*)result + 0xf8), (int)item, -1);
                int flags = *(int*)((char*)obj + 0xd0);
                void** vtbl = *(void***)obj;
                void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x94 / 4];
                flags &= ~2;
                fn(obj, flags);
            }
            panel = *(void**)((char*)this + 0x260);
            i++;
        } while (i < *(int*)((char*)panel + 0x2c));
    }
    void* item2 = *(void**)((char*)this + 0x268);
    void* obj2 = sub_67c5b0(*(void**)((char*)result + 0xf8), (int)item2, -1);
    int flags2 = *(int*)((char*)obj2 + 0xd0);
    void** vtbl2 = *(void***)obj2;
    void (*fn2)(void*, int) = (void (*)(void*, int))vtbl2[0x94 / 4];
    flags2 &= ~2;
    fn2(obj2, flags2);
    sub_643c30(0x12c);
    return result;
}
