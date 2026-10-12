// from server: 80% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct MotorJoint {
    char padding[0x8c];
    float current;
    float velocity;
    float desired;

    void setCurrent(float value);
    void step(float);
};

void MotorJoint::step(float)
{
    double speed = fabs(velocity);
    double delta = (double)desired - current;

    if (fabs(delta) < speed)
        setCurrent(desired);
    else if (delta > 0.0)
        setCurrent((float)(current + speed));
    else
        setCurrent((float)(current - speed));
}
