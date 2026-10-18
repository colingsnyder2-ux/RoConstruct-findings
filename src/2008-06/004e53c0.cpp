// from server: 39% by atomic.potato
struct S {
    int vtable;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
    int fc0;
    int fc4;
    int fc8;
    int fcc;
    int fd0;
    int fd4;
    int fd8;
    int fdc;
    int fe0;
    int fe4;
    int fe8;
    int fec;
    int ff0;
    int ff4;
    int ff8;
    int ffc;
    int init(int a, int b, int c, float d, int e, int f, int g);
};

extern "C" void __stdcall sub_548570();
extern "C" void __stdcall sub_4e3720(S* self, int a, int b, int c, float d, int e, int f, int g);
extern "C" void __stdcall sub_4e2c80(S* self, int a, int b, int c);
extern "C" void __stdcall sub_4e3570(S* self, int a, int b, int c);

extern int g_96de64;
extern int g_942ec4;
extern float g_819bac;
extern float g_972758;

int S::init(int a, int b, int c, float d, int e, int f, int g)
{
    sub_548570();
    this->vtable = 0x826e7c;
    this->f84 = 1;
    if (a && b && c)
    {
        sub_4e3720(this, a, b, c, d, e, f, g);
    }
    else
    {
        sub_4e2c80(this, e, f, g);
    }
    if (g_96de64 && !g_942ec4)
    {
        float x = e * g_819bac;
        float y = f * g_819bac;
        float z = g * g_819bac;
        float w = g_972758 - x;
        float h = y - w;
        float v = z - h;
        sub_4e3570(this, (int)x, (int)w, (int)v);
    }
    return 0;
}
