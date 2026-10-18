// from server: 27% by colin
extern "C" int __stdcall InterlockedDecrement(int*);

struct WedgeBuilder {
    char pad0[4];
    int field4;
    void buildBottom(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u);
};

extern "C" void __cdecl sub_5ec200(void*, void*);
extern "C" void* __cdecl sub_6a0956(int);
extern "C" void __cdecl sub_6a094a(void*);
extern "C" void __cdecl sub_6a067a(void*);
extern "C" void* __cdecl sub_509ba0();
extern "C" int __cdecl sub_548000(void*, void*, void*, int);
extern "C" void __cdecl sub_548640(void*);

extern float g_819bac;

void WedgeBuilder::buildBottom(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u)
{
    char buf[0x6c];
    sub_5ec200(&field4, buf);

    short w1 = *(short*)((char*)&a + 0);
    short w2 = *(short*)((char*)&a + 2);

    float f1 = *(float*)((char*)&a + 8);
    float f2 = *(float*)((char*)&a + 12);
    float f3 = *(float*)((char*)&a + 16);
    float f4 = *(float*)((char*)&a + 20);
    float f5 = *(float*)((char*)&a + 24);
    float f6 = *(float*)((char*)&a + 28);
    float f7 = *(float*)((char*)&a + 32);
    float f8 = *(float*)((char*)&a + 36);
    float f9 = *(float*)((char*)&a + 40);
    float f10 = *(float*)((char*)&a + 44);
    float f11 = *(float*)((char*)&a + 48);
    float f12 = *(float*)((char*)&a + 52);

    int n1 = w1 + 1;
    int n2 = w2 + 1;
    int total = n1 * n2;

    float r1 = (f2 - f1) / (float)n1;
    float r2 = (f4 - f3) / (float)n2;

    void* arr = sub_6a0956(total * 4);

    float base1 = f1;
    float base2 = f3;

    int idx = 0;
    for (int i2 = 0; i2 <= w2; i2++) {
        float cur1 = base1;
        float cur2 = base2;
        for (int j2 = 0; j2 <= w1; j2++) {
            float v1 = cur1;
            float v2 = cur2;
            float v3 = f5;
            float v4 = f6;
            float v5 = f7;
            float v6 = f8;

            float t1 = f10;
            if (v1 < t1) v3 = v3 - t1; else v3 = v3 + t1;
            float t2 = f9;
            if (v2 < t2) v4 = v4 - t2; else v4 = v4 + t2;

            float* gv = (float*)sub_509ba0();
            float gx = gv[0];
            float gy = gv[1];
            if (gx == f11 && gy == f12) {
                v5 = f4;
                v6 = f5;
            } else {
                v5 = v1;
                v6 = v2;
            }
            v5 = v5 * g_819bac;
            v6 = v6 * g_819bac;

            float p1[2], p2[2], p3[2];
            sub_5ec200(&v3, p1);
            sub_5ec200(&v5, p2);
            int r = sub_548000(p3, p2, p1, 1);

            cur1 = cur1 + r1;
            cur2 = cur2 + r2;
            ((int*)arr)[idx] = r;
            idx++;
        }
    }

    for (int i3 = 0; i3 < total; i3++) {
        sub_548640(((void**)arr)[i3]);
    }
    sub_6a094a(arr);

    if (field4) {
        int* p = (int*)(field4 + 4);
        if (InterlockedDecrement(p) == 0) {
            int* node = *(int**)(field4 + 8);
            while (node) {
                int* vt = *(int**)node;
                (*(void(**)(void*))(*(int*)vt + 4))(node);
                int* next = *(int**)(node + 1);
                sub_6a067a(node);
                node = next;
            }
            if (field4) {
                int* vt = *(int**)field4;
                (*(void(**)(void*, int))(*(int*)vt))((void*)field4, 1);
            }
        }
    }
}
