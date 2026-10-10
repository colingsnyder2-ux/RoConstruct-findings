// from server: 29% by colin
struct Vec3 { float x, y, z; };

struct Arg0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void getPos(Vec3* out);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void getCFrame(void* out);
    virtual void v11();
    virtual void v12();
    virtual void setProp(void* a, void* b, int c, int d, void* e, void* f, double g);
};

extern "C" void __cdecl sub_4e0180(void*, void*, void*);
extern "C" void* __cdecl sub_50b190();
extern "C" void* __cdecl sub_50b200();

extern float dword_797E9C;
extern double qword_7BFE68;

struct P8Script {
    void GetSetImpl(Arg0* arg);
};

void P8Script::GetSetImpl(Arg0* arg)
{
    Vec3 pos;
    arg->getPos(&pos);

    float a = pos.x + pos.y;
    float b = pos.z + pos.x;
    float c = a * dword_797E9C;
    float d = b * dword_797E9C;

    float v14 = c;
    float v18 = d;

    float v3c = pos.x;
    float v40 = pos.y;
    float v44 = pos.z;
    float v48 = 1.0f;

    sub_4e0180(&v3c, &v14, &v18);

    Vec3 pos2;
    arg->getCFrame(&pos2);

    Vec3* p1 = (Vec3*)sub_50b190();
    float f30 = p1->x;
    float f34 = p1->y;
    float f38 = p1->z;
    float f3c = 1.0f;

    Vec3* p2 = (Vec3*)sub_50b200();
    float f40 = p2->x;
    float f48 = p2->y;
    float f54 = p2->z;
    float f5c = 1.0f;

    arg->setProp(&f30, &f40, 2, 2, 0, &v3c, qword_7BFE68);
}
