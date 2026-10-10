// from server: 63% by colin
struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(float, float, float);
};

struct Hole {
    char pad[0xe8];
    bool isInHole(const Vector3&) const;
    void render3dAdorn(int);
};

extern float g_79f758;
extern float g_7ab980;

extern "C" void __stdcall sub_475050(Vector3*);
extern "C" int __stdcall sub_50b190();
extern "C" void __stdcall sub_62e7a0(int, Vector3*, int, float, float, int);

void Hole::render3dAdorn(int adorn)
{
    Vector3 v;
    sub_475050(&v);
    if (isInHole(v)) {
        int a = sub_50b190();
        sub_62e7a0(adorn, &v, 2, g_7ab980, g_79f758, a);
    }
}
