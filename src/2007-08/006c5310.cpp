// from server: 52% by colin
struct CXTPOfficeTheme {
    int sub_6C5310(int *a2, int a3, int a4, int a5);
};

extern "C" int __stdcall sub_63CD70(int);
extern "C" int __stdcall sub_6805F0(int, int, int);
extern "C" int __stdcall sub_63E0D0(int, int, int, int, int, int);
extern "C" int __stdcall sub_680680(int);

int CXTPOfficeTheme::sub_6C5310(int *a2, int a3, int a4, int a5)
{
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;

    v5 = *(int *)((char *)this + 0xf8) + 4;
    if (v5 < 0x16)
        v5 = 0x16;

    *a2 = 6;
    a2[1] = v5;

    if (a3 != 0 && a5 != 0)
    {
        v6 = *(int *)(a3 + 4);
        v7 = sub_63CD70(0x26);
        sub_6805F0(v7, v6, (int)&v8);
        v9 = a2[1] - 2;
        v10 = 6;
        v11 = 0;
        if (v9 > v10)
        {
            do
            {
                v12 = v10;
                sub_63E0D0((int)this, a3, 3, v10, v12, v10);
                v10 += 2;
                v9 = a2[1] - 2;
            } while (v10 < v9);
        }
        sub_680680((int)&v8);
    }

    return (int)a2;
}
