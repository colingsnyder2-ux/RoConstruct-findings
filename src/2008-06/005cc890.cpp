// from server: 50% by colin
extern "C" double __cdecl acos(double);

struct GCamera {
    float getAxis(int axis, float* out);
};

struct VCamera {
    char pad[0x174];
    GCamera camera;
    float update(float angle);
};

extern const float g_828b60;
extern const float g_83a310;
extern const float g_81e704;
extern const float g_83a3ec;

float VCamera::update(float angle)
{
    float tmp = g_828b60;
    float v[3];
    camera.getAxis(2, v);
    float x = v[0] * tmp;
    float y = v[1] * tmp;
    float z = v[2] * tmp;
    float a = (float)acos(x);
    float b = a * g_83a310;
    float c = b * g_81e704;
    int i = (int)c;
    int total = i + *(int*)&angle;
    float d = (float)total * g_83a3ec;
    float e = d - y;
    return e;
}
