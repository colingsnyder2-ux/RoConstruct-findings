// from server: 90% by colin
// roc 2007-08 0045bc50  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bc50

extern unsigned int g_flag;
extern unsigned int g_a;
extern unsigned int g_b;
extern unsigned int g_c;

unsigned int* sub_45BC50()
{
    unsigned int one = 1;
    if (!(g_flag & one)) {
        g_flag |= one;
        g_a = 0;
        g_b = 0;
    }
    return &g_c;
}
