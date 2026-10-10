// from server: 49% by colin
struct CXTPReportControl {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0xb4];
    int m_nItemHeight;
    char pad2[0xd0];
    int m_nLockUpdate;

    void OnUpdate();
    int GetRowCount();
    void SetSelectedRow(int, int, int);
    void RecalcLayout();
    void LockUpdate(int, int, int, int);
};

extern "C" __declspec(dllimport) void __stdcall UpdateWindow(void*);

void CXTPReportControl::LockUpdate(int a, int b, int c, int d)
{
    if (m_nLockUpdate == 0)
    {
        OnUpdate();
        return;
    }

    int nHeight = m_nItemHeight;
    int nCount;
    if (nHeight == -1)
    {
        int v = (int)(((long long)a * 0x88888889) >> 32);
        v = (v + a) >> 6;
        v = (v >> 31) + v;
        nCount = (v > 0) ? 2 : 3;
    }
    else
    {
        int t = a * nHeight;
        int v = (int)(((long long)t * 0x88888889) >> 32);
        v = (v + t) >> 6;
        v = (v >> 31) + v;
        nCount = (v > 0) ? 1 : 0;
    }

    if (nCount <= 0)
        nCount = -nCount;

    int nRows = GetRowCount();
    if (nRows > 0)
    {
        int i = nRows;
        do
        {
            SetSelectedRow(nCount, 0, 0);
            --i;
        } while (i != 0);
    }

    RecalcLayout();
    UpdateWindow(m_hWnd);
    OnUpdate();
}
