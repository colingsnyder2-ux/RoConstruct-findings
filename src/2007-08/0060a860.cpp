// from server: 40% by colin
struct JointBuilder
{
    void buildJoint(void* a, void* b);
};

struct Joint
{
    char pad[0x64];
    void* jointData;
};

struct JointData
{
    char pad[0x84];
    void getTransform(void* out);
};

struct Transform
{
    float data[9];
    float x;
    float y;
    float z;
};

struct WeldJoint
{
    void computeWorld(void* a, void* b, void* c);
};

extern "C" void __stdcall sub_5B4950(void* out, void* in);
extern "C" void __stdcall sub_530100(void* p);
extern "C" void __stdcall sub_473200(void* out, void* in);
extern "C" void __stdcall sub_5BA2C0(void* out, void* in);

void WeldJoint::computeWorld(void* a, void* b, void* c)
{
    Transform t1;
    Transform t2;
    void* jd1;
    void* jd2;

    sub_5B4950(&t1, a);
    *(Transform*)b = t1;

    jd1 = *(void**)((char*)this + 0x64);
    sub_530100(jd1);
    sub_473200(&t2, (char*)jd1 + 0x84);

    jd2 = *(void**)((char*)c + 0x64);
    sub_530100(jd2);
    sub_5BA2C0(&t2, (char*)jd2 + 0x84);

    *(Transform*)c = t2;
}
