// from server: 40% by colin
struct CXTPReportColumn;

struct CSub {
    char pad[0x30];
};

struct CItem {
    char pad[0xb0];
    CSub* m_pSub;
};

struct CXTPReportColumn {
    char pad[0x58];
    int m_nWidth;
    char pad2[0x30];
    int m_nSomething;
    int GetWidth();
    int GetSomething();
    int CalcWidth();
};

extern "C" {
    void* __stdcall sub_0065e720();
    void __stdcall sub_00630946(void*);
    void __stdcall sub_00630940(void*);
    void __stdcall sub_00680550(void*, void*);
    void __stdcall sub_006805d0(void*);
    void __stdcall sub_006921a0(void*);
    int __stdcall sub_0065e960(void*);
}

int CXTPReportColumn::CalcWidth()
{
    int width;
    int maxWidth;
    int tmp;

    CItem* pItem = (CItem*)sub_0065e720();
    CSub* pSub = pItem->m_pSub;

    sub_00630946(&pSub);
    sub_00680550(&pSub, (char*)pSub + 0x30);

    width = GetWidth();
    width += 6;

    if (m_nWidth != -1) {
        sub_006921a0(&tmp);
        width += sub_0065e960(&tmp);
        width += 2;
    }

    if (GetSomething()) {
        width += 0x1b;
    }

    maxWidth = m_nSomething;
    if (width <= maxWidth) {
        width = maxWidth;
    }

    sub_006805d0(&pSub);
    sub_00630940(&pSub);

    return width;
}
