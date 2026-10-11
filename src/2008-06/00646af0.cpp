// from server: 70% by tester
struct Joint {
    char pad0[0x0c];
    void* body1;
    void* body2;
};

struct LazyValue {
    float value;
    char valid;
    char pad[3];
    void* obj;
    float (__stdcall* fn)(void*);
};

struct MultiJoint {
    char pad0[0x0c];
    Joint* joint1;
    char pad1[0x04];
    Joint* joint2;
    float getValue(Joint* j);

    float compute();
};

float MultiJoint::getValue(Joint* j) {
    LazyValue* lv = (LazyValue*)((char*)j + 0xec);
    if (lv->valid) {
        lv->value = lv->fn(lv->obj);
        lv->valid = 0;
    }
    return lv->value;
}

float MultiJoint::compute() {
    float a = getValue(joint1);
    float b = getValue(joint2);
    return (a < b) ? a : b;
}
