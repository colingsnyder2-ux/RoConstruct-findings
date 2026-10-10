// from server: 76% by tester
struct S_func_00481b80 {
    int m0;
    int m4;
    int m8;
    int m12;
    int m16;
    int m20;
    void f();
};

static int g_00a3c694;
static int g_00a3c698;
static int g_00a3c69c;
static unsigned char g_00a3c6a0;
static int g_00a3c6a4;
static int g_00a3c6a8;
static int g_00a3c6ac;
static unsigned char g_00a3c6b0;

void S_func_00481b80::f()
{
    if (!(g_00a3c6a0 & 1)) {
        g_00a3c6a0 |= 1;
        g_00a3c694 = 0x7fffffff;
        g_00a3c698 = 0x7fffffff;
        g_00a3c69c = 0x7fffffff;
    }
    m0 = g_00a3c694;
    m4 = g_00a3c698;
    m8 = g_00a3c69c;

    if (!(g_00a3c6b0 & 1)) {
        g_00a3c6b0 |= 1;
        g_00a3c6a4 = (int)0x80000000;
        g_00a3c6a8 = (int)0x80000000;
        g_00a3c6ac = (int)0x80000000;
    }
    m12 = g_00a3c6a4;
    m16 = g_00a3c6a8;
    m20 = g_00a3c6ac;
}
