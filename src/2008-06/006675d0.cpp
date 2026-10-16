// from server: 33% by colin
struct DataSource {
    const void* get();
};

struct S {
    char pad0[0x10];
    S* source;
    S* parent;
    char pad1[0x1C];
    DataSource* dataSource;
    char localData[0x58];
    unsigned int version;
};

struct GCamera {
    char data[0x24];
};

struct Vector3 {
    float x, y, z;
};

extern float g_847b94;
extern float g_84ce84;
extern float g_962aa8;
extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;
extern char g_97d568;
extern unsigned int g_97d580;

struct Freefall {
    char pad0[0xA8];
    float field_a8;
    char pad1[8];
    float field_b4;
    float field_b8;
    float field_bc;

    void method_66e6a0();
    void method_62e140(const Vector3*);
    void method_6060b0(const Vector3*);
    void method_599360();
    void method_66e6a0_impl(float dt);
};

struct HumanoidObj {
    char pad0[0x10];
    void* vtable;
    char pad1[0x18];
    S* source;
    char pad2[0x3C];
    float field_8c;
    char pad3[0x44];
    float field_d4;
};

struct BodyObj {
    char pad0[0x2C];
    void* field_2c;
};

extern void* __cdecl func_793d50(void*);
extern void* __cdecl func_5d9180(void*);
extern void* __cdecl func_660170(void*);
extern void* __cdecl func_65ff10(void*);
extern void* __cdecl func_614170(void*);
extern void* __cdecl func_666350(const Vector3*);
extern void* __cdecl func_6663a0(void*);
extern void __cdecl func_5ddbb0(void*, void*);
extern void __cdecl func_4a6100(void*, void*, void*);

void Freefall::method_66e6a0() {}
void Freefall::method_62e140(const Vector3*) {}
void Freefall::method_6060b0(const Vector3*) {}
void Freefall::method_599360() {}

void Freefall::method_66e6a0_impl(float dt)
{
    method_66e6a0();
    void* h = func_793d50(this);
    void* s = func_5d9180(h);
    HumanoidObj* hum = (HumanoidObj*)s;
    if (!hum) return;

    void* src;
    if (hum->source) {
        src = func_660170(hum->source);
    } else {
        src = (char*)hum + 0x68;
    }

    GCamera cam;
    {
        unsigned int* d = (unsigned int*)&cam;
        unsigned int* sp = (unsigned int*)src;
        for (int i = 0; i < 9; ++i) d[i] = sp[i];
    }

    Vector3 v1;
    Vector3 v2;
    func_5ddbb0(&v1, &v2);
    method_599360();

    float f1 = field_a8 - hum->field_d4;
    BodyObj* body = (BodyObj*)hum->vtable;
    void* bodyPtr = body->field_2c;
    float f2 = v1.x * g_84ce84;
    float zero = 0.0f;
    float* eax;
    if (bodyPtr) {
        eax = (float*)((char*)bodyPtr + 0x90);
    } else {
        if (!(g_96f050 & 1)) {
            g_96f050 |= 1;
            g_96f044 = zero;
            g_96f048 = zero;
            g_96f04c = zero;
        }
        eax = &g_96f044;
    }
    float f3 = f1 * f2 - eax[1];
    float saved = f3;

    void* src2;
    if (hum->source) {
        src2 = func_660170(hum->source);
    } else {
        src2 = (char*)hum + 0x68;
    }

    GCamera cam2;
    {
        unsigned int* d = (unsigned int*)&cam2;
        unsigned int* sp = (unsigned int*)src2;
        for (int i = 0; i < 9; ++i) d[i] = sp[i];
    }

    Vector3 v3;
    Vector3 v4;
    func_5ddbb0(&v3, &v4);

    float f4 = v3.x * g_962aa8;
    float neg = -f4;
    float cmp = saved;
    Vector3 out;
    out.x = 0.0f;
    out.y = 0.0f;
    out.z = 0.0f;
    if (cmp <= neg || cmp >= f4) {
        method_6060b0(&out);
    } else {
        method_6060b0(&out);
    }

    void* bodyPtr2 = ((BodyObj*)hum->vtable)->field_2c;
    float* eax2;
    if (bodyPtr2) {
        eax2 = (float*)((char*)bodyPtr2 + 0x3C);
    } else {
        if (!(g_97d580 & 1)) {
            g_97d580 |= 1;
            func_614170(&g_97d568);
        }
        eax2 = (float*)&g_97d568;
    }

    Vector3 diff;
    diff.x = (field_b4 - eax2[0]) * g_847b94;
    diff.y = (field_b8 - eax2[1]) * g_847b94;
    diff.z = (field_bc - eax2[2]) * g_847b94;

    void* r1 = func_666350(&diff);
    Vector3 tmp;
    void* r2 = func_6663a0(&tmp);
    Vector3 result;
    func_4a6100(&result, r2, r1);

    float humField;
    if (hum->source) {
        humField = *(float*)func_65ff10(hum->source);
    } else {
        humField = hum->field_8c;
    }

    Vector3 final;
    final.x = result.x * humField;
    final.y = result.y * humField;
    final.z = 0.0f;
    method_62e140(&final);
}
