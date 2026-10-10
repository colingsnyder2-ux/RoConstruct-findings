// from server: 9% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTPDockingPaneVisioTheme
{
    void DrawPane(HDC hdc, void* pPane, int x, int y, int cx, int cy);
};

extern "C" {
    int __stdcall G1_func_006e54b0();
    void __stdcall G1_func_006e6100();
    void __stdcall G1_func_006308aa();
    void __stdcall G1_func_006308b0();
    void __stdcall G1_func_00630250();
    void __stdcall G1_func_00680550();
    void __stdcall G1_func_006805d0();
    void __stdcall G1_func_007383e8();
    void __stdcall G1_func_0077dcc8();
    void __stdcall G1_func_0077dcd0();
    void __stdcall G1_func_0077dd98();
    void __stdcall G1_func_0077ddac();
    void __stdcall G1_func_0077ddbc();
    void __stdcall G1_func_0077ed90();
    void __stdcall G1_func_00767fb1();
    void __stdcall G1_func_008b5188();
}

void CXTPDockingPaneVisioTheme::DrawPane(HDC hdc, void* pPane, int x, int y, int cx, int cy)
{
    int bFlag = 0;
    if (*(int*)((char*)this + 0x24) != 0)
    {
        if (*(int*)((char*)pPane + 0xdc) != 0)
            bFlag = 1;
    }

    int nColor = bFlag ? 0x1f : 0x1e;
    int nColor2 = G1_func_006e54b0();
    G1_func_006308aa();
    G1_func_0077ed90();
    G1_func_006e54b0();
    G1_func_006e54b0();
    G1_func_006308aa();
    G1_func_0077ed90();
    G1_func_006308aa();
    G1_func_006308b0();
    G1_func_006e54b0();
    G1_func_0077ddac();
    G1_func_00630250();
    G1_func_006e54b0();
    G1_func_0077dcd0();
    G1_func_007383e8();
    G1_func_00680550();
    G1_func_0077dcc8();
    G1_func_0077dd98();
    G1_func_0077dcc8();
    G1_func_0077dd98();
    G1_func_006805d0();
    G1_func_006e6100();
    G1_func_006e6100();
    G1_func_006e6100();
    G1_func_006e6100();
    G1_func_0077ddbc();
}
