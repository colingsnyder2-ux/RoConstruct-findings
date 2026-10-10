// from server: 77% by colin
struct CXTPOffice2007Image
{
    void GetRect(int, int, int, int, int, int, int, int, int*);
};

extern "C" int __stdcall sub_70FF90(int*);

struct tagRECT
{
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall OffsetRect(tagRECT*, int, int);

void CXTPOffice2007Image::GetRect(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int* pOut)
{
    if (this == 0)
    {
        pOut[0] = 0;
        pOut[1] = 0;
        pOut[2] = 0;
        pOut[3] = 0;
        return;
    }

    int local;
    sub_70FF90(&local);

    int width = local / a7;

    tagRECT rc;
    rc.left = 0;
    rc.top = 0;
    rc.right = width;
    rc.bottom = a8 * a6;

    OffsetRect(&rc, 0, 0);

    pOut[0] = rc.left;
    pOut[1] = rc.top;
    pOut[2] = rc.right;
    pOut[3] = rc.bottom;
}
