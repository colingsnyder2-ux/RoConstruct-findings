// from server: 58% by colin
// roc 2007-08 006ad7f0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad7f0

extern "C" int __stdcall IntersectRect(int *lprcDst, const int *lprcSrc1, const int *lprcSrc2);

struct CXTPTabPaintManager_CAppearanceSetFlat
{
    int sub_6a7f70();
    int GetRect(int *out);
};

int CXTPTabPaintManager_CAppearanceSetFlat::GetRect(int *out)
{
    if (this == 0)
        return 0;
    int *vtbl = *(int **)this;
    int (*fn)(void) = *(int (**)(void))(vtbl + 0x18c / 4);
    int r = fn();
    if (r == 0)
        return 0;
    if (this->sub_6a7f70() == 0)
        return 0;
    int a = *(int *)((char *)this + 0x1f8);
    int b = *(int *)((char *)this + 0x1fc);
    int c = *(int *)((char *)this + 0x200);
    int d = *(int *)((char *)this + 0x204);
    int src[4];
    src[0] = a;
    src[1] = b;
    src[2] = c;
    src[3] = d;
    int dst[4];
    IntersectRect(dst, src, out);
    return 1;
}
