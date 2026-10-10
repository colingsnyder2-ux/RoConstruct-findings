// from server: 55% by colin
struct ConstraintAlign2Axes;

struct Joint {
    virtual int getJointType();
};

struct RotatePJoint {
    char pad0[4];
    Joint* joint;
    int field8;
    int fieldC;
    char pad10[0xB0];
    ConstraintAlign2Axes* alignmentConstraint;

    void stepWorld(float dt);
};

extern "C" float __stdcall sub_609240(void* self, float dt);
extern "C" int __stdcall sub_608660();
extern "C" void __stdcall sub_5A91C0(void* self, int val);

void RotatePJoint::stepWorld(float dt) {
    float angle = sub_609240(this, dt);
    ConstraintAlign2Axes* ac = alignmentConstraint;
    if (ac) {
        float* p24 = (float*)((char*)ac + 0x24);
        float* p28 = (float*)((char*)ac + 0x28);
        float* p2c = (float*)((char*)ac + 0x2c);
        if (*p24 == angle) {
            *p28 = angle;
            *p2c = 0.0f;
        } else {
            *p24 = angle;
            int n = sub_608660();
            float d = angle - *p28;
            *p2c = d / (float)n;
        }
    }
    if (angle != 0.0f) {
        Joint* j = joint;
        void* obj;
        if (j == 0) {
            obj = 0;
        } else {
            int t = j->getJointType();
            if (t == 8) {
                obj = *(void**)((char*)j + 4);
            } else {
                obj = (void*)j;
            }
            obj = *(void**)((char*)obj + 0xC);
        }
        sub_5A91C0(obj, field8);
        sub_5A91C0(obj, fieldC);
    }
}
