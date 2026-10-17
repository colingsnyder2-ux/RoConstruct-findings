// from server: 45% by colin
struct GCamera {
    float m[9];
    void copyFrom(const GCamera* other);
    void getVector(int index, float* out) const;
};

struct Instance {
    char padding0[0x104];
    Instance* parent;
    bool isDescendantOf(Instance* node);
};

struct Humanoid {
    char padding0[8];
    Instance* character;
    char padding1[0x0C];
    int ladderCount;
};

struct Climbing {
    char padding0[8];
    Humanoid* humanoid;
    char padding1[0x08];
    GCamera camera;
    char padding2[0x04];
    int count;
    bool onStepImpl(void* arg);
};

extern float g_float_828b60;
extern float g_float_81c434;
extern float g_float_819bac;
extern float g_float_8378b8;
extern float g_float_8249f8;
extern float g_float_96f044;
extern float g_float_96f048;
extern float g_float_96f04c;
extern int g_int_96f050;

extern "C" void* __stdcall sub_5d9160(void*);
extern "C" void __stdcall sub_599360(void*);
extern "C" void __stdcall sub_6449e0(void*);
extern "C" void __stdcall sub_62d9e0();
extern "C" void __stdcall sub_62db60(void*, void*, int, void*);
extern "C" void* __stdcall sub_513e20();
extern "C" void* __stdcall sub_5148b0();
extern "C" void* __stdcall sub_59aa90(void*, void*);
extern "C" void __stdcall sub_676e00(void*, void*, void*);
extern "C" void* __stdcall sub_7baf10();

void GCamera::copyFrom(const GCamera* other) {
    for (int i = 0; i < 9; i++) m[i] = other->m[i];
}

void GCamera::getVector(int index, float* out) const {
    out[0] = m[index];
    out[1] = m[index + 3];
    out[2] = m[index + 6];
}

bool Climbing::onStepImpl(void* arg) {
    Instance* inst = (Instance*)humanoid->character;
    void* v = sub_5d9160(inst);
    sub_599360(v);
    sub_6449e0(humanoid->character);
    float f = g_float_828b60;
    GCamera* cam = (GCamera*)((char*)v + 0x94);
    float vec[3];
    cam->getVector(2, vec);
    float a = vec[0] * f;
    float b = vec[1] * f;
    float c = vec[2] * f;
    a *= g_float_81c434;
    b *= g_float_81c434;
    c *= g_float_81c434;
    a *= g_float_819bac;
    b *= g_float_819bac;
    c *= g_float_819bac;
    float px = cam->m[0] + a;
    float py = cam->m[1] + b;
    float pz = cam->m[2] + c;
    float qx = px + 1.0f;
    float qy = py + 1.0f;
    float qz = pz + 1.0f;
    float rx = px - g_float_8378b8;
    float ry = py - g_float_8378b8;
    float rz = pz - g_float_8378b8;
    float arr[6];
    arr[0] = qx;
    arr[1] = qy;
    arr[2] = qz;
    arr[3] = rx;
    arr[4] = ry;
    arr[5] = rz;
    sub_62d9e0();
    sub_62db60(inst, arr, 0, &camera);
    Instance* charInst = (Instance*)humanoid->character;
    int n = count;
    Instance* target = (Instance*)((char*)charInst + 0x104);
    int i = 0;
    if (n > 0) {
        Instance** list = *(Instance***)&camera;
        do {
            Instance* e = list[i];
            if (target != e) {
                if (!e) goto fail;
                if (!target->isDescendantOf(e)) goto fail;
            }
            i++;
        } while (i < n);
    }
    if (arg) {
        void* cam2 = sub_513e20();
        GCamera tmp;
        tmp.copyFrom((GCamera*)cam2);
        if (!(g_int_96f050 & 1)) {
            g_int_96f050 |= 1;
            g_float_96f044 = 0.0f;
            g_float_96f048 = 0.0f;
            g_float_96f04c = 0.0f;
        }
        float vx = g_float_96f044;
        float vy = g_float_96f048;
        float vz = g_float_96f04c;
        float out[3];
        out[0] = vx;
        out[1] = vy;
        out[2] = vz;
        void** vtbl = *(void***)arg;
        void (*fn)(void*, float*) = (void (*)(void*, float*))vtbl[14];
        fn(arg, out);
        float one = 1.0f;
        float mf = g_float_8249f8;
        float mb = g_float_819bac;
        float m[9];
        m[0] = one;
        m[1] = mf;
        m[2] = mf;
        m[3] = mb;
        m[4] = arr[0];
        m[5] = arr[1];
        m[6] = arr[2];
        m[7] = arr[3];
        m[8] = arr[4];
        void* r = sub_7baf10();
        void** vtbl2 = *(void***)((char*)arg + 0x40);
        void (*fn2)(void*, float*, float*, void*) = (void (*)(void*, float*, float*, void*))vtbl2[0];
        fn2(arg, m, out, r);
    }
    return false;
fail:
    if (arg) {
        void* p = sub_5148b0();
        float v[4];
        v[0] = ((float*)p)[0];
        v[1] = ((float*)p)[1];
        v[2] = ((float*)p)[2];
        v[3] = 1.0f;
        void* r = sub_59aa90(arg, v);
        sub_676e00(arg, v, r);
    }
    return true;
}
