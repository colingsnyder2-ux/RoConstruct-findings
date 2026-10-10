// from server: 65% by colin
// roc 2007-08 00434790  unit: CObjectBrowser  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434790

extern "C" {
typedef struct { long left; long top; long right; long bottom; } RECT;
typedef void *HWND;
typedef int BOOL;
__declspec(dllimport) BOOL __stdcall GetClientRect(HWND, RECT *);
}

struct CObjectBrowser {
    char pad_0000[0x58];
    char field_0058[0x20];
    int field_0078;
    char pad_007C[0xF4];
    int field_0170;
    char pad_0174[0x1C];
    int field_0190;
    void method_63023e();
    void method_630034(int, int, int, int, int);
    void method_63064c(int, int, int);
    void method_6305aa(int, int, int);
    void method_434790(int, int, int);
};

void CObjectBrowser::method_434790(int a2, int a3, int a4)
{
    RECT rc;
    int v;
    int w;
    int h;
    int t;

    method_63023e();

    if (a2 == 1)
        return;

    if (field_0078 == 0)
        return;

    GetClientRect((HWND)field_0078, &rc);

    w = a4 - (rc.right - rc.left);
    h = a3 - w;

    method_630034(0, 0, a3, a4, 1);

    if (field_0190 == 0)
        return;

    method_63064c(0, (int)&rc, (int)&v);

    t = h + rc.left;
    if (t < a3 - 0x96)
        t = a3 - 0x96;
    if (t > 0x32)
        t = 0x32;

    method_6305aa(0, t, 0);

    (*(void (__thiscall **)(CObjectBrowser *))(*(int *)this + 0x148))(this);
}
