// from server: 97% by colin
struct S_func_00666350 {
    void f(float* out);
};

static int g_init_97d974;
static float g_97d968;
static float g_97d96c;
static float g_97d970;
extern float g_819dcc;
extern float g_82746c;

void S_func_00666350::f(float* out)
{
    if (!(g_init_97d974 & 1)) {
        g_init_97d974 |= 1;
        g_97d968 = g_819dcc;
        g_97d96c = g_82746c;
        g_97d970 = g_819dcc;
    }
    out[0] = g_97d968;
    out[1] = g_97d96c;
    out[2] = g_97d970;
}
