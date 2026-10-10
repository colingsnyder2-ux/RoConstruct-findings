// from server: 56% by colin
struct MotorJoint {
    char pad[0x88];
    float f88;
    float f8c;
    float f90;
    void sub_5b42a0(float);
    void f();
};

void MotorJoint::f()
{
    float a = f8c;
    if (a < 0.0f) a = -a;
    float b = f90 - f88;
    float c = b;
    if (c < 0.0f) c = -c;
    if (c <= a) {
        sub_5b42a0(f90);
        return;
    }
    if (b == 0.0f) {
        sub_5b42a0(b + f88);
        return;
    }
    sub_5b42a0(f88 - b);
}
