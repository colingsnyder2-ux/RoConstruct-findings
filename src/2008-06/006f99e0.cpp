// from server: 34% by colin
struct GpPen;

struct Pen {
    GpPen* nativePen;
    int lastResult;
    int __cdecl GetPixel(int x, int y);
};

struct GpGraphics;

extern "C" int __stdcall GdipGetPenColor(GpPen*, unsigned int*);
extern "C" int __stdcall GdipCreateFromHDC(void*, GpGraphics**);
extern "C" int __stdcall GdipGetDC(GpGraphics*, void**);
extern "C" int __stdcall GdipReleaseDC(GpGraphics*, void*);
extern "C" unsigned int __stdcall GetPixel(void*, int, int);

int Pen::GetPixel(int x, int y)
{
    GpGraphics* g = 0;
    if (GdipGetPenColor(nativePen, (unsigned int*)&g) == 0)
        return -1;
    void* hdc = 0;
    GdipGetDC(g, &hdc);
    unsigned int c = ::GetPixel(hdc, x, y);
    GdipReleaseDC(g, hdc);
    return (int)c;
}
