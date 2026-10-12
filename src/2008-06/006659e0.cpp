// from server: 83% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float distanceThreshold;

struct Event {
    char pad[8];
    short x;
    short y;
};

struct Vec2 {
    float x;
    float y;
};

struct S {
    virtual S* v0(Event*);
    virtual S* v1(Event*);
    virtual S* v2(Event*);
    virtual S* v3(Event*);
    virtual S* v4(Event*);
    virtual S* v5(Event*);
    virtual S* v6(Event*);
    virtual S* v7(Event*);

    char pad[40];
    float x;
    float y;

    S* f(Event*);
};

S* S::f(Event* event)
{
    Vec2 point = { (float)event->x, (float)event->y };
    Vec2 delta = { point.x - x, point.y - y };
    float distance = (float)sqrt(delta.x * delta.x + delta.y * delta.y);
    if (distance > distanceThreshold)
        return v7(event);
    return v2(event);
}
