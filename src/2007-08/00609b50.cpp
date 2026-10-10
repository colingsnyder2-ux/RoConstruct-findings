// from server: 52% by colin
struct ConstraintAngularVelocity;

struct Joint {
    int pad0;
    int pad4;
    int pad8;
    int padC;
};

struct RotateVJoint {
    char pad0[4];
    void* field4;
    int field8;
    int fieldC;
    char pad10[0xB0];
    ConstraintAngularVelocity* angularVelocityConstraint;

    float computeAngle(void* arg);
    void stepWorld();
};

extern "C" float __stdcall sub_609240(void* arg);
extern "C" int __stdcall sub_608660();
extern "C" void __stdcall sub_5A91C0(void* self, int arg);

float RotateVJoint::computeAngle(void* arg) {
    float angle = sub_609240(arg);
    ConstraintAngularVelocity* c = angularVelocityConstraint;
    if (c) {
        int n = sub_608660();
        float f = (float)n;
        float result = angle / f;
        *(float*)((char*)c + 0x2C) = result;
        if (result == 0.0f) {
            *(char*)((char*)c + 0x30) = 1;
        }
    }
    if (angle != 0.0f) {
        void* p;
        if (field4 == 0) {
            p = 0;
        } else {
            void* v = field4;
            int (*fn)(void*) = *(int (**)(void*))((*(int**)v) + 4);
            int r = fn(v);
            if (r == 8) {
                p = *(void**)((char*)field4 + 4);
            } else {
                p = field4;
            }
            p = *(void**)((char*)p + 0xC);
        }
        sub_5A91C0(p, field8);
        sub_5A91C0(p, fieldC);
    }
    return angle;
}
