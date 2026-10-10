// from server: 50% by colin
struct AIController {
    char pad[0x28];
    float field28;
    float field2c;
    float field30;
    float field34;
    void func(const float* p);
};

extern "C" float atan2f(float, float);

extern float g_7b1168;
extern float g_7b1164;
extern float g_7a4cc4;
extern float g_7b1160;
extern double g_7b1158;
extern double g_7b1150;
extern float g_7b1148;

void AIController::func(const float* p) {
    float a = -p[0];
    float b = -p[2];
    float ang = atan2f(a, b);
    if (ang == g_7b1168) {
        field28 = g_7b1164;
        field2c = g_7a4cc4;
        field30 = g_7a4cc4;
    } else if (ang > g_7b1160) {
        field28 = g_7a4cc4;
        field2c = g_7b1164;
        field30 = g_7a4cc4;
    } else if (ang < (float)g_7b1158) {
        field28 = g_7a4cc4;
        field2c = g_7a4cc4;
        field30 = g_7b1164;
    } else if (ang < (float)g_7b1150) {
        field28 = g_7a4cc4;
        field2c = g_7a4cc4;
        field30 = g_7a4cc4;
    } else {
        field28 = g_7a4cc4;
        field2c = g_7a4cc4;
        field30 = g_7a4cc4;
    }
    field30 = field30 * g_7b1148;
    if (ang == p[2]) {
        field34 = ang;
    } else {
        field34 = ang;
    }
}
