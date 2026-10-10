// from server: 32% by colin
extern "C" unsigned int __stdcall GetPixel(void*, int, int);
extern "C" unsigned int __stdcall SetPixel(void*, int, int, unsigned int);

struct CXTPDrawHelpers
{
    void Draw3dRect(void*, int, int, int, int, int, int);
};

void CXTPDrawHelpers::Draw3dRect(void* pDC, int x, int y, int cx, int cy, int nCount, int nFlags)
{
    if (nCount <= 0)
        return;

    int* pRect = (int*)pDC;
    int i = 0;
    int nHalf = (nCount - 1) / 2 + 1;

    while (i < nHalf)
    {
        int left = pRect[0];
        int top = pRect[1];
        int right = pRect[2];
        int bottom = pRect[3];

        unsigned int clr1 = GetPixel(pDC, left, top);
        unsigned int clr2 = GetPixel(pDC, right, bottom);

        unsigned int r = ((clr1 & 0xFF) + (clr2 & 0xFF)) / 2;
        unsigned int g = (((clr1 >> 8) & 0xFF) + ((clr2 >> 8) & 0xFF)) / 2;
        unsigned int b = (((clr1 >> 16) & 0xFF) + ((clr2 >> 16) & 0xFF)) / 2;

        unsigned int clr = (b << 16) | (g << 8) | r;

        SetPixel(pDC, left, top, clr);
        SetPixel(pDC, right, bottom, clr);

        pRect += 4;
        i++;
    }
}
