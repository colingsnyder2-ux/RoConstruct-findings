// from server: 59% by colin
struct CXTPPropertyGridWhidbeyTheme {
    char pad[0x34];
    void* m_pPaintManager;

    void Init(int, int, int, int, int);
};

struct Helper {
    void* n(int);
};

extern "C" void __stdcall sub_6308b0(void*, void*);
extern "C" Helper* __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(Helper*, int);
extern "C" void* __stdcall sub_682240(void*, void*, void*, void*, int);
extern "C" void* __stdcall sub_682270(void*);

void CXTPPropertyGridWhidbeyTheme::Init(int a, int b, int c, int d, int e)
{
    char buf[0x10];
    void* p = m_pPaintManager;
    void* v;
    if (*(int*)((char*)p + 0x54) == -1)
        v = *(void**)((char*)p + 0x50);
    else
        v = *(void**)((char*)p + 0x54);
    sub_6308b0(v, buf);
    Helper* h = sub_668f70();
    void* r = sub_668770(h, 0x14);
    void* p2 = m_pPaintManager;
    void* v2;
    if (*(int*)((char*)p2 + 0x54) == -1)
        v2 = *(void**)((char*)p2 + 0x50);
    else
        v2 = *(void**)((char*)p2 + 0x54);
    int x = d;
    int y = e - 2;
    int z = e - 1;
    void* r2 = sub_682240(v2, r, buf, &x, 1);
    sub_682270(r2);
}
