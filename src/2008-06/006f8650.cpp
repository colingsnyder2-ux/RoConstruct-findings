// from server: 28% by colin
struct CXTPDrawHelpers {
    void DrawGrid(int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
int __stdcall IntersectRect(void*, const void*, const void*);
int __stdcall IsRectEmpty(const void*);
int __stdcall CopyRect(void*, const void*);
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CSize {
    int cx;
    int cy;
};

struct CXTPPaintManager {
    void* vt;
};

struct CXTPTabPaintManager {
    void* vt;
};

struct CXTPTabControl {
    void* vt;
    char pad[0x54];
    void (__thiscall *pfnGetClientRect)(void*, CRect*);
};

void CXTPDrawHelpers::DrawGrid(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k)
{
    CRect rcClient;
    CRect rcIntersect;
    CRect rcCopy;
    int nWidth;
    int nHeight;
    int x;
    int y;
    float fStepX;
    float fStepY;

    nWidth = rcClient.right - rcClient.left;
    if (nWidth < 1)
        nWidth = 1;
    nHeight = rcClient.bottom - rcClient.top;
    if (nHeight < 1)
        nHeight = 1;

    ((CXTPTabControl*)a)->pfnGetClientRect((void*)a, &rcClient);

    if (IntersectRect(&rcIntersect, &rcClient, (const void*)b))
        CopyRect(&rcCopy, &rcIntersect);
    else
        CopyRect(&rcCopy, &rcClient);

    if (IsRectEmpty((const void*)c))
    {
        for (y = rcCopy.top; y < rcCopy.bottom; y++)
        {
            fStepY = 1.0f - (float)(y - rcClient.top) / (float)nHeight;
            ((CXTPDrawHelpers*)e)->DrawGrid(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
    }
    else
    {
        for (x = rcCopy.left; x < rcCopy.right; x++)
        {
            fStepX = 1.0f - (float)(x - rcClient.left) / (float)nWidth;
            ((CXTPDrawHelpers*)e)->DrawGrid(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
    }
}
