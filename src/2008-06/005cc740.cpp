// from server: 66% by colin
// roc 2008-06 005cc740  unit: RBX::VCamera::?$FactoryProduct  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc740

extern float g_83a3e8;
extern float g_9798a8;
extern unsigned int g_9798ac;

struct VCamera {
    bool sub_5cc740(float a);
    void sub_5cc0c0(float* a, float* b, float* c);
    void sub_5cc690(float a, float b, float c);
    void* sub_5cbf50();
};

bool VCamera::sub_5cc740(float a) {
    float v8;
    float v4;
    float v14;
    if (a == 0.0f) {
        return false;
    }
    sub_5cc0c0(&v14, &v4, &v8);
    float t;
    if ((g_9798ac & 1) == 0) {
        t = g_83a3e8;
        g_9798ac |= 1;
        g_9798a8 = t;
    } else {
        t = g_9798a8;
    }
    float x = v4 + t;
    float y = -v14;
    if (y < x) {
        if (!(y > x)) {
            return false;
        }
    } else {
        if (y == x) {
            return false;
        }
    }
    sub_5cc690(v8, v4, a);
    void* p = sub_5cbf50();
    if (p != 0) {
        void** vt = *(void***)p;
        typedef void (__thiscall *Fn)(void*);
        Fn f = (Fn)vt[3];
        f(p);
    }
    return true;
}
