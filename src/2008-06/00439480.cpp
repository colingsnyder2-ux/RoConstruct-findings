// from server: 44% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct CSelectionPropGrid
{
    char pad0[8];
    int field8;
    int fieldC;
    int field10;
    void func(int, int, int);
};

extern "C" void __cdecl sub_4119D0(int, int, int, int, int, int);
extern "C" void __cdecl sub_5A1990(int, int, int, int);

void CSelectionPropGrid::func(int a, int b, int c)
{
    char local1 = 0;
    char local2 = 0;
    int v10 = field10;
    int v8 = field8;
    sub_4119D0(v10, a, b, c, (int)local1, (int)local2);
    sub_5A1990(field10 - 8, field8, (int)&field8, c);
    field10 -= 8;
    int* p = (int*)b;
    *p = 0;
    if (fieldC > c || c > field10)
    {
        _invalid_parameter_noinfo();
    }
    p[1] = c;
    *p = *(int*)this;
}
