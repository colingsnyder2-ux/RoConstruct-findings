// from server: 47% by colin
struct CXTPDrawHelpers {
    void DrawGradient(int, int, int, int, int, int, int, int, int);
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall IsRectEmpty(const CRect*);
extern "C" int __stdcall IntersectRect(CRect*, const CRect*, const CRect*);
extern "C" int __stdcall CopyRect(CRect*, const CRect*);

extern "C" int __fastcall sub_67F530(CXTPDrawHelpers*, int, int, int, int);
extern "C" int __fastcall sub_7383CA(void*, int, int, int, int, int, int);

void CXTPDrawHelpers::DrawGradient(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int v10;
    int v11;
    int v12;
    int v13;
    CRect rc;
    CRect rc2;
    int i;
    int j;
    float f1;
    float f2;

    v10 = a2 - a1;
    if (v10 < 1)
        v10 = 1;
    v11 = a4 - a3;
    if (v11 < 1)
        v11 = 1;

    (*(void (__thiscall**)(int, CRect*))(*(int*)a5 + 0x58))(a5, &rc);

    if (IsRectEmpty(&rc)) {
        CopyRect(&rc2, &rc);
    } else {
        IntersectRect(&rc2, &rc, (const CRect*)&a6);
    }

    if (a9 != 0) {
        i = rc.left;
        if (i < rc.right) {
            f1 = (float)v10;
            do {
                f2 = 1.0f - (float)(i - a1) / f1;
                sub_7383CA((void*)a5, i, a3, 1, rc.bottom - rc.top, sub_67F530(this, a6, a7, a8, *(int*)&f2), 0);
                i++;
            } while (i < rc.right);
        }
    } else {
        j = rc.top;
        if (j < rc.bottom) {
            f1 = (float)v11;
            do {
                f2 = 1.0f - (float)(j - a3) / f1;
                sub_7383CA((void*)a5, a1, j, rc.right - rc.left, 1, sub_67F530(this, a6, a7, a8, *(int*)&f2), 0);
                j++;
            } while (j < rc.bottom);
        }
    }
}
