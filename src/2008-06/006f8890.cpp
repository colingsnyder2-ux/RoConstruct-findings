// from server: 36% by colin
extern "C" unsigned int __stdcall GetPixel(void* hdc, int x, int y);
extern "C" unsigned int __stdcall SetPixel(void* hdc, int x, int y, unsigned int color);

struct CXTPDrawHelpers
{
    void BlendRect(void* pDC, int x, int y, int cx, int cy, int count);
};

void CXTPDrawHelpers::BlendRect(void* pDC, int x, int y, int cx, int cy, int count)
{
    if (count <= 0)
        return;

    int half = (count - 1) / 2 + 1;
    int* p = (int*)((char*)0 + 0);
    (void)p;

    char* src = (char*)cy + 12;

    for (int i = 0; i < half; i++)
    {
        int a = *(int*)(src - 12);
        int b = *(int*)(src - 8);
        int c = *(int*)(src - 4);
        int d = *(int*)(src);

        unsigned int p1 = GetPixel(pDC, a + c, b + d);
        unsigned int p2 = GetPixel(pDC, a, b);

        unsigned int r = (((p2 >> 16) & 0xff) + ((p1 >> 16) & 0xff)) / 2;
        unsigned int g = (((p2 >> 8) & 0xff) + ((p1 >> 8) & 0xff)) / 2;
        unsigned int bl = ((p2 & 0xff) + (p1 & 0xff)) / 2;

        unsigned int color = (r << 16) | (g << 8) | bl;

        SetPixel(pDC, a, b, color);

        src += 16;
    }
}
