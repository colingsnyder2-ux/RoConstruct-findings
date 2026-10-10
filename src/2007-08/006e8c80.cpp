// from server: 28% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXPaintManager;
struct CXTPDockingPaneBase;

struct CXTPDockingPaneOffice2007Theme
{
    char pad0[0x24];
    int field24;
    char pad28[0x50];
    int field78;
    char pad7c[0x78];
    int fieldF4;
    char padF8[0x84];
    int field17C;
    char pad180[0x64];
    int field1E4;
    char pad1E8[0x1C];
    int field204;

    void DrawPane(HDC hdc, CXTPDockingPaneBase* pPane, int x, int y, int cx, int cy);
};

struct CXTPDockingPaneBase
{
    virtual int GetType();
    char pad4[0x18C];
    int field190;
    char pad194[0xC];
    void* field1A0;
};

extern "C" void* __stdcall sub_682240(void*, void*, void*, int, int);
extern "C" void __stdcall sub_682560(void*, void*);
extern "C" void __stdcall sub_7383CA(void*, int, int, int, int, int);
extern "C" void* __stdcall sub_77DDB8(const char*);
extern "C" void __stdcall sub_77DD74(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTPDockingPaneOffice2007Theme::DrawPane(HDC hdc, CXTPDockingPaneBase* pPane, int x, int y, int cx, int cy)
{
    int type = pPane->GetType();
    int right = x + cx;
    int bottom = y + cy;

    if (type != 0)
    {
        right -= field78 + 3;
    }
    else
    {
        bottom -= field78 + 3;
    }

    int left = x;
    int top = y;

    int* pRect;
    if (field24 != 0 && pPane->field190 != 0)
    {
        pRect = &field204;
    }
    else
    {
        pRect = &field1E4;
    }

    void* tmp = sub_682240(hdc, pRect, &left, type, 0);
    sub_682560(tmp, 0);

    sub_7383CA(hdc, left, top, right - left, 1, field17C);
    sub_7383CA(hdc, left, top + 1, right - left, 1, fieldF4);
    sub_7383CA(hdc, left, bottom, right - left, 1, field17C);
    sub_7383CA(hdc, left + 1, bottom - 1, right - left, 1, fieldF4);
    sub_7383CA(hdc, right, top, bottom - top, 1, field17C);

    void* pStr;
    if (pPane->field1A0 != 0)
    {
        pStr = 0;
        (*(void (__stdcall**)(void*, void**))pPane->field1A0)(pPane->field1A0, &pStr);
    }
    else
    {
        pStr = sub_77DDB8("+D$X+");
    }

    void* pStr2 = 0;
    sub_77DD74(&pStr2, pStr);

    if (pStr != 0)
    {
        sub_77DDBC(&pStr);
    }

    (*(void (__stdcall**)(CXTPDockingPaneOffice2007Theme*, HDC, void*, int, int, int, int, int))(*(int*)this + 0x84))(this, hdc, pStr2, type, left, top, right, bottom);
    sub_77DDBC(&pStr2);
}
