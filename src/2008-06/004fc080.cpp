// from server: 34% by atomic.potato
// roc 2008-06 004fc080  unit: RBX::ViewNew::TorsoBuilder  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fc080

extern "C" __declspec(dllimport) double __stdcall ceil(double);
extern "C" __declspec(dllimport) double __stdcall fabs(double);

struct V2 { float x, y; };
struct V3 { float x, y, z; };

struct TorsoBuilder {
    char pad0[0x10];
    unsigned int flags;
    void build(int a, int b, int c);
};

extern "C" void __cdecl sub_5EC1C0(void*, void*);
extern "C" void __cdecl sub_4F35D0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4FAF00(void*, void*);
extern "C" float __cdecl sub_4F1FF0(int);
extern "C" void __cdecl sub_5185D0(V3*, V2*);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void TorsoBuilder::build(int a, int b, int c)
{
    unsigned int v = flags;
    unsigned int ebp = (v >> 3) & 7;
    V2 v2;
    sub_5EC1C0(&v2, &flags);
    float f0 = (float)fabs((double)v2.x);
    float f1 = (float)fabs((double)v2.y);
    float f2 = (float)fabs((double)*(float*)&a);
    float arr[3];
    arr[0] = f0;
    arr[1] = f1;
    arr[2] = f2;
    int esi;
    if (c == 0) {
        if (f0 == f1) esi = 0; else esi = 1;
    } else {
        esi = 1;
    }
    int ebx;
    if (c == 0 && ebp != 0) {
        ebx = (int)ceil((double)arr[esi] * g_819bac);
    } else {
        ebx = 1;
    }
    short s0 = 0;
    short s1 = 0;
    short idx = *(short*)((char*)&s1 + 2 - esi * 2);
    int q = (int)idx / ebx;
    short qs = (short)q;
    short one = 1;
    int tmp1 = 1;
    int tmp2 = (int)qs;
    short* p = (one < qs) ? (short*)&tmp1 : (short*)&tmp2;
    short chosen = *p;
    float fv = arr[2];
    short out[2];
    out[esi] = chosen;
    out[1 - esi] = idx;
    V2 r1, r2;
    sub_5185D0((V3*)&v2, &r1);
    r1.x = -r1.x;
    r1.y = -r1.y;
    sub_5185D0((V3*)&v2, &r2);
    float z = 0.0f;
    float p0 = z, p1 = z, p2 = z, p3 = z;
    int mode = c;
    if (mode == 0) {
        if (ebp == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p2 = g_819bac;
            p3 = g_819bac;
        } else {
            p1 = sub_4F1FF0(ebp);
            p0 = arr[2] * 2.0f;
            p2 = g_819bac;
            if (esi == 1) p2 = -p2;
        }
    } else if (mode == 1) {
        p0 = z;
        p1 = r1.y;
        p2 = r1.x;
        p3 = -r1.y;
    } else if (mode == 2) {
        p0 = z;
        p1 = z;
        p2 = z;
        p3 = z;
    }
    int i = 0;
    if (ebx > 0) {
        float* fp = &arr[0];
        do {
            float cur;
            if (i == ebx - 1) {
                cur = arr[esi];
                fp[esi] = cur;
                if (c == 0 && *(int*)&p3 != 0) {
                    p2 = (cur - arr[esi + 2]) * p2 * g_83a3e4;
                }
            } else {
                cur = arr[esi + 2] + g_826e6c;
                fp[esi] = cur;
            }
            float args[2];
            args[0] = p2;
            args[1] = p1;
            float args2[2];
            args2[0] = p0;
            args2[1] = p3;
            sub_4F35D0(&v2, args2, args, &out[0], &out[1]);
            sub_4FAF00(&v2, (void*)&out[0]);
            arr[esi + 2] = fp[esi];
            i++;
        } while (i < ebx);
    }
}
