// from server: 67% by colin
struct VCamera {
    bool factoryProduct(float f);
};

extern float g_7b160c;
extern float g_8c4ee0;
extern int g_8c4ee4;

struct Helper {
    void sub_5995F0(float*, float*, float*);
    void sub_599C10(float, float, float);
    void* sub_599480();
};

bool VCamera::factoryProduct(float f) {
    if (f == 0.0f) {
        return false;
    }
    float a, b, c;
    ((Helper*)this)->sub_5995F0(&a, &b, &c);
    float t;
    if (!(g_8c4ee4 & 1)) {
        t = g_7b160c;
        g_8c4ee4 |= 1;
        g_8c4ee0 = t;
    } else {
        t = g_8c4ee0;
    }
    float sum = b + t;
    float neg = -c;
    if (!(neg < sum)) {
        if (!(neg == sum)) {
            float x = a;
            ((Helper*)this)->sub_599C10(x, sum, f);
            void* p = ((Helper*)this)->sub_599480();
            if (p) {
                void** vt = *(void***)p;
                void (*fn)(void*) = (void (*)(void*))vt[3];
                fn(p);
            }
            return true;
        }
    }
    return false;
}
