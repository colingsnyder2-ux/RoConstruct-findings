// from server: 30% by colin
struct Vector2 { float x; float y; };
struct Vector3 { float x; float y; float z; };

extern "C" double __stdcall ceil(double);

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

void __cdecl sub_5ec1c0(void* dst, void* src);
void __cdecl sub_5185d0(Vector2* out, const Vector3* v);
float __cdecl sub_4f1ff0(int n);
void __cdecl sub_4f35d0(Vector3* a, Vector3* b, Vector3* c, int d, int e, float f, float g);
void __cdecl sub_4f51a0(int a, int b);

struct PBBBuilder {
    int field0;
    int field4;
    int field8;
    int fieldC;
    unsigned int field10;
    void func(float a, float b, float c, int d, int e, int f);
};

void PBBBuilder::func(float a, float b, float c, int d, int e, int f)
{
    float v44, v48, v4c;
    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;
    v44 = fa;
    v48 = fb;
    v4c = fc;

    int ebp = (this->field10 >> 3) & 7;

    Vector2 tmp;
    sub_5ec1c0(&tmp, &this->field4);

    int esi;
    if (f == 0) {
        if (fa == fb) {
            esi = 0;
        } else {
            esi = 1;
        }
    } else {
        esi = 1;
    }

    int ebx;
    if (f == 0 && ebp != 0) {
        float* arr = &v44;
        double r = ceil((double)(arr[esi] * g_819bac));
        ebx = (int)r;
    } else {
        ebx = 1;
    }

    short w10 = 0;
    short w12 = 0;
    short* base = &w10;
    short val = base[esi];
    int q = (int)val / ebx;
    unsigned short uq = (unsigned short)q;
    int i18 = (int)uq;
    int i20 = 1;
    short cmpv = (short)uq;
    int* psel;
    if ((short)1 < cmpv) {
        psel = &i18;
    } else {
        psel = &i20;
    }
    short sel = *(short*)psel;
    short* dst = &w10;
    dst[esi] = sel;

    float v20 = v4c;
    short* dst2 = &w12;
    dst2[esi] = val;

    Vector2 r1;
    sub_5185d0(&r1, (const Vector3*)&v44);
    float nx = -r1.x;
    float ny = -r1.y;

    Vector2 r2;
    sub_5185d0(&r2, (const Vector3*)&v48);
    float nz = -r2.x;
    float nw = -r2.y;

    float f28 = 0.0f;
    float f2c = 0.0f;
    float f18 = 0.0f;
    float f1c = 0.0f;

    if (f == 0) {
        if (ebp == 0) {
            f28 = g_83a3e4;
            f2c = g_819bac;
            float* arr = &f1c;
            arr[esi] = g_819bac;
            float* arr2 = &f18;
            arr2[esi] = g_819bac;
        } else {
            float* arr = &f2c;
            arr[esi] = 0.0f;
            float r = sub_4f1ff0(ebp);
            float* arr2 = &f2c;
            arr2[esi] = r;
            float* arr3 = &v4c;
            float t = arr3[esi];
            float* arr4 = &f18;
            arr4[esi] = t + t;
            float* arr5 = &f18;
            arr5[esi] = g_819bac;
            if (esi == 1) {
                f18 = -f18;
            }
        }
    } else if (f == 1) {
        f28 = 0.0f;
        f2c = 0.0f;
        f18 = 0.0f;
        f1c = 0.0f;
    } else if (f == 2) {
        f28 = 0.0f;
        f2c = 0.0f;
        f18 = 0.0f;
        f1c = 0.0f;
    }

    for (int i = 0; i < ebx; i++) {
        if (i == ebx - 1) {
            float* arr = &v44;
            float t = arr[esi];
            float* arr2 = &v44;
            arr2[esi] = t;
            if (f == 0 && d != 0) {
                float* arr3 = &v48;
                float t2 = t - arr3[esi];
                float* arr4 = &f18;
                t2 = t2 * arr4[esi];
                t2 = t2 * g_83a3e4;
                float* arr5 = &f18;
                arr5[esi] = t2;
            }
        } else {
            float* arr = &v48;
            float t = arr[esi] + g_826e6c;
            float* arr2 = &v44;
            arr2[esi] = t;
        }

        Vector3 va;
        va.x = f18;
        va.y = f2c;
        va.z = f28;
        Vector3 vb;
        vb.x = v44;
        vb.y = v48;
        vb.z = v4c;
        Vector3 vc;
        vc.x = f1c;
        vc.y = f2c;
        vc.z = f28;
        sub_4f35d0(&va, &vb, &vc, esi, ebp, 0.0f, 0.0f);
        sub_4f51a0(esi, ebp);
        float* arr = &v44;
        float t = arr[esi];
        float* arr2 = &v48;
        arr2[esi] = t;
    }
}
