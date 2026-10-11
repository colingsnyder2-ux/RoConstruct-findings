// from server: 41% by atomic.potato
struct CXTPPropertyGridItem {
    char pad[0xbc];
    void* m_pGrid;
    int GetValue();
};

extern "C" void __stdcall sub_8CD720(void*);
extern "C" void __stdcall sub_7F4929(void*);

static char g_b9b898[0x58];
static unsigned int g_b9b8f0;

int CXTPPropertyGridItem::GetValue()
{
    if (m_pGrid != 0) {
        char* p = (char*)m_pGrid;
        p = *(char**)(p + 0xb0);
        return *(int*)(p + 0x164);
    }
    if ((g_b9b8f0 & 1) == 0) {
        g_b9b8f0 |= 1;
        sub_8CD720(g_b9b898);
        sub_7F4929((void*)0x98a700);
    }
    return (int)g_b9b898;
}
