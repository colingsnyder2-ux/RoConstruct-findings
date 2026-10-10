// from server: 42% by colin
struct CXTPPropertyGridItem
{
    char pad[0xb4];
    void* m_pGrid;
    int GetGridSomething();
};

extern "C" void __stdcall sub_00630D23(void*);
extern "C" void __stdcall sub_006FC8B0();

extern unsigned char G_8C91F0;
extern unsigned char G_8C9198;

int CXTPPropertyGridItem::GetGridSomething()
{
    if (m_pGrid != 0)
    {
        char* p = (char*)m_pGrid;
        p = *(char**)(p + 0xb0);
        return *(int*)(p + 0x15c);
    }

    if ((G_8C91F0 & 1) == 0)
    {
        G_8C91F0 |= 1;
        sub_006FC8B0();
        sub_00630D23((void*)0x77cc80);
    }

    return (int)&G_8C9198;
}
