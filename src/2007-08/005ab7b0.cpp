// from server: 46% by colin
// roc 2007-08 005ab7b0  unit: RBX::World  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab7b0

extern float g_angleBias;

struct Vector3f {
    float x;
    float y;
    float z;
};

extern "C" float* __cdecl sub_509640(float* out, int mode);
extern "C" float __cdecl sub_631352();
extern "C" float __cdecl atan2f(float y, float x);

struct World {
    void computeAngle(const Vector3f* v, float* outAngle, float* outOther);
};

void World::computeAngle(const Vector3f* v, float* outAngle, float* outOther)
{
    float tmp[2];
    float bias = g_angleBias;
    float* p = sub_509640(tmp, 2);
    float a = p[0] * bias;
    float b = p[1] * bias;
    float c = p[2] * bias;
    *outAngle = atan2f(-b, -a);
    *outOther = sub_631352();
}
