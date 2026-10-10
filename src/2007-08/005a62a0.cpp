// from server: 65% by colin
struct GCamera {
    float getAxis(int index, float* out);
};

struct Humanoid {
    char pad[0x64];
    GCamera* camera;
};

struct Instance {
    char pad[0x1d8];
    Humanoid* humanoid;
};

extern float g_scale;

extern "C" Instance* __cdecl getLocalPlayer();
extern "C" void __cdecl someFunc(float* v);

struct VHumanoid {
    float compute();
};

float VHumanoid::compute() {
    Instance* inst = getLocalPlayer();
    if (!inst) return 0.0f;
    Humanoid* h = inst->humanoid;
    if (!h) return 0.0f;
    GCamera* cam = h->camera;
    cam->getAxis(0, 0);
    float s = g_scale;
    float v[3];
    cam->getAxis(2, v);
    v[0] *= s;
    v[1] *= s;
    v[2] *= s;
    someFunc(v);
    return 0.0f;
}
