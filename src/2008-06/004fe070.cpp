// from server: 22% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc 2008-06 004fe070  unit: RBX::ViewNew::CylinderBuilder  size: 723 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fe070

extern "C" void __cdecl sub_5EC200(float *dst, float *src);
extern "C" void *__cdecl sub_6A0956(int size);
extern "C" void __cdecl sub_6A094A(void *p);
extern "C" void __cdecl sub_548640(void *p);
extern "C" int __cdecl sub_548000(float *a, float *b, float *c, int d);
extern "C" float *__cdecl sub_509BA0();
extern "C" void __cdecl sub_4FDCC0(void *self, float *a, float *b, float *c, float *d, float *e);
extern "C" void __cdecl sub_500EB0(void *self, int a, int b, int c, int d);

extern float g_819bac;

struct CylinderBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

void CylinderBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float v58, v5c, v60, v64, v68, v6c, v70, v74;
    float v2c, v30, v34, v38, v3c, v40, v44, v48, v4c, v50, v54;
    float v14, v18, v1c, v20, v24, v28;
    float v0c, v10;
    int n34, n36;
    int i2, j2;
    int *arr;
    int total;
    float *tmp;

    sub_5EC200(&v58, (float *)&field4);

    v6c = (float)(v58 < 0 ? -v58 : v58);
    n34 = *(short *)((char *)&a + 0x28);
    v70 = (float)(v5c < 0 ? -v5c : v5c);
    n36 = *(short *)((char *)&a + 0x2a);
    v74 = (float)(v60 < 0 ? -v60 : v60);

    v3c = (float)(*(float *)((char *)&a + 8) - *(float *)&a) / (float)(n34 + 1);
    v40 = (float)(*(float *)((char *)&a + 0xc) - *(float *)((char *)&a + 4)) / (float)(n36 + 1);
    v44 = *(float *)((char *)&a + 0x1c) / (float)(n34 + 1);
    v48 = *(float *)((char *)&a + 0x20) / (float)(n36 + 1);
    v4c = *(float *)((char *)&a + 0x24);

    total = (n36 + 1) * (n34 + 1);
    arr = (int *)sub_6A0956(total * 4);

    v0c = *(float *)&a;
    v10 = *(float *)((char *)&a + 0x14);

    for (i2 = 0; i2 <= n34; i2++) {
        v14 = *(float *)((char *)&a + 4);
        v18 = *(float *)((char *)&a + 0x18);
        for (j2 = 0; j2 <= n36; j2++) {
            float v58b, v5cb, v60b;
            float v2cb, v30b;
            float v34b, v38b;
            float v54b;
            float *r;

            v58b = v0c;
            v5cb = v14;
            v60b = *(float *)((char *)&a + 0x10);

            v2cb = v0c;
            v30b = v14;
            v34b = v0c;
            v38b = v14;

            sub_4FDCC0((char *)&a + 4, &v2cb, &v30b, &v34b, &v38b, &v54b);

            r = sub_509BA0();
            if (r[0] == *(float *)((char *)&a + 0x1c) && r[1] == *(float *)((char *)&a + 0x20)) {
                v2cb = *(float *)((char *)&a + 0x14);
                v30b = *(float *)((char *)&a + 0x18);
            }

            v2cb *= g_819bac;
            v30b *= g_819bac;

            sub_5EC200(&v4c, &v2cb);
            sub_5EC200(&v64, &v58b);

            arr[i2 * (n36 + 1) + j2] = sub_548000(&v64, &v58b, &v4c, 1);

            v34b += v58b;
            v38b += v5cb;

            v14 += v40;
            v18 += v48;
        }
        v0c += v3c;
        v10 += v44;
    }

    for (i2 = 0; i2 < n34; i2++) {
        for (j2 = 0; j2 < n36; j2++) {
            sub_500EB0((char *)&a + 4,
                arr[i2 * (n36 + 1) + j2],
                arr[i2 * (n36 + 1) + j2 + 1],
                arr[(i2 + 1) * (n36 + 1) + j2 + 1],
                arr[(i2 + 1) * (n36 + 1) + j2]);
        }
    }

    for (i2 = 0; i2 < total; i2++) {
        sub_548640((void *)arr[i2]);
    }

    sub_6A094A(arr);
}
