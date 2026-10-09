// from server: 81% by colin
// roc 2007-08 0046f710  unit: seg_00400000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f710

struct Set {
    static int instance();
};

extern unsigned char g_8bd050;
extern int g_8bd054;
extern int g_8bd058;
extern int g_8bd05c;
extern float g_8bd060;
extern unsigned char g_8bd064;
extern int g_8bd070;

void sub_46f6a0(int *p);

int Set::instance()
{
    int one = 1;
    if ((g_8bd070 & one) == 0) {
        g_8bd070 |= one;
        sub_46f6a0(&g_8bd054);
    }
    if (g_8bd050 == 0) {
        g_8bd050 = (unsigned char)one;
        g_8bd060 = 1.0f;
        g_8bd054 = 2;
        g_8bd058 = 0;
        g_8bd05c = 0;
        g_8bd064 = 0;
    }
    return (int)&g_8bd054;
}
