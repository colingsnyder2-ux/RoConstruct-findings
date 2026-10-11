// from server: 74% by atomic.potato
struct RBX_HeadBuilder {
    float field0;
    float field4;
    char field8;
    char field9;
    char pad[2];
    void func(float* a, float* b);
};

extern float g_8ca464;

void RBX_HeadBuilder::func(float* a, float* b)
{
    float zero = 0.0f;
    if (zero > a[0]) {
        a[0] = a[0] - g_8ca464;
    } else {
        a[0] = a[0] + g_8ca464;
    }
    if (zero > a[1]) {
        a[1] = a[1] - g_8ca464;
    } else {
        a[1] = a[1] + g_8ca464;
    }
    if (field8 != 0) {
        a[2] = (a[0] / b[0]) * field0;
    } else {
        a[2] = field0;
    }
    if (field9 != 0) {
        a[3] = (field4 / b[1]) * a[1];
    } else {
        a[3] = field4;
    }
}
