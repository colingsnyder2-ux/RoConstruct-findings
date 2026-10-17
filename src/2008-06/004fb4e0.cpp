// from server: 20% by colin
struct Vector3 {
    float x, y, z;
};

struct TorsoBuilder {
    int field0;
    int field4;
    void build(
        void* callback,
        float f0c, float f10, float f14, float f18,
        float f1c, float f20, float f24, float f28, float f2c,
        int n30,
        short n34, short n36);
};

extern "C" void __cdecl sub_5EC1E0(Vector3* out, const Vector3* in);
extern "C" void* __cdecl sub_6A0956(unsigned int size);
extern "C" Vector3* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(Vector3* out, const Vector3* a, const Vector3* b, int flag);
extern "C" void __cdecl sub_500EB0(void* self, int a, int b, int c, int d);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_6A094A(void* p);

extern float g_819bac;

void TorsoBuilder::build(
    void* callback,
    float f0c, float f10, float f14, float f18,
    float f1c, float f20, float f24, float f28, float f2c,
    int n30,
    short n34, short n36)
{
    Vector3 tmp;
    sub_5EC1E0(&tmp, (const Vector3*)((char*)this + 4));

    float ax = tmp.x < 0 ? -tmp.x : tmp.x;
    float ay = tmp.y < 0 ? -tmp.y : tmp.y;
    float az = tmp.z < 0 ? -tmp.z : tmp.z;

    int nx = (int)n34 + 1;
    int ny = (int)n36 + 1;
    int total = nx * ny;

    float stepX = (f14 - f0c) / (float)nx;
    float stepY = (f18 - f10) / (float)ny;
    float stepZ = (f28 - f24) / (float)nx;
    float stepW = f2c / (float)ny;

    void** arr = (void**)sub_6A0956((unsigned int)total * 4);

    float curX = f0c;
    float curY = f20;

    for (int i = 0; i <= (int)n34; i++) {
        float rowX = f10;
        float rowY = f24;
        for (int j = 0; j <= (int)n36; j++) {
            Vector3 p;
            p.x = curX;
            p.y = rowX;
            p.z = rowY;

            Vector3 q;
            q.x = curX;
            q.y = rowX;
            q.z = rowY;

            Vector3 r;
            r.x = f1c;
            r.y = f1c;
            r.z = 1.0f;

            ((void (__cdecl*)(Vector3*, Vector3*, Vector3*, Vector3*))callback)(&p, &q, &r, &p);

            Vector3* g = sub_509BA0();
            if (g->x == f28 && g->y == f2c) {
                p.x = f20;
                p.y = f24;
            }

            Vector3 a;
            a.x = p.x * g_819bac;
            a.y = p.y * g_819bac;
            a.z = p.z * g_819bac;

            Vector3 b;
            sub_5EC1E0(&b, &a);

            Vector3 c;
            sub_5EC1E0(&c, &b);

            Vector3 d;
            sub_548000(&d, &c, &b, 1);

            curX += d.x;
            curY += d.y;

            int idx = (int)n36 + 1;
            idx = idx * j + i;
            arr[idx] = (void*)&d;

            rowX += stepX;
            rowY += stepY;
        }
        curX += stepX;
        curY += stepY;
    }

    for (int i = 0; i < (int)n34; i++) {
        for (int j = 0; j < (int)n36; j++) {
            int base = (int)n36 + 1;
            base = base * i + j;
            int next = base + (int)n36 + 1;
            sub_500EB0(this, (int)arr[base], (int)arr[base + 1], (int)arr[next], (int)arr[next + 1]);
        }
    }

    for (unsigned int i = 0; i < (unsigned int)total; i++) {
        sub_548640(arr[i]);
    }

    sub_6A094A(arr);
}
