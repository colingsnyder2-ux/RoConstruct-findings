// from server: 42% by colin
struct Primitive;

struct Contact {
    Primitive* prim0;
    Primitive* prim1;
};

struct Ball {
    char pad[0xa8];
    float x;
    float y;
    float z;
};

struct BallBallContact : Contact {
    bool computeIsColliding(float overlapIgnored);
};

extern "C" void __fastcall func_00530100(void* self);

bool BallBallContact::computeIsColliding(float overlapIgnored)
{
    float a = ((Ball*)((char*)prim0 + 0x60))->x;
    float b = ((Ball*)((char*)prim1 + 0x60))->x;

    Ball* ball0 = (Ball*)((char*)prim0 + 0x64);
    Ball* ball1 = (Ball*)((char*)prim1 + 0x64);

    func_00530100(ball0);
    func_00530100(ball1);

    float dx = ball1->x - ball0->x;
    float dy = ball1->y - ball0->y;
    float dz = ball1->z - ball0->z;

    float r = a + b;

    float adx = dx < 0.0f ? -dx : dx;
    float ady = dy < 0.0f ? -dy : dy;
    float adz = dz < 0.0f ? -dz : dz;

    float m = adx;
    if (ady > m) m = ady;
    if (adz > m) m = adz;

    if (r < m) {
        return false;
    }

    float dist = dx * dx + dy * dy + dz * dz;
    float len = 0.0f;
    if (dist > 0.0f) {
        len = dist;
    }

    return len <= r * r;
}
