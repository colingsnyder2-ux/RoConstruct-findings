// from server: 27% by colin
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
    void build(float *args);
};

void CylinderBuilder::build(float *args)
{
    float v58, v5c, v60;
    float v64, v68, v6c, v70, v74;
    float v2c, v30, v34, v38, v3c, v40, v44, v48, v4c, v50, v54;
    float v14, v18, v1c, v20, v24, v28;
    float v0c, v10;
    int n34, n36;
    int i2, j2;
    int *arr;
    int total;

    sub_5EC200(&v58, (float *)&field4);

    v6c = (float)(v58 < 0 ? -v58 : v58);
    n34 = *(short *)((char *)args + 0x28);
    v70 = (float)(v5c < 0 ? -v5c : v5c);
    n36 = *(short *)((char *)args + 0x2a);
    v74 = (float)(v60 < 0 ? -v60 : v60);

    v3c = (args[2] - args[0]) / (float)(n34 + 1);
    v40 = (args[3] - args[1]) / (float)(n36 + 1);
    v44 = args[7] / (float)(n34 + 1);
    v48 = args[8] / (float)(n36 + 1);
    v4c = args[9];

    total = (n36 + 1) * (n34 + 1);
    arr = (int *)sub_6A0956(total * 4);

    v0c = args[0];
    v10 = args[5];

    for (i2 = 0; i2 <= n34; i2++) {
        v14 = args[1];
        v18 = args[6];
        for (j2 = 0; j2 <= n36; j2++) {
            float v58b, v5cb, v60b;
            float v2cb, v30b;
            float v34b, v38b;
            float v54b;
            float *r;

            v58b = v0c;
            v5cb = v14;
            v60b = args[4];

            v2cb = v0c;
            v30b = v14;
            v34b = v0c;
            v38b = v14;

            sub_4FDCC0((char *)args + 4, &v2cb, &v30b, &v34b, &v38b, &v54b);

            r = sub_509BA0();
            if (r[0] == args[7] && r[1] == args[8]) {
                v2cb = args[5];
                v30b = args[6];
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
            sub_500EB0((char *)args + 4,
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
