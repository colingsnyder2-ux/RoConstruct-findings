// from server: 28% by colin
struct Vector3 {
    float x, y, z;
};

struct PBBBuilder {
    int f(short, short, float, float, float, float, float, float, float, float, float, float);
};

extern "C" void __cdecl sub_5EC1C0(Vector3* out, const Vector3* in);
extern "C" void* __cdecl sub_6A0956(unsigned int size);
extern "C" float* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(Vector3* out, const Vector3* a, const Vector3* b, int c);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_6A094A(void* p);
extern "C" void __cdecl sub_500EB0(PBBBuilder* self, void* a, void* b, void* c, void* d);

extern float g_819bac;

int PBBBuilder::f(short a1, short a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12)
{
    Vector3 v;
    sub_5EC1C0(&v, (const Vector3*)((char*)this + 4));

    short w1 = a1;
    short w2 = a2;
    int n1 = w1 + 1;
    int n2 = w2 + 1;
    int count = n1 * n2;

    float f1 = ((float)w1) / (a3 - a4);
    float f2 = ((float)w2) / (a5 - a6);
    float f3 = a7 / a8;
    float f4 = a9 / a10;

    void** arr = (void**)sub_6A0956(count * 4);

    float baseX = a3;
    float baseY = a5;

    int i = 0;
    float accX = 0.0f;
    float accY = 0.0f;
    float stepX = a11;
    float stepY = a12;

    for (; i <= (int)w2; i++) {
        int j = 0;
        float cx = baseX;
        float cy = baseY;
        for (; j <= (int)w1; j++) {
            Vector3 p;
            p.x = cx;
            p.y = cy;
            p.z = 1.0f;

            float t1 = a3;
            float t2 = a5;

            float* sh = sub_509BA0();
            if (sh[0] == a11 && sh[1] == a12) {
                t1 = a5;
                t2 = a6;
            } else {
                t1 = cx;
                t2 = cy;
            }

            float m = g_819bac;
            Vector3 q;
            q.x = t1 * m;
            q.y = t2 * m;
            q.z = 1.0f;

            Vector3 r;
            sub_5EC1C0(&r, &q);

            Vector3 s;
            sub_5EC1C0(&s, &p);

            Vector3 out;
            sub_548000(&out, &s, &r, 1);

            accX += out.x;
            accY += out.y;

            int idx = (i + 1) * (int)w1 + j;
            arr[idx] = (void*)(int)out.x;

            cx += stepX;
            cy += stepY;
        }
        baseX += f1;
        baseY += f2;
    }

    for (int k = 0; k < (int)w2; k++) {
        for (int l = 0; l < (int)w1; l++) {
            int idx = (k + 1) * (int)w1 + l;
            sub_500EB0(this, arr[idx], arr[idx + 1], arr[idx + (int)w1], arr[idx + (int)w1 + 1]);
        }
    }

    for (unsigned int m = 0; m < (unsigned int)count; m++) {
        sub_548640(arr[m]);
    }

    sub_6A094A(arr);
    return 0;
}
