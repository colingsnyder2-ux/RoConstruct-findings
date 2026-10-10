// from server: 18% by colin
// roc 2007-08 004f9570  unit: G3D::Lighting  size: 722 bytes

struct Color3 { float r, g, b; };

struct LightingParams {
    float a, b, c, d;
};

struct G3DLighting {
    char pad0[0xa4];
    LightingParams params;      // 0xa4
    char pad1[0x2e8 - 0xa4 - 0x10];
    bool hasSky;                // 0x2e8
    char pad2[0x3e1 - 0x2e9];
    bool flag3e1;               // 0x3e1
    bool flag3e2;               // 0x3e2
    bool flag3e3;               // 0x3e3
};

struct RenderThing {
    char pad0[0x70];
    int counter70;              // 0x70
    int counter78;              // 0x78
    char pad1[0x3e1 - 0x7c];
    bool flag3e1;               // 0x3e1
    bool flag3e2;               // 0x3e2
    bool flag3e3;               // 0x3e3
    char pad2[0x44c - 0x3e4];
    int handle44c;              // 0x44c
    char pad3[0x4a8 - 0x450];
    float vec4a8[4];            // 0x4a8
};

extern "C" {
    void __stdcall glColor3fv(const float* v);
    void __stdcall glColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void __stdcall glDepthMask(unsigned char flag);
    void __stdcall glShadeModel(unsigned int mode);
}

extern unsigned char g_8bfc1c;
extern int g_8bfc14;
extern int g_8bfc18;
extern int g_8bfc10;
extern float g_79f7a8;
extern double g_79eb40;
extern double g_79f348;
extern double g_79f7a0;

void __cdecl sub_630d23(void* p);
void __cdecl sub_47cfc0();
void __cdecl sub_4f8860();
void __cdecl sub_4f8960();
void __cdecl sub_4f8130();
void __cdecl sub_479690();
void __cdecl sub_4739d0();
void __cdecl sub_50b200();
void __cdecl sub_473780();
void __cdecl sub_474170();
void __cdecl sub_474a00();
bool __cdecl sub_46cb90();
void __cdecl sub_473eb0();
void __cdecl sub_474100();
void __cdecl sub_4744b0();
void __cdecl sub_475050();
void __cdecl sub_4744e0();
void __cdecl sub_4796d0();

struct Lighting {
    void render(float dt, int a, int b, int c);
};

void Lighting::render(float dt, int a, int b, int c)
{
    G3DLighting* self = (G3DLighting*)this;
    RenderThing* rt = (RenderThing*)this;

    if (!(g_8bfc1c & 1)) {
        g_8bfc1c |= 1;
        g_8bfc14 = 0;
        g_8bfc18 = 0;
        g_8bfc10 = 0;
        sub_630d23((void*)0x7791e0);
    }

    float v = dt * (float)g_79eb40;
    float t = g_79f7a8;
    if (t < v) v = t;

    sub_47cfc0();
    sub_4f8860();
    sub_4f8960();

    sub_479690();
    sub_4739d0();

    if (self->hasSky) {
        sub_50b200();
        rt->vec4a8[0] = 0.0f;
        rt->vec4a8[1] = 0.0f;
        rt->vec4a8[2] = 0.0f;
        rt->vec4a8[3] = 1.0f;
        glColor3fv(rt->vec4a8);
        sub_473780();
        sub_474170();
        rt->counter78 += 1;
        if (rt->flag3e1) {
            rt->counter70 += 1;
            glDepthMask(0);
            rt->flag3e1 = 0;
        }
    } else {
        rt->counter78 += 1;
        if (rt->flag3e1) {
            rt->counter70 += 1;
            glDepthMask(0);
            rt->flag3e1 = 0;
        }
        rt->counter78 += 1;
        if (rt->flag3e2) {
            rt->counter70 += 1;
            glColorMask(rt->flag3e3 ? 1 : 0, 0, 0, 0);
            rt->flag3e2 = 0;
        }
        sub_4739d0();
        sub_474a00();
        if (sub_46cb90()) {
            sub_473780();
            sub_473eb0();
        } else {
            sub_473780();
            sub_474100();
        }
        sub_4744b0();
    }

    rt->counter78 += 1;
    if (rt->handle44c) {
        rt->handle44c = 0;
        glShadeModel(0x1d00);
        rt->counter70 += 1;
    }

    sub_475050();
    sub_4744e0();

    sub_4f8130();

    if (!sub_46cb90() && !self->hasSky) {
        sub_473780();
        sub_474100();
        sub_4f8130();
        sub_473780();
        sub_474100();
    }

    sub_4796d0();
}
