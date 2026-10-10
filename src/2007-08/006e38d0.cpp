// from server: 45% by colin
struct CXTPDockingPaneSplitterWnd
{
    char pad[0x54];
    int m_nID;
    int m_nStyle;
    int m_nWidth;
    int m_nHeight;
    int m_nMin;
    int m_nMax;
    int m_bVertical;
    int m_bCreated;
    void Create(int a, int b, int c);
};

extern "C" int __stdcall sub_006e0540();
extern "C" int __stdcall sub_006b3010();
extern "C" int __stdcall sub_0062fcda();

void CXTPDockingPaneSplitterWnd::Create(int a, int b, int c)
{
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;

    m_nID = a;
    m_nStyle = b;
    m_nWidth = c;

    v4 = 0;
    v5 = 0;
    if (*(int*)(c + 0x90) == 0)
        v4 = 1;
    m_bVertical = v4;

    v6 = sub_006e0540();
    m_nHeight = v6;

    v7 = sub_006b3010();
    v8 = *(int*)(c + 0x90);
    v9 = *(int*)v7;
    v10 = *(int*)(v9 + 0x14);
    v11 = -v8;
    v12 = (v11 >> 31) + 0x26f3;
    m_nMin = ((int (__thiscall*)(int, int))v10)(v7, v12);

    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;

    sub_0062fcda();
}
