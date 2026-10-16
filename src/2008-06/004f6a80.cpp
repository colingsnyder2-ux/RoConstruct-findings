// from server: 31% by colin
extern "C" {
    int __stdcall sub_5ec200(void*, void*);
    int __stdcall sub_6a0956(int);
    void* __stdcall sub_509ba0();
    int __stdcall sub_548000(void*, void*, void*, int);
    int __stdcall sub_500eb0(int, int, int, int);
    int __stdcall sub_548640(void*);
    int __stdcall sub_6a094a(void*);
    int __stdcall sub_6a067a(void*);
    int __stdcall sub_8021ac(void*);
}

struct PBBBuilder {
    void func_004f6a80(
        int a1, int a2, int a3, int a4,
        int a5, int a6, int a7, int a8,
        int a9, int a10, int a11, int a12,
        int a13, int a14, int a15, int a16,
        int a17, int a18, int a19, int a20);
};

void PBBBuilder::func_004f6a80(
    int a1, int a2, int a3, int a4,
    int a5, int a6, int a7, int a8,
    int a9, int a10, int a11, int a12,
    int a13, int a14, int a15, int a16,
    int a17, int a18, int a19, int a20)
{
    char buf[0x6c];
    int* p = (int*)buf;
    p[0] = 0;
    sub_5ec200((char*)this + 4, buf + 0x48);

    short s1 = *(short*)((char*)&a1 + 0x30);
    short s2 = *(short*)((char*)&a1 + 0x32);
    int n1 = s1 + 1;
    int n2 = s2 + 1;
    int total = n1 * n2;

    float f1 = *(float*)((char*)&a1 + 0x10) - *(float*)((char*)&a1 + 0x08);
    float f2 = *(float*)((char*)&a1 + 0x14) - *(float*)((char*)&a1 + 0x0c);
    float f3 = *(float*)((char*)&a1 + 0x28);
    float f4 = *(float*)((char*)&a1 + 0x2c);

    float r1 = f1 / (float)n1;
    float r2 = f2 / (float)n2;
    float r3 = f3 / (float)n1;
    float r4 = f4 / (float)n2;

    int* arr = (int*)sub_6a0956(total * 4);

    float base1 = *(float*)((char*)&a1 + 0x0c);
    float base2 = *(float*)((char*)&a1 + 0x20);
    float step1 = *(float*)((char*)&a1 + 0x18);
    float step2 = *(float*)((char*)&a1 + 0x1c);

    int i;
    float acc1 = 0.0f;
    float acc2 = 0.0f;
    for (i = 0; i <= s2; i++) {
        float cur1 = base1;
        float cur2 = base2;
        int j;
        for (j = 0; j <= s1; j++) {
            float v1 = cur1;
            float v2 = cur2;
            float v3 = *(float*)((char*)&a1 + 0x10);
            float v4 = 1.0f;

            if (v3 < v4) {
                v4 = v4 - *(float*)((char*)&a1 + 0x04);
            } else {
                v4 = v4 + *(float*)((char*)&a1 + 0x04);
            }

            float v5 = v4;
            if (v5 < v2) {
                v5 = v5 - v2;
            } else {
                v5 = v5 + v2;
            }

            float* g = (float*)sub_509ba0();
            float gx = g[0];
            float gy = g[1];
            float rx, ry;
            if (gx == *(float*)((char*)&a1 + 0x24) && gy == *(float*)((char*)&a1 + 0x28)) {
                rx = *(float*)((char*)&a1 + 0x14);
                ry = *(float*)((char*)&a1 + 0x18);
            } else {
                rx = v1;
                ry = v2;
            }

            float scale = *(float*)0x819bac;
            rx = rx * scale;
            ry = ry * scale;

            float tmp1[4];
            float tmp2[4];
            sub_5ec200(&v1, tmp1);
            sub_5ec200(&v3, tmp2);
            sub_548000(tmp2, tmp1, &v5, 1);

            cur1 = cur1 + r1;
            cur2 = cur2 + r2;
            arr[i * n1 + j] = (int)sub_548000(tmp2, tmp1, &v5, 1);
        }
        acc1 = acc1 + r3;
        acc2 = acc2 + r4;
    }

    for (i = 0; i < s2; i++) {
        int j;
        for (j = 0; j < s1; j++) {
            int idx = i * n1 + j;
            sub_500eb0(arr[idx], arr[idx + 1], arr[idx + n1], arr[idx + n1 + 1]);
        }
    }

    for (i = 0; i < total; i++) {
        sub_548640((void*)arr[i]);
    }
    sub_6a094a(arr);

    if (a20) {
        if (sub_8021ac((char*)a20 + 4) == 0) {
            void* node = *(void**)((char*)a20 + 8);
            while (node) {
                void* next = *(void**)((char*)node + 4);
                (*(void(**)(void*))**(void***)node)(node);
                sub_6a067a(node);
                node = next;
            }
            if (a20) {
                (*(void(**)(int))**(void***)a20)(1);
            }
        }
    }
}
