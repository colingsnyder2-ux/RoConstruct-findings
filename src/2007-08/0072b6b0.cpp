// from server: 48% by colin
extern "C" int __stdcall sub_72D2C0(int, int, int);
extern "C" int __stdcall sub_72D3D0(int, int, int);
extern "C" int __stdcall sub_72E9B0(int);

struct S {
    int f(int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4)
{
    int v[14];
    int r;
    int t;

    v[0] = a1;
    v[1] = a2;
    v[2] = a3;
    v[3] = a4;
    v[4] = 0;
    v[5] = 0;
    v[6] = 0;
    v[7] = 0;
    v[8] = 0;
    v[9] = 0;
    v[10] = 0;
    v[11] = 0;
    v[12] = 0;
    v[13] = 0;

    r = sub_72D2C0((int)&v[0], 0x7a2c08, 0x38);
    if (r != 0)
        return r;

    r = sub_72D3D0((int)&v[0], 4, (int)&v[0]);
    if (r == 1) {
        v[0] = v[1];
        sub_72E9B0((int)&v[0]);
        return 0;
    }

    sub_72E9B0((int)&v[0]);

    if (r == 2)
        return -3;
    if (r == -5 && v[0] == 0)
        return -3;

    return r;
}
