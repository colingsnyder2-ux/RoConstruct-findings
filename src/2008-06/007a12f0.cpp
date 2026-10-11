// from server: 66% by colin
struct CXTWindowMap
{
    char pad0[8];
    int field8;
    int fieldC;
    int sub_7a1110(int);
    int sub_7bc63a(int);
    int sub_7a12f0(int, int);
};

extern "C" int __stdcall GetWindowLongA(int, int);
extern "C" int __stdcall SetWindowLongA(int, int, int);
extern "C" int __stdcall sub_7a1240();

int CXTWindowMap::sub_7a12f0(int a, int b)
{
    int r = sub_7a1110(a);
    fieldC = r;
    int* p = (int*)sub_7bc63a(a);
    *p = (int)this;
    if (fieldC == 0)
    {
        field8 = GetWindowLongA(a, -4);
        SetWindowLongA(a, -4, (int)&sub_7a1240);
    }
    else
    {
        field8 = *(int*)(fieldC + 8);
    }
    return field8;
}
