// from server: 34% by colin
// roc 2008-06 004930d0 305 bytes
struct RBX_Instance {
    virtual ~RBX_Instance();
    char pad[0x100];
    RBX_Instance* next;
};

struct RBX_ServiceProvider : RBX_Instance {
    RBX_ServiceProvider* finish();
};

struct RBX_Vector3 {
    float x, y, z;
};

struct RBX_Region3 {
    RBX_Vector3 min;
    RBX_Vector3 max;
};

struct RBX_CFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct RBX_CoordFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct RBX_Model {
    char pad[0x1c0];
    float scale;
    char pad2[4];
    double something;
};

struct RBX_VPlayer {
    char pad[0x170];
    RBX_Instance* field170;

    void func_004930d0(RBX_Instance* param);
};

RBX_ServiceProvider* func_00492e00(RBX_Instance* p);
void func_00489910(RBX_VPlayer* self, RBX_Vector3* out);
void func_0048ae50(RBX_VPlayer* self, void* p);
void func_0048b8a0(RBX_VPlayer* self, void* p, void* a, void* b);
void* func_005185f0(void* p);
void* func_00598cb0(void* p, void* out);
void* func_005d75a0(void* p);

extern float g_819bac;
extern float g_81c434;
extern double g_821df8;
extern double g_821e00;

void RBX_VPlayer::func_004930d0(RBX_Instance* param)
{
    RBX_ServiceProvider* sp = func_00492e00(param);
    if (!sp)
        return;
    if (!this->field170)
        return;
    RBX_Model* model = (RBX_Model*)func_005d75a0(this->field170);
    if (!model)
        return;

    RBX_Vector3 v;
    func_00489910(this, &v);

    float dx = v.x - v.x;
    float dy = v.y - v.y;
    float dz = v.z - v.z;

    float f1 = dx;
    float f2 = dy;
    float f3 = dz;

    void* p = func_00598cb0(model, &f1);
    void* q = (void*)((char*)p + 0x24);
    func_005185f0(q);

    float invScale = 1.0f / model->scale;
    double d = invScale * model->something;

    float a, b, c, e;
    if (d == g_821e00) {
        a = f1 * g_819bac;
        b = f2 * g_819bac;
        c = f3 * g_819bac;
        e = 0.0f;
    } else if (d == g_821df8) {
        a = f1;
        b = f2 + g_81c434;
        c = f3;
        e = 0.0f;
    } else {
        a = f1;
        b = f2;
        c = f3;
        e = 0.0f;
    }

    RBX_CFrame cf;
    cf.r00 = a;
    cf.r01 = b;
    cf.r02 = c;
    cf.r10 = e;
    cf.r11 = a;
    cf.r12 = b;
    cf.r20 = c;
    cf.r21 = e;
    cf.r22 = a;
    cf.x = b;
    cf.y = c;
    cf.z = e;

    func_0048b8a0(this, &cf, (void*)0x96fcf0, (void*)0x96fdd0);

    func_0048ae50(this, &cf);
}
