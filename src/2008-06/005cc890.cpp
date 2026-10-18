// from server: 53% by colin
extern "C" double __cdecl acos(double);

extern float g_828b60;
extern float g_83a310;
extern float g_81e704;
extern float g_83a3ec;

struct GCamera {
    float data[9];
    void getVector(int index, float* out);
};

struct VCamera {
    char pad[0x174];
    GCamera camera;
    void sub_5cc740(float angle);
    void sub_5cc890(int arg);
};

void GCamera::getVector(int index, float* out) {
    out[0] = data[index];
    out[1] = data[index + 3];
    out[2] = data[index + 6];
}

void VCamera::sub_5cc890(int arg) {
    float v = g_828b60;
    float vec[3];
    camera.getVector(2, vec);
    float x = vec[0] * v;
    float y = vec[1] * v;
    float z = vec[2] * v;
    float len = acos((double)z);
    float a = len * g_83a310 * g_81e704;
    int i = (int)a;
    int total = i + arg;
    float result = (float)total * g_83a3ec - x;
    sub_5cc740(result);
}
