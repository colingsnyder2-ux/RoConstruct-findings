// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vec3 {
    float x, y, z;
};

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    volatile long refCount;
    volatile long weakCount;
};

struct Camera {
    char pad0[0x148];
    RefCounted** begin;
    RefCounted** end;
};

struct CameraHolder {
    virtual Camera* getCamera();
};

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct Workspace : Instance {
    char pad0[0x288 - 0x108];
    virtual CameraHolder* getCameraHolder();
};

struct Command {
    char pad0[0xc];
    Workspace* workspace;
    virtual bool isEnabled() const;
    virtual void doIt(void* dataState);
};

struct CameraCenterCommand : Command {
    virtual bool isEnabled() const;
    virtual void doIt(void* dataState);
};

extern float g_centerX;
extern float g_centerY;
extern float g_centerZ;
extern int g_centerInit;
extern float g_scale;

extern "C" void _invalid_parameter_noinfo();

Camera* func_00581d80(Camera* cam, int);

void func_0057dee0(Vec3* dst, const Vec3* src);

void func_00513220(Vec3* dst, const Vec3* src);

Vec3* func_00513e20();

void func_005cddd0(Camera* cam);

void func_005cdf00(Camera* cam);

ServiceProvider* func_005807b0(Instance* p);

void func_005bd820(void* p);

bool CameraCenterCommand::isEnabled() const {
    return true;
}

void CameraCenterCommand::doIt(void* dataState) {
    Camera* cam = this->workspace->getCameraHolder()->getCamera();
    Vec3 center;
    center.x = 0.0f;
    center.y = 0.0f;
    center.z = 0.0f;

    Camera* c = func_00581d80(cam, 1);
    int count = (int)((c->end - c->begin) >> 2);
    if (count >= 1) {
        Camera* c2 = func_00581d80(cam, 1);
        int count2 = (int)((c2->end - c2->begin) >> 2);
        if (count2 == 0) {
            _invalid_parameter_noinfo();
        }
        RefCounted* first = c2->begin[0];
        Vec3 tmp;
        first->v21();
        center = tmp;

        for (int i = 1; i < count2; ++i) {
            RefCounted* item = c2->begin[i];
            Vec3 tmp2;
            item->v21();
            func_0057dee0(&center, &tmp2);
        }

        float sx = center.x + center.x;
        float sy = center.y + center.y;
        float sz = center.z + center.z;
        float s = g_scale;
        center.x = sx * s;
        center.y = sy * s;
        center.z = sz * s;
    } else {
        if (!(g_centerInit & 1)) {
            g_centerInit |= 1;
            g_centerX = 0.0f;
            g_centerY = 0.0f;
            g_centerZ = 0.0f;
        }
        center.x = g_centerX;
        center.y = g_centerY;
        center.z = g_centerZ;
    }

    Camera* cam2 = this->workspace->getCameraHolder()->getCamera();
    func_005cddd0(cam2);

    Vec3* def = func_00513e20();
    Vec3 tmp3;
    func_00513220(&tmp3, def);

    Camera* cam3 = this->workspace->getCameraHolder()->getCamera();
    Vec3 out;
    out.x = center.x;
    out.y = center.y;
    out.z = center.z;
    func_005cdf00(cam3);

    ServiceProvider* sp = func_005807b0(this->workspace);
    func_005bd820(sp);

    RefCounted* rc = (RefCounted*)dataState;
    rc->v0();
    rc->v0();

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->v1();
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                rc->v2();
            }
        }
    }
}
