// from server: 92% by colin
// roc 2007-08 00557260  unit: seg_00550000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557260

extern int g_8c6830;
extern int g_8c6834;
extern float g_79646c;

struct ChatEnter {
    float f();
};

float ChatEnter::f()
{
    int sum = g_8c6830 + g_8c6834;
    if (sum == 0)
        return g_79646c;
    return (float)g_8c6830 / (float)sum;
}
