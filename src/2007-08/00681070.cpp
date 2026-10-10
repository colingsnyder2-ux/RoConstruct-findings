// from server: 39% by colin
struct CXTPDrawHelpers
{
    void DrawPolygon(void* pDC, void* pPoints, int nCount);
};

extern "C" int __stdcall Polygon(void*, void*, int, int, int);

struct CPoint
{
    int x;
    int y;
};

struct CRect
{
    int left;
    int top;
    int right;
    int bottom;
};

struct CPointArray
{
    CPoint* m_pData;
    int m_nSize;
};

struct CXTPPointArray
{
    CPointArray* m_pArray;
};

void __stdcall sub_6805F0(void*, void*, int);
void __stdcall sub_6806B0(void*, void*, int);
void __stdcall sub_680680(void*);
void __stdcall sub_680740(void*);

void CXTPDrawHelpers::DrawPolygon(void* pDC, void* pPoints, int nCount)
{
    CPointArray* pArray = (CPointArray*)pPoints;
    CPoint* pData;
    if (pArray == 0)
        pData = 0;
    else
        pData = pArray->m_pData;

    CPointArray local1;
    sub_6805F0(&local1, pData, nCount);

    CPoint* pData2;
    if (pArray == 0)
        pData2 = 0;
    else
        pData2 = pArray->m_pData;

    CPointArray local2;
    sub_6806B0(&local2, pData2, nCount);

    CPoint pts[3];
    pts[0].x = 0;
    pts[0].y = 0;
    pts[1].x = 0;
    pts[1].y = 0;
    pts[2].x = 0;
    pts[2].y = 0;

    Polygon(pDC, pts, 3, 0, 0);

    sub_680740(&local2);
    sub_680680(&local1);
}
