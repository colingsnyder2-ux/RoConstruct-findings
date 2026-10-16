// from server: 22% by colin
// roc 2008-06 004fb1f0  unit: RBX::ViewNew::TorsoBuilder  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fb1f0

extern "C" {
    int __cdecl sub_6784d0(void* dst, void* src);
    void* __cdecl sub_6a0956(int count);
    void __cdecl sub_6a094a(void* p);
    void __cdecl sub_548640(void* p);
    int __cdecl sub_548000(void* a, void* b, void* c, int d);
    float* __cdecl sub_509ba0();
    void __cdecl sub_500eb0(void* self, int a, int b, int c, int d);
}

extern float g_819bac;

struct TorsoBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

void TorsoBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float local_64[4];
    float local_74[4];
    float local_54[4];
    float local_7c[4];
    float local_90[4];
    float local_60[4];
    float local_3c[4];
    float local_18[4];
    float local_70[4];
    float local_5c[4];
    float local_68[4];
    float local_34v;
    float local_38v;
    float local_44;
    float local_48;
    float local_4c;
    float local_50;
    float local_1c;
    float local_20;
    float local_10;
    float local_14;

    sub_6784d0(local_64, &field4);

    float fabs0 = local_64[1];
    if (fabs0 < 0) fabs0 = -fabs0;
    local_74[0] = fabs0;

    int n34 = (short)a;
    int n36 = (short)b;

    float fabs1 = local_64[2];
    if (fabs1 < 0) fabs1 = -fabs1;
    local_74[1] = fabs1;

    float fabs2 = local_64[3];
    if (fabs2 < 0) fabs2 = -fabs2;
    local_74[2] = fabs2;

    int n34p1 = n34 + 1;
    int n36p1 = n36 + 1;
    int total = n36p1 * n34p1;

    float f1 = (float)n34p1;
    float f2 = (float)n36p1;

    local_44 = ((float)c - (float)d) / f1;
    local_48 = ((float)e - (float)f) / f2;
    local_4c = (float)g / f1;
    local_50 = (float)h / f2;

    int* arr = (int*)sub_6a0956(total * 4);

    local_1c = (float)d;
    local_20 = (float)f;

    int i2 = 0;
    int j2 = 0;
    while (j2 <= n34) {
        float fz = 0.0f;
        float f10 = (float)e;
        local_1c = (float)d;
        local_20 = (float)f;
        int k2 = 0;
        while (k2 <= n36) {
            float local_60v;
            float local_68v;
            float local_70v;
            float local_5cv;

            local_60v = local_1c;
            local_68v = local_20;
            local_70v = (float)i;
            local_5cv = local_1c;
            local_34v = local_1c;
            local_38v = local_20;

            local_18[0] = local_1c;
            local_18[1] = local_20;
            local_18[2] = 1.0f;

            ((void (__stdcall*)(void*, void*, void*, void*, void*))*(void**)((char*)this + 8))(local_18, local_70, local_5c, local_68, local_60);

            float* sh = sub_509ba0();
            if (sh[0] == (float)g && sh[1] == (float)h) {
                local_34v = (float)g;
                local_38v = (float)h;
            }

            float t1 = local_34v * g_819bac;
            float t2 = local_38v * g_819bac;
            local_54[0] = t1;
            local_54[1] = t2;

            sub_6784d0(local_7c, local_54);
            sub_6784d0(local_90, local_74);
            sub_548000(local_60, local_90, local_7c, 1);

            local_34v = local_60[0] + local_34v;
            local_38v = local_60[1] + local_38v;

            int idx = (n36 + 1) * i2 + k2;
            arr[idx] = (int)local_60;

            k2++;
            if (k2 > n36) break;
        }
        local_1c = local_34v + local_1c;
        local_20 = local_44 + local_20;
        i2++;
        if (i2 > n34) break;
    }

    int m = 0;
    int n = 0;
    while (n < n34) {
        int p = 0;
        if (n36 > 0) {
            while (p < n36) {
                int base = (n36 + 1) * n + p;
                int a0 = arr[base];
                int a1 = arr[base + 1];
                int a2 = arr[base + n36 + 1];
                int a3 = arr[base + n36 + 2];
                sub_500eb0((void*)this, a0, a1, a2, a3);
                p++;
            }
        }
        n++;
    }

    int q = 0;
    while (q < total) {
        sub_548640((void*)arr[q]);
        q++;
    }

    sub_6a094a(arr);
}
