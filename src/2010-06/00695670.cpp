// from server: 76% by atomic.potato
struct RotatePJoint
{
    void f();
};

struct Ball
{
    int operator()(int);
};

extern "C" Ball* BallFunction;

void RotatePJoint::f()
{
    Ball* ball = *(Ball**)((char*)this + 0xb4);
    ball->operator()(3);
}
