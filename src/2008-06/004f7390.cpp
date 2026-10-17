// from server: 13% by colin
struct Vector3 { float x, y, z; };
struct Vector2 { float x, y; };

extern "C" {
    __declspec(dllimport) int __stdcall InterlockedDecrement(int*);
    __declspec(dllimport) int __stdcall InterlockedIncrement(int*);
    __declspec(dllimport) double __cdecl ceil(double);
}

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

float __cdecl sub_4f1ff0(int);
void __cdecl sub_4f35d0();
void __cdecl sub_4f6a80();
void __cdecl sub_5185d0(Vector3* dst, Vector3* src);
void __cdecl sub_5ec200(void* dst, void* src);
void __cdecl sub_6a067a(void* p);

struct WedgeBuilder {
    int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
};

int WedgeBuilder::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int ebp = (*(int*)((char*)this + 0x10) >> 12) & 7;

    float v50, v54, v58;
    sub_5ec200(&v50, (char*)this + 4);

    float f50 = v50 < 0 ? -v50 : v50;
    float f54 = v54 < 0 ? -v54 : v54;
    float f58 = v58 < 0 ? -v58 : v58;

    int edi;
    if (a11 == 0) {
        if (f50 == f54) {
            edi = 0;
        } else {
            edi = 1;
        }
    } else {
        edi = 1;
    }

    int ebx;
    if (a11 == 0 && ebp != 0) {
        float t = (edi == 0 ? f50 : f54) * g_819bac;
        ebx = (int)ceil(t);
    } else {
        ebx = 1;
    }

    short arr10[2];
    arr10[0] = 0;
    arr10[1] = 0;

    short v18;
    short v1c = 1;

    short src = *(short*)((char*)&a9 + 2 - edi * 2);
    int q = (int)src / ebx;
    v18 = (short)q;

    short chosen = (v1c < v18) ? v18 : v1c;
    arr10[edi] = chosen;

    Vector3 tmpA;
    Vector3 tmpB;
    sub_5185d0(&tmpA, &tmpA);
    tmpA.x = -tmpA.x;
    tmpA.y = -tmpA.y;
    sub_5185d0(&tmpB, &tmpB);

    float v2c = 0, v30 = 0, v24 = 0, v28 = 0;

    int mode = a10;
    if (mode == 0) {
        if (ebp == 0) {
            v2c = g_83a3e4;
            v30 = g_819bac;
            v24 = g_819bac;
            v28 = g_819bac;
        } else {
            v30 = 0;
            v30 = sub_4f1ff0(ebp);
            v2c = v58 * 2.0f;
            v24 = g_819bac;
            if (edi == 1) {
                v24 = -v24;
            }
        }
    } else if (mode == 1) {
        v2c = 0;
        v30 = *(float*)((char*)this + 0x1c);
        v24 = *(float*)((char*)this + 0x18);
        v28 = -*(float*)((char*)this + 0x1c);
    } else if (mode == 2) {
        v2c = 0;
        v30 = 0;
        v24 = 0;
        v28 = 0;
    }

    float v34 = 0, v3c = 0;

    for (int i = 0; i < ebx; i++) {
        if (i == ebx - 1) {
            v34 = (edi == 0 ? f50 : f54);
            if (a10 == 0 && a11 != 0) {
                float d = v34 - v3c;
                v24 = d * v24 * g_83a3e4;
            }
        } else {
            v34 = v3c + g_826e6c;
        }

        sub_4f35d0();
        sub_4f6a80();
        v3c = v34;
    }

    return 0;
}
