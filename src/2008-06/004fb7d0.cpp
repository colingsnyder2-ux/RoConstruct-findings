// from server: 23% by atomic.potato
// roc 2008-06 004fb7d0  unit: RBX::ViewNew::TorsoBuilder  size: 739 bytes

extern "C" void __cdecl sub_5EC200(void*, void*);
extern "C" void* __cdecl sub_6A0956(int);
extern "C" void __cdecl sub_6A094A(void*);
extern "C" void* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(void*, void*, void*, int);
extern "C" void __cdecl sub_548640(void*);
extern "C" void __cdecl sub_500EB0(void*, void*, void*, void*);

extern float g_819bac;

struct TorsoBuilder {
    char pad0[4];
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

void TorsoBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float v44, v48, v4c, v50, v54;
    float f18, f1c, f20, f24;
    float f28, f2c, f30, f34;
    float f38, f3c, f40;
    float f60, f64, f68, f6c, f70;
    float f74, f78, f7c;
    int n34, n36;
    int i2, j2;
    void* arr;
    float fx, fy;
    float f10, f14;
    int idx;

    sub_5EC200((char*)this + 4, &f60);

    f74 = (float)(f60 < 0 ? -f60 : f60);
    n34 = (short)a;
    f78 = (float)(f64 < 0 ? -f64 : f64);
    n36 = (short)b;
    f7c = (float)(f68 < 0 ? -f68 : f68);

    v44 = (float)(n34 + 1);
    v48 = (float)(n36 + 1);
    v4c = (float)(n34 + 1);
    v50 = (float)(n36 + 1);
    v54 = (float)(n34 + 1);

    v44 = (f - c) / v44;
    v48 = (g - d) / v48;
    v4c = (h - e) / v4c;
    v50 = (i - j) / v50;
    v54 = k / v54;

    arr = sub_6A0956((n34 + 1) * (n36 + 1) * 4);

    f18 = (float)c;
    f1c = (float)e;
    f20 = (float)j;
    f24 = (float)k;

    i2 = 0;
    while (i2 <= n34) {
        f10 = (float)d;
        f14 = (float)i;
        j2 = 0;
        while (j2 <= n36) {
            f38 = f10;
            f3c = f14;
            f40 = 1.0f;
            f60 = f18;
            f64 = f1c;
            f68 = f20;
            f6c = f24;
            f70 = 1.0f;
            sub_5EC200(&f60, &f74);
            sub_5EC200(&f74, &f70);
            sub_548000(&f70, &f6c, &f60, 1);
            f38 += f60;
            f3c += f64;
            idx = (n36 + 1) * i2 + j2;
            ((void**)arr)[idx] = (void*)0;
            j2++;
            f10 += v44;
            f14 += v48;
        }
        i2++;
        f18 += v4c;
        f1c += v50;
    }

    i2 = 0;
    while (i2 < n34) {
        j2 = 0;
        while (j2 < n36) {
            idx = (n36 + 1) * i2 + j2;
            sub_500EB0((void*)0, ((void**)arr)[idx], ((void**)arr)[idx + 1], ((void**)arr)[idx + n36 + 1]);
            j2++;
        }
        i2++;
    }

    i2 = 0;
    while (i2 < (unsigned)((n34 + 1) * (n36 + 1))) {
        sub_548640(((void**)arr)[i2]);
        i2++;
    }

    sub_6A094A(arr);
}
