// from server: 19% by colin
// roc 2008-06 004f6fa0  unit: RBX::ViewNew::WedgeBuilder
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6fa0

extern "C" {
    __declspec(dllimport) int __stdcall InterlockedDecrement(int volatile*);
    __declspec(dllimport) int __stdcall InterlockedIncrement(int volatile*);
    __declspec(dllimport) double __cdecl ceil(double);
}

struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct WedgeBuilder {
    char pad0[4];
    int field4;
    char pad8[8];
    int field10;
    char pad14[8];
    float field18;
    float field1c;
    void buildBottom(int purpose);
};

extern "C" void __cdecl sub_6784d0(void*, void*);
extern "C" void __cdecl sub_5185d0(void*, void*);
extern "C" float __cdecl sub_4f1ff0(int);
extern "C" void __cdecl sub_4f35d0(void*, void*, void*);
extern "C" void __cdecl sub_4f66d0(void*);
extern "C" void __cdecl sub_6a067a(void*);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void WedgeBuilder::buildBottom(int purpose)
{
    int mode = (field10 >> 6) & 7;
    float v50, v54, v58;
    sub_6784d0(&field4, &v50);
    float a = v50 < 0 ? -v50 : v50;
    float b = v54 < 0 ? -v54 : v54;
    float c = v58 < 0 ? -v58 : v58;
    v50 = a;
    v54 = b;
    v58 = c;

    int flag;
    if (purpose == 0) {
        if (a == b) flag = 1; else flag = 0;
    } else {
        flag = 0;
    }
    int edi = flag ? 0 : 1;

    int ebx;
    if (purpose == 0 && mode != 0) {
        float f = (edi == 0) ? v50 : v54;
        ebx = (int)ceil(f * g_819bac);
    } else {
        ebx = 1;
    }

    short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    short s0 = *(short*)((char*)&v58 + (edi == 0 ? 0 : 0));
    (void)s0;

    int idx = edi;
    short val = *(short*)((char*)&v58 - idx * 2);
    int q = (int)val / ebx;
    short qs = (short)q;
    short one = 1;
    short chosen = (one < qs) ? qs : one;
    arr[idx] = chosen;

    float fv58 = v58;
    Vector2 v2a, v2b;
    sub_5185d0(&v50, &v2a);
    sub_5185d0(&v50, &v2b);

    float f24 = 0, f28 = 0, f2c = 0, f30 = 0;
    int p = purpose;
    if (p == 0) {
        if (mode == 0) {
            f2c = g_83a3e4;
            f30 = g_819bac;
            f28 = g_819bac;
            f24 = g_83a3e4;
        } else {
            f30 = sub_4f1ff0(mode);
            f2c = v58 * 2.0f;
            f24 = g_819bac;
            if (edi == 1) f24 = -f24;
        }
    } else if (p == 1) {
        f2c = 0;
        f30 = field1c;
        f24 = field18;
        f28 = -field1c;
    } else if (p == 2) {
        f24 = 0;
        f28 = 0;
        f2c = 0;
        f30 = 0;
    }

    int i = 0;
    while (i < ebx) {
        float f34, f3c;
        if (i == ebx - 1) {
            f34 = (edi == 0) ? v50 : v54;
            if (purpose == 0 && ebx != 0) {
                f24 = (f34 - f3c) * f24 * g_83a3e4;
            }
        } else {
            f34 = f3c + g_826e6c;
        }

        float fa = f24;
        float fb = f30;
        float fc = f2c;
        float fd = f28;

        Vector3 v3;
        sub_4f35d0(&v3, &v2a, &v2b);

        sub_4f66d0(&v3);

        f3c = f34;
        i++;
    }

    if (purpose == 0) {
        // cleanup path
    }
}
