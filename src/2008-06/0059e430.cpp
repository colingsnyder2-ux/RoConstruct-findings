// from server: 50% by colin
struct VCRenderSettings {
    unsigned char pad[0x328];
    float value;
    void setEnum(float v);
};

extern float g_min;
extern float g_max;
extern float g_one;
extern void (__cdecl *g_notify)(float);

void VCRenderSettings::setEnum(float v)
{
    if (!(v < g_min) && !(v > g_max)) {
        if (value != g_one) {
            value = g_one;
            g_notify(g_one);
        }
    } else if (v < g_min) {
        if (value != g_min) {
            value = g_min;
            g_notify(g_min);
        }
    } else {
        if (value != g_max) {
            value = g_max;
            g_notify(g_max);
        }
    }
}
