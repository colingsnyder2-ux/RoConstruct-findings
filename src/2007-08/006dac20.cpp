// from server: 35% by colin
// roc 2007-08 006dac20  unit: CXTPReportControl::CReportDropTarget  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dac20

extern "C" __declspec(dllimport) void* __stdcall GetParent(void*);
extern "C" __declspec(dllimport) int __stdcall GetSystemMetrics(int);

struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTPReportRow {
    char pad[0x2c];
    int m_nRow;
    int m_nRow2;
    int m_nRow3;
    int m_nRow4;
};

struct CXTPReportRecord {
    char pad[0x2c];
    int m_nIndex;
    int m_nIndex2;
    int m_nIndex3;
    int m_nIndex4;
};

struct CXTPReportControl {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x30];
    void* m_pRows;
    char pad3[0x54];
    void* m_pSelectedRows;
    char pad4[0xac];
    int m_nMode;
    void* m_pDropTarget;
};

struct CReportDropTarget {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x30];
    void* m_pControl;
    char pad3[0x54];
    void* m_pSelectedRows;
    char pad4[0xac];
    int m_nMode;
    void* m_pDropTarget;
    int OnDrop(void* pDataObject, int x, int y, int grfKeyState, int* pdwEffect);
};

extern "C" void __stdcall sub_630490(void*);
extern "C" void __stdcall sub_680000(void*);
extern "C" void __stdcall sub_6802f0(void*);
extern "C" void* __stdcall sub_6e0550(void*);
extern "C" void __stdcall sub_6308b0(void*, void*, void*);
extern "C" void __stdcall sub_6301c0(void*);
extern "C" void __stdcall sub_682240(void*, void*, int, int, int, void*);
extern "C" void __stdcall sub_682340(void*);
extern "C" void __stdcall sub_6dab50(void*, void*);
extern "C" void __stdcall sub_680430(void*);
extern "C" void __stdcall sub_63048a(void*);
extern "C" void __stdcall sub_630a1e(void);

int CReportDropTarget::OnDrop(void* pDataObject, int x, int y, int grfKeyState, int* pdwEffect)
{
    CRect rect;
    CPoint pt;
    CPoint pt2;
    int nWidth;
    int nHeight;
    int nCenterX;
    int nCenterY;
    int nDeltaX;
    int nDeltaY;
    int nResult;
    CXTPReportRow* pRow;
    CXTPReportRecord* pRecord;
    void* pParent;
    int nScreenWidth;
    int nScreenHeight;
    int nHalfWidth;
    int nHalfHeight;

    sub_630490(&rect);
    sub_680000(&pt);
    sub_6802f0(&pt2);

    pRow = (CXTPReportRow*)sub_6e0550((char*)this + 0x54);
    pRecord = *(CXTPReportRecord**)((char*)pRow + 0xa0);
    pRow = *(CXTPReportRow**)((char*)pRecord + 0xe4);

    int nRow1 = pRow->m_nRow3;
    if (nRow1 == -1)
        nRow1 = pRow->m_nRow2;
    int nRow2 = pRow->m_nRow;
    if (nRow2 == -1)
        nRow2 = pRow->m_nRow2;

    if (nRow1 == nRow2) {
        int nVal = pRow->m_nRow3;
        if (nVal == -1)
            nVal = pRow->m_nRow2;
        sub_6308b0(&pt2, &pt, (void*)nVal);
    } else {
        if (this->m_nMode == 1) {
            pParent = GetParent(this->m_hWnd);
            sub_6301c0(pParent);
            sub_680000(&pt);
            nCenterX = pt.x - pt.x + pt2.x;
            pt.x = nCenterX;
        }

        nScreenWidth = GetSystemMetrics(0);
        nHalfWidth = nScreenWidth / 2;
        nDeltaX = pt.x - pt2.x;
        if (nDeltaX > nHalfWidth) {
            nCenterX = pt.x - pt2.x;
        } else {
            nCenterX = GetSystemMetrics(0) / 2;
        }
        pt.x = nCenterX + pt2.x;

        int nRow3 = pRow->m_nRow3;
        if (nRow3 == -1)
            nRow3 = pRow->m_nRow2;
        int nRow4 = pRow->m_nRow;
        if (nRow4 == -1)
            nRow4 = pRow->m_nRow2;

        sub_682240(&pt2, &pt, nRow4, nRow3, 1, &pt2);
        sub_682340(&pt2);
    }

    sub_6dab50(this->m_pDropTarget, &pt2);
    sub_680430(&pt2);
    sub_63048a(&rect);
    sub_630a1e();

    return 0;
}
