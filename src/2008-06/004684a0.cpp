// from server: 90% by king_originala
struct Vector2 {
    float x;
    float y;
};

struct Vector2int16 {
    short x;
    short y;
    Vector2int16(const Vector2&);
};

struct S;

struct Event {
    int type;
    S* source;
    Vector2int16 position;
    short zeroX;
    short zeroY;
    Vector2int16 value;
};

struct S {
    char padding[89];
    bool active;

    Vector2int16 getValue();
    void dispatch(const Event&);
    void f(int type, const Vector2& position);
};

void S::f(int type, const Vector2& position)
{
    if (type == 3)
        active = true;
    else if (type == 4)
        active = false;

    Vector2int16 p(position);
    Vector2int16 v = getValue();
    Event event = { type, this, p, 0, 0, v };
    dispatch(event);
}
