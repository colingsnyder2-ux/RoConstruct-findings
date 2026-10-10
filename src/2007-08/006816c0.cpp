// from server: 27% by colin
extern "C" __declspec(dllimport) void* __stdcall GetStockObject(int);
extern "C" __declspec(dllimport) int __stdcall GetDeviceCaps(void*, int);

struct CXTPPrintPageHeaderFooter
{
    int GetPageHeaderFooter(void* pDC, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int* pOut1, int* pOut2, int* pOut3);
};

struct CXTPPrintPageHeaderFooterVtbl
{
    void* pad[27];
    int (__stdcall* fn6c)(void*, int, int, int, int, int, int, int, int, int);
};

struct CXTPPrintPageHeaderFooterImpl
{
    CXTPPrintPageHeaderFooterVtbl* vtbl;
};

extern "C" int __stdcall sub_45DA00(void* p, int* out);
extern "C" int __stdcall sub_67FDB0(int a, int b);

int CXTPPrintPageHeaderFooter::GetPageHeaderFooter(void* pDC, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int* pOut1, int* pOut2, int* pOut3)
{
    if (pDC != 0)
        return 0;

    CXTPPrintPageHeaderFooterImpl* self = (CXTPPrintPageHeaderFooterImpl*)this;
    int result = self->vtbl->fn6c(pDC, a2, a3, a4, a5, a6, a7, a8, 0, 0);
    if (result >= 0)
        return 0;

    int v1;
    int v2;
    int v3;
    sub_45DA00(pDC, &v1);
    sub_45DA00(pDC, &v2);
    sub_45DA00(pDC, &v3);

    if (a8 == 0)
        return 0;

    if (v1 <= 0) v1 = 1;
    if (v2 <= 0) v2 = 1;
    if (v3 <= 0) v3 = 1;

    int best = 0x7fffffff;
    int bestDist = 0x7fffffff;
    int bestX = 1;
    int bestY = 1;
    int bestZ = 1;

    int half = a8 / 2;
    int quarter = a8 / 2 - a8 / 6;

    int yStart = half;
    int yEnd = quarter;

    if (yStart <= yEnd)
    {
        int xStart = a7 - half;
        int xEnd = a7 - quarter;

        for (int y = yStart; y <= yEnd; y += 15)
        {
            int w1 = sub_67FDB0(v1, y);
            int w2 = sub_67FDB0(v2, xStart);
            int w3 = sub_67FDB0(v3, xEnd);

            int maxW = w1;
            if (w2 > maxW) maxW = w2;
            if (w3 > maxW) maxW = w3;

            int dist = 0;
            int d1 = half - xStart; if (d1 < 0) d1 = -d1;
            int d2 = half - y; if (d2 < 0) d2 = -d2;
            int d3 = half - yEnd; if (d3 < 0) d3 = -d3;
            dist = d1 + d2 + d3;

            if (maxW < best || (maxW == best && dist < bestDist))
            {
                best = maxW;
                bestDist = dist;
                bestX = xStart;
                bestY = y;
                bestZ = xEnd;
            }
        }
    }

    *pOut1 = bestX;
    *pOut2 = bestY;
    *pOut3 = bestZ;

    int h1 = GetDeviceCaps(pDC, 0x410);
    int h2 = GetDeviceCaps(pDC, 0x411);
    int h3 = GetDeviceCaps(pDC, 0x412);

    int m1 = h1;
    if (h2 > m1) m1 = h2;
    if (h3 > m1) m1 = h3;

    if (m1 == h1)
        return h1;
    if (m1 == h2)
        return h2;
    return h3;
}
