// from server: 60% by colin
struct CXTPPropertyGrid {
    char pad[0x64];
    int m_bFlag;
    char pad2[0x20];
    unsigned int m_hWnd;
    void Func();
};

void* __stdcall sub_682a20();
long __stdcall SendMessageA(unsigned int, unsigned int, unsigned int, long);

void CXTPPropertyGrid::Func()
{
    if (m_bFlag == 0)
        return;

    void* p = sub_682a20();
    unsigned int v1 = (*(int*)((char*)p + 0xdc) == 0) ? 1 : 0;
    v1 |= 4;
    SendMessageA(m_hWnd, 0x411, 0x251d, (unsigned short)v1);

    void* p2 = sub_682a20();
    unsigned int v2 = (*(int*)((char*)p2 + 0xdc) == 1) ? 1 : 0;
    v2 |= 4;
    SendMessageA(m_hWnd, 0x411, 0x251e, (unsigned short)v2);
}
