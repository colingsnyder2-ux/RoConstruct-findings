// from server: 27% by colin
struct CXTPDockingPaneContextStickerWnd {
    char pad0[0x20];
    void* field20;
    char pad24[0x30];
    unsigned int field54;
    char pad58[4];
    void* field5c;
    int HitTest(int, int, int, int, int);
    int OnLButtonDown(int, int, int, int);
};

extern "C" {
    void __stdcall ScreenToClient(void*, void*);
    int __stdcall PtInRect(const void*, int, int);
    void* __stdcall CreateCompatibleBitmap(void*, int, int);
    unsigned int __stdcall GetPixel(void*, int, int);
}

extern void G1_func_00680000();
extern void G1_func_00630946();
extern void G1_func_00630238();
extern void G1_func_00680770();
extern void G1_func_006308b0();
extern int G1_func_006ebd20();
extern void G1_func_006ebfc0();
extern void G1_func_00680880();
extern void G1_func_0041f680();
extern void G1_func_00630940();

int CXTPDockingPaneContextStickerWnd::OnLButtonDown(int x, int y, int a3, int a4)
{
    int pt[2];
    int rc[4];
    int rc2[4];
    int tmp[4];
    int result;
    int flag;
    int cx, cy;
    int bmp;
    int hit;
    int edge;

    ScreenToClient(field20, pt);
    pt[0] = x;
    pt[1] = y;

    if (!PtInRect(rc, pt[0], pt[1]))
        return 0;

    G1_func_00630946();
    G1_func_00630238();
    G1_func_00680770();
    G1_func_006308b0();

    cx = rc2[2] - rc2[0];
    cy = rc2[3] - rc2[1];
    bmp = (int)CreateCompatibleBitmap((void*)rc2[0], cx, cy);
    G1_func_00630238();

    hit = G1_func_006ebd20();
    edge = (hit == 1) ? 0x24ef : 0x24ec;
    hit = G1_func_006ebd20();
    edge = (hit == 1) ? 0x24ef : 0x24ec;

    flag = (field54 & 0x20) ? 1 : 0;

    if (G1_func_006ebd20() == 0)
        result = 0x8c9350;
    else
        result = 0x8c9458;

    if (field54 & 4) {
        G1_func_006ebfc0();
        if (PtInRect(rc, pt[0], pt[1])) {
            G1_func_00680880();
            G1_func_0041f680();
            G1_func_00630940();
            return 4;
        }
    }

    if (field54 & 1) {
        G1_func_006ebfc0();
        if (PtInRect(rc, pt[0], pt[1])) {
            G1_func_00680880();
            G1_func_0041f680();
            G1_func_00630940();
            return 1;
        }
    }

    if (field54 & 8) {
        G1_func_006ebfc0();
        if (PtInRect(rc, pt[0], pt[1])) {
            G1_func_00680880();
            G1_func_0041f680();
            G1_func_00630940();
            return 8;
        }
    }

    if (field54 & 2) {
        G1_func_006ebfc0();
        if (PtInRect(rc, pt[0], pt[1])) {
            G1_func_00680880();
            G1_func_0041f680();
            G1_func_00630940();
            return 2;
        }
    }

    if (field54 & 0x10) {
        G1_func_006ebfc0();
        if (PtInRect(rc, pt[0], pt[1])) {
            G1_func_00680880();
            G1_func_0041f680();
            G1_func_00630940();
            return 0x10;
        }
    }

    G1_func_00680880();
    G1_func_0041f680();
    G1_func_00630940();
    return 0;
}
