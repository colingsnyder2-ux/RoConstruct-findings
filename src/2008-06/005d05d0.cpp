// from server: 28% by colin
struct Vector3 { float x, y, z; };
struct Vector4 { float x, y, z, w; };

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

ServiceProvider* func_00491e50(Instance* p);

struct G3D_Shader {
    static Vector3* getAmbient();
};

struct G3D_GCamera {
    static Vector4* getCameraPos();
    static Vector4* getCameraRight();
    static Vector4* getCameraUp();
};

struct Widget {
    char pad[0x2c];
    virtual void method2c(const Vector4* a, const Vector4* b);
    char pad2[0x34 - 0x30];
    virtual void method34(const Vector4* a, const Vector4* b, const Vector4* c, int d, int e, int f, const Vector4* g, int h, int i, double j);
};

struct HopperBin {
    char pad[0x104];
    void* field104;
    char pad2[0x144 - 0x108];
    int field144;
    char field148[0x180 - 0x148];
    char field180[4];

    virtual bool method78();
    virtual bool method80();

    void method(void* arg);
};

extern float g_974d78;
extern float g_974d7c;
extern float g_8249f8;
extern float g_81c434;
extern float g_819bac;
extern float g_81e380;

void func_004f35d0(Vector4* out, const Vector4* a, const Vector4* b);
void func_00573290();
void func_00573310(Vector4* out);
void func_00573770(int n);
void func_005bdef0(Vector4* out, const Vector4* a, int b);
void func_00558ac0(int a);
bool func_00642750(void* a, void* b);
void func_00642520(void* a);
void func_00642de0(void* a, void* b, bool c, void* d, const Vector4* e, int f);
void* func_007baf10(int a, int b, int c);
void func_00802468(void* a);

void HopperBin::method(void* arg) {
    bool flag = false;
    ServiceProvider* sp = func_00491e50((Instance*)this);
    Vector4 v;
    if (sp && *(int*)((char*)sp + 0x43c) != 0) {
        flag = true;
        Vector3* amb = G3D_Shader::getAmbient();
        v.x = amb->x;
        v.y = amb->y;
        v.z = g_974d78;
        v.w = g_974d7c;
    } else {
        func_00573310(&v);
    }
    Vector4 v2;
    v2.x = v.x;
    v2.y = v.y;
    v2.z = v.z;
    v2.w = v.w;
    func_00573770(12);
    Vector4 v3;
    v3.x = v2.x;
    v3.y = v2.y;
    v3.z = v2.z;
    v3.w = v2.w;
    v3.z = v3.z - v3.x;
    v3.z = v3.z * g_8249f8;
    v3.x = v3.x + g_81c434;
    v3.y = v3.y + g_81c434;
    v3.z = v3.z + g_81c434;
    v3.w = v3.w + g_81c434;
    if (!flag) {
        Vector4 a;
        func_004f35d0(&a, &v3, &v3);
        func_00573290();
        Widget* w = (Widget*)arg;
        w->method2c(&a, &v3);
    }
    if (method78()) {
        Vector4* cp = G3D_GCamera::getCameraPos();
        Vector4 cam;
        cam.x = cp->x;
        cam.y = cp->y;
        cam.z = cp->z;
        cam.w = 1.0f;
        Vector4 a;
        func_004f35d0(&a, &v3, &v3);
        Widget* w = (Widget*)arg;
        w->method2c(&cam, &a);
        Vector4* cr = G3D_GCamera::getCameraRight();
        Vector4 right;
        right.x = cr->x;
        right.y = cr->y;
        right.z = cr->z;
        right.w = 1.0f;
        int idx;
        if (field104) {
            func_00558ac0((int)this);
            idx = 0;
        } else {
            idx = -1;
        }
        idx++;
        Vector4 out;
        func_005bdef0(&out, &right, idx);
        float f1 = v3.w + v3.y;
        float f2 = v3.x + v3.z;
        f1 = f1 * g_819bac;
        f2 = f2 * g_819bac;
        void* p = func_007baf10(2, 2, 0);
        double d = (double)idx;
        Widget* w2 = (Widget*)arg;
        w2->method34(&out, &v3, &right, 0, 2, 2, &v3, (int)p, 0, d);
        func_00802468(&out);
    }
    if (method80()) {
        Vector4* cp = G3D_GCamera::getCameraPos();
        Vector4 cam;
        cam.x = cp->x;
        cam.y = cp->y;
        cam.z = cp->z;
        cam.w = 1.0f;
        Vector4 a;
        func_004f35d0(&a, &v3, &v3);
        Widget* w = (Widget*)arg;
        w->method2c(&cam, &a);
    }
    if (func_00642750(field148, arg)) {
        bool b = method78();
        if (!b) {
            b = flag;
        }
        func_00642de0(field148, arg, b, (void*)field144, &v3, 0);
    } else {
        func_00642520(arg);
    }
}
