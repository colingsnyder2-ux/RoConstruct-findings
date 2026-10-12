// from server: 86% by king_originala
struct Ball
{
    unsigned char padding[0xa8];
    unsigned char flagA;
    unsigned char gap[2];
    unsigned char flagB;

    int getBulletSphereShape() const;
};

struct Owner
{
    void* f();
};

struct S
{
    unsigned char padding[4];
    Owner* owner;

    int f(Ball* ball);
};

int S::f(Ball* ball)
{
    Ball* other = static_cast<Ball*>(owner->f());
    int result = 2;

    if (ball->flagA || ball->flagB)
        result = 1;
    else if (other)
    {
        int shape = other->getBulletSphereShape();
        if (shape == ball->getBulletSphereShape())
            result = 1;
    }

    return result;
}
