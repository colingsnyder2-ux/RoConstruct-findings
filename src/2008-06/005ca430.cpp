// from server: 35% by tester
struct AIController {
    char pad[0x28];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    void compute(float* v);
};

extern "C" float __cdecl atan2f(float, float);

extern float g_839ff0;
extern float g_839fec;
extern float g_839fe8;
extern float g_826fc8;
extern double g_839fe0;
extern double g_839fd8;
extern float g_839fd0;

void AIController::compute(float* v) {
    float a = -v[0];
    float b = -v[2];
    float angle = atan2f(a, b);
    float zero = 0.0f;
    float x, y, z;
    if (angle > g_839ff0) {
        x = g_839fec;
        y = g_826fc8;
        z = g_826fc8;
    } else if (angle < g_839fe8) {
        x = g_826fc8;
        y = g_826fc8;
        z = g_839fec;
    } else if ((double)angle > g_839fe0) {
        x = angle;
        y = g_826fc8;
        z = g_826fc8;
    } else if ((double)angle > g_839fd8) {
        x = g_826fc8;
        y = g_826fc8;
        z = angle;
    } else {
        x = g_826fc8;
        y = angle;
        z = g_826fc8;
    }
    this->field_28 = x;
    this->field_2c = y;
    this->field_30 = z * g_839fd0;
    if (angle <= v[2]) {
        this->field_34 = angle;
    } else {
        this->field_34 = angle;
    }
}
