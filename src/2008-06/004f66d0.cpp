// from server: 25% by colin
struct PBBBuilder {
    char pad0[4];
    int field4;
    void build(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __cdecl sub_6784d0(void*, void*);
    void* __cdecl sub_6a0956(int);
    float* __cdecl sub_509ba0();
    void __cdecl sub_548000(void*, void*, void*, int);
    void __cdecl sub_500eb0(void*, int, int, int, int);
    void __cdecl sub_548640(void*);
    void __cdecl sub_6a094a(void*);
    void __cdecl sub_6a067a(void*);
    int __stdcall InterlockedDecrement(int*);
}

extern float g_819bac;

void PBBBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t)
{
    float f0, f1, f2, f3, f4, f5, f6, f7;
    int w0, w1, w2, w3;
    float* fp;
    int* ip;
    int cnt;
    int idx;
    int row, col;
    int nrows, ncols;
    float stepx, stepy;
    float startx, starty;
    float curx, cury;
    float uu, vv;
    int* indices;
    int nverts;
    int i2;
    void* p1;
    int* ref;

    sub_6784d0(&this->field4, &w0);

    ncols = (short)((int*)&a)[0];
    nrows = (short)((int*)&a)[1];

    f0 = *(float*)&b;
    f1 = *(float*)&c;
    f2 = *(float*)&d;
    f3 = *(float*)&e;
    f4 = *(float*)&f;
    f5 = *(float*)&g;
    f6 = *(float*)&h;
    f7 = *(float*)&i;

    stepx = (f1 - f0) / (float)(ncols + 1);
    stepy = (f3 - f2) / (float)(nrows + 1);

    startx = f4 / (float)(ncols + 1);
    starty = f5 / (float)(nrows + 1);

    nverts = (ncols + 1) * (nrows + 1);

    indices = (int*)sub_6a0956(nverts * 4 * 4);

    curx = f0;
    cury = f2;

    if (nrows >= 0) {
        for (row = 0; row <= nrows; row++) {
            float rx = curx;
            float ry = cury;
            if (ncols >= 0) {
                for (col = 0; col <= ncols; col++) {
                    float px = rx;
                    float py = ry;
                    float pz = f6;
                    float pw = 1.0f;
                    float* sh = sub_509ba0();
                    if (sh[0] == f7 && sh[1] == f4) {
                        uu = f1;
                        vv = f2;
                    } else {
                        uu = px;
                        vv = py;
                    }
                    uu *= g_819bac;
                    vv *= g_819bac;
                    sub_6784d0(&uu, &w1);
                    sub_6784d0(&vv, &w2);
                    sub_548000(&w3, &w1, &w2, 1);
                    rx += stepx;
                    ry += stepy;
                    idx = (ncols + 1) * row + col;
                    indices[idx] = w3;
                }
            }
            curx += startx;
            cury += starty;
        }
    }

    for (row = 0; row < nrows; row++) {
        for (col = 0; col < ncols; col++) {
            int base = (ncols + 1) * row + col;
            int a0 = indices[base];
            int a1 = indices[base + 1];
            int a2 = indices[base + ncols + 1];
            int a3 = indices[base + ncols + 2];
            sub_500eb0(this, a0, a1, a2, a3);
        }
    }

    for (i2 = 0; i2 < nverts; i2++) {
        sub_548640((void*)indices[i2]);
    }
    sub_6a094a(indices);

    if (w0 != 0) {
        if (InterlockedDecrement((int*)(w0 + 4)) == 0) {
            void* p = *(void**)(w0 + 8);
            while (p != 0) {
                void* next = *(void**)((char*)p + 4);
                (*(void(**)(void*))**(void***)p)(p);
                sub_6a067a(p);
                p = next;
            }
            if (w0 != 0) {
                (*(void(**)(void*, int))**(void***)w0)((void*)w0, 1);
            }
        }
    }
}
