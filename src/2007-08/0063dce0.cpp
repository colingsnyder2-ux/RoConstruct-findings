// from server: 57% by tester
// roc 2007-08 0063dce0  unit: CXTPPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063dce0

struct CXTPPaintManager
{
    int sub_63cd70(int);
    void sub_6308b0(void*, int, int);
    void sub_6308aa(void*, int, int);
    void func(int, int, int, int, int, int, int);
};

void CXTPPaintManager::func(int a, int b, int c, int d, int e, int f, int g)
{
    int local;
    if (g != -1)
    {
        int v = sub_63cd70(g);
        sub_6308b0(&local, v, g);
    }
    if (e != g && e != -1)
    {
        int v1 = sub_63cd70(e);
        int v2 = sub_63cd70(e);
        sub_6308aa(&local, v2, v1);
    }
}
