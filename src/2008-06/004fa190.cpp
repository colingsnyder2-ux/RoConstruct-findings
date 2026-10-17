// from server: 19% by colin
struct Vector2 { float x, y; };
struct Vector3 { float x, y, z; };

extern "C" {
    float __stdcall ceil(double);
    long __stdcall InterlockedIncrement(long*);
    long __stdcall InterlockedDecrement(long*);
}

struct TorsoBuilder {
    char pad[0x10];
    unsigned int flags;
    char pad2[0x80 - 0x14];
    void* list;
    void build(float a, float b, float c, float d, float e, float f,
               float g, float h, float i, float j, float k, float l);
};

float __stdcall sub_4f1ff0(int);
void __stdcall sub_4f35d0(void*, void*, void*, void*);
void __stdcall sub_4f9ca0(void*, void*, void*);
void __stdcall sub_5185d0(Vector2* out, Vector3* in);
void __stdcall sub_5ec200(void*, void*);
void __stdcall sub_6a067a(void*);

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

void TorsoBuilder::build(float a, float b, float c, float d, float e, float f,
                         float g, float h, float i, float j, float k, float l)
{
    unsigned int mode = (this->flags >> 12) & 7;

    float v[3];
    sub_5ec200(&this->pad[4], v);

    float fa = v[0] < 0 ? -v[0] : v[0];
    float fb = v[1] < 0 ? -v[1] : v[1];
    float fc = v[2] < 0 ? -v[2] : v[2];

    int idx;
    if (a == 0.0f) {
        idx = (fa == fb) ? 0 : 1;
    } else {
        idx = 1;
    }

    int count;
    if (a == 0.0f && mode != 0) {
        float scaled = (idx == 0 ? fa : fb) * g_819bac;
        count = (int)ceil((double)scaled);
    } else {
        count = 1;
    }

    short arr[2];
    arr[0] = 0;
    short orig = *(short*)((char*)&a + (idx == 0 ? 0 : 2));
    int q = (int)orig / count;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;
    arr[idx] = chosen;
    arr[1 - idx] = orig;

    float f1 = fc;
    float f2 = fb;
    float f3 = fa;

    Vector2 v2a, v2b;
    sub_5185d0(&v2a, (Vector3*)&v[0]);
    sub_5185d0(&v2b, (Vector3*)&v[0]);

    float p0 = -v2a.x;
    float p1 = -v2a.y;
    float p2 = -v2b.x;
    float p3 = -v2b.y;

    float r0 = 0, r1 = 0, r2 = 0, r3 = 0;

    switch (mode) {
    case 0:
        if (mode == 0) {
            r0 = g_83a3e4;
            r1 = g_819bac;
            r2 = g_819bac;
            r3 = g_819bac;
        }
        break;
    case 1:
        r0 = 0;
        r1 = this->pad[0x1c];
        r2 = this->pad[0x18];
        r3 = -this->pad[0x1c];
        break;
    case 2:
        r0 = 0;
        r1 = 0;
        r2 = 0;
        r3 = 0;
        break;
    default:
        break;
    }

    for (int n = 0; n < count; n++) {
        float t;
        if (n == count - 1) {
            t = (idx == 0 ? fa : fb);
            if (mode == 0 && a != 0.0f) {
                float diff = t - (idx == 0 ? r2 : r3);
                float mul = (idx == 0 ? r0 : r1);
                t = diff * mul * g_83a3e4;
            }
        } else {
            t = (idx == 0 ? r2 : r3) + g_826e6c;
        }

        float u = (idx == 0 ? r0 : r1);
        float w = (idx == 0 ? r2 : r3);

        float args[6];
        args[0] = u;
        args[1] = w;
        args[2] = p0;
        args[3] = p1;
        args[4] = p2;
        args[5] = p3;

        sub_4f35d0(&args[0], &args[2], &args[4], &args[0]);
        sub_4f9ca0(&args[0], &args[0], &args[0]);

        if (idx == 0) {
            r2 = t;
        } else {
            r3 = t;
        }
    }

    void* list = this->list;
    if (list) {
        if (InterlockedDecrement((long*)((char*)list + 4)) == 0) {
            void* node = *(void**)((char*)list + 8);
            while (node) {
                void* next = *(void**)((char*)node + 4);
                void* data = *(void**)node;
                void** vt = *(void***)data;
                ((void(__thiscall*)(void*))vt[1])(data);
                sub_6a067a(node);
                node = next;
            }
            if (list) {
                void** vt = *(void***)list;
                ((void(__thiscall*)(void*, int))vt[0])(list, 1);
            }
        }
    }
}
