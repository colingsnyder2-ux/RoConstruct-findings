// from server: 49% by colin
struct CXTPCommandBar
{
    int m(int, int, int);
};

extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
extern "C" void* __stdcall SelectObject(void*, void*);
extern "C" int __stdcall DeleteDC(void*);
extern "C" int __stdcall DeleteObject(void*);

extern "C" void* __stdcall sub_647FC0(void*, int, int, int);
extern "C" void* __stdcall sub_6488C0(void*, void*, int, int, int);

int CXTPCommandBar::m(int a, int b, int c)
{
    int x0 = *(int*)(b + 0);
    int y0 = *(int*)(b + 4);
    int x1 = *(int*)(b + 8);
    int y1 = *(int*)(b + 12);

    void* h = sub_647FC0((void*)a, x1 - x0, y1 - y0, 0);
    if (h == 0)
        return 0;

    void* dc = CreateCompatibleDC((void*)a);
    if (dc == 0)
        return 0;

    SelectObject(dc, h);

    int w = x1 - x0;
    int hgt = y1 - y0;

    if (!BitBlt(dc, 0, 0, w, hgt, (void*)c, x0, y0, 0x00CC0020))
        return 0;

    void* r = sub_6488C0((void*)a, h, -1, -1, 0);
    if (r == 0)
        return 0;

    BitBlt((void*)c, x0, y0, w, hgt, dc, 0, 0, 0x00CC0020);

    DeleteDC(dc);
    DeleteObject(h);

    return (int)r;
}
