// from server: 45% by colin
struct Joint {
    char pad[0xc];
    void* kernel;
    char pad2[0xe8 - 0x10];
    void* constraint;
};

extern "C" int __cdecl G1_func_005ec310(void*);
extern "C" float __cdecl G1_func_006492f0();

extern float G1_float_008282dc;
extern float G1_float_00819bac;
extern double G1_double_0084ae00;
extern double G1_double_00811230;
extern int G1_int_0097abd0;
extern int G1_int_0097abc4;
extern float G1_float_0097abc8;
extern float G1_float_0097abcc;

extern "C" double __cdecl sin(double);
extern "C" double __cdecl fabs(double);

struct RotatePJoint {
    char pad[0xc];
    void* kernel;
    char pad2[0x28 - 0x10];
    int axleId;
    char pad3[0xe8 - 0x2c];
    void* constraint;
    float stepWorld(float dt);
};

float RotatePJoint::stepWorld(float dt)
{
    int idx = G1_func_005ec310(&this->axleId);
    void* c = *(void**)((char*)this->kernel + idx * 4 + 0xd0);
    if (c == 0) {
        if (!(G1_int_0097abd0 & 1)) {
            G1_int_0097abd0 |= 1;
            G1_float_0097abc8 = G1_float_008282dc;
            G1_int_0097abc4 = 0;
            G1_float_0097abcc = G1_float_00819bac;
        }
        c = &G1_int_0097abc4;
    }
    void* obj = *(void**)((char*)this->kernel + 0xe8);
    void** vtbl = *(void***)obj;
    float (*fn)(void*, int) = (float (*)(void*, int))vtbl[1];
    float a = fn(obj, *(int*)c);
    float b = *(float*)((char*)c + 4);
    float d = *(float*)((char*)c + 8);
    float inf = G1_func_006492f0();
    float r = a * dt;
    int type = *(int*)c;
    if (type > 0xd) {
        if (r == G1_double_0084ae00) {
            return -(b * d);
        }
        if (r != G1_double_00811230) {
            return b * d;
        }
        return 0.0f;
    }
    switch (type) {
    case 0:
        return d;
    case 1:
        return b * d * (float)sin((double)r);
    case 2:
        if (r == G1_double_0084ae00) {
            return b * (float)fabs(d);
        }
        if (r != G1_double_00811230) {
            return d * (float)fabs(b);
        }
        return 0.0f;
    case 3:
        if (r == G1_double_0084ae00) {
            return -(b * (float)fabs(d));
        }
        if (r != G1_double_00811230) {
            return -(d * (float)fabs(b));
        }
        return 0.0f;
    default:
        return 0.0f;
    }
}
