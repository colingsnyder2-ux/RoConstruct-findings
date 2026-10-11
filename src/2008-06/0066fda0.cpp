// from server: 55% by tester
struct AdornRbxGfx {
    void render3dAdorn(float* a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
};

extern "C" void __stdcall sub_684730(int, int, int, int, int, int, int, int, int, int, int);

void AdornRbxGfx::render3dAdorn(float* a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    float v0 = a[0];
    int n = (*(int (__thiscall **)(void))(*(int *)this + 0x18))();
    n--;
    float v1 = (float)n - a[1];
    float v2 = v0;
    float v3 = v1;
    int* p = (int*)0x962dac;
    sub_684730(*p, (int)&v2, b, c, d, e, f, g, h, i, j);
    a[0] = v2;
    a[1] = v3;
}
