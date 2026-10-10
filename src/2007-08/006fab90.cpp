// from server: 53% by colin
struct CXTPPropertyGridWhidbeyTheme {
    void DrawItem(int, int, int, int, int, int);
};

extern "C" int __stdcall OffsetRect(int*, int, int);

extern "C" void* __stdcall sub_668F70();
extern "C" void* __stdcall sub_668770(void*, int);
extern "C" void __stdcall sub_7383CA(void*, int, int, int, int, int);

void CXTPPropertyGridWhidbeyTheme::DrawItem(int a, int b, int c, int d, int e, int f)
{
    int x = (c + f) / 2 - 4;
    int y = x + 9;
    int w = 2;
    int h = 0xb;

    if (*(int*)((char*)this + 0x84) > 0)
    {
        int t = *(int*)((char*)this + 0x84);
        int z = (*(int*)((char*)this + 0x98) == 0) ? 1 : 0;
        t -= z;
        int r = t * 8 - t;
        r += r;
        OffsetRect(&w, 0, r);
    }

    void* p1 = sub_668F70();
    void* p2 = sub_668770(p1, 0xf);
    void* p3 = sub_668F70();
    void* p4 = sub_668770(p3, 0x10);

    sub_7383CA(p2, w + 1, h + 1, 7, 7, (int)p4);
    sub_7383CA(p2, w + 1, y, 7, 1, (int)p4);
    sub_7383CA(p2, w + 1, y - 1, 7, 1, (int)p4);
    sub_7383CA(p2, w, y + 1, 1, 7, (int)p4);
    sub_7383CA(p2, w - 1, y + 1, 1, 7, (int)p4);
    sub_7383CA(p2, w + 1, y + 1, 7, 3, 0xffffff);
    sub_7383CA(p2, w + 1, y + 4, 5, 2, 0xffffff);
    sub_7383CA(p2, w + 2, y + 4, 5, 1, 0);

    if (*(int*)((char*)this + 0x9c) == 0)
    {
        sub_7383CA(p2, w + 4, y + 2, 1, 5, 0);
    }
}
