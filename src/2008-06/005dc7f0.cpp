// from server: 83% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    float unitize(float tolerance);
};

struct Vector2 {
    float x, y;
};

struct Frame {
    Vector3 lookVector();
};

struct Body {
    char reserved[0x94];
    Frame frame;
    const void* get();
};

struct Link {
    char reserved[0x10];
    Body* body;
};

struct Part {
    char reserved[0x2C8];
    Link* link;
};

struct Humanoid {
    char reserved[0x1B0];
    float angle;
    Part* getPart();
    void notify(const void*);
};

struct S {
    void update(float desiredAngle, bool reset);
};

extern const float tolerance;
extern const float angleLimit;
extern const char angleProperty[];
extern float __cdecl directionAngle(const Vector2&);
extern float __cdecl wrapAngle(float);
extern "C" double __cdecl fabs(double);

void S::update(float desiredAngle, bool reset)
{
    if (reset) {
        Humanoid* owner =
            reinterpret_cast<Humanoid*>(reinterpret_cast<char*>(this) - 0x14C);
        if (0.0f != owner->angle) {
            owner->angle = 0.0f;
            owner->notify(angleProperty);
        }
        return;
    }

    Humanoid* owner =
        reinterpret_cast<Humanoid*>(reinterpret_cast<char*>(this) - 0x14C);
    Part* part = owner->getPart();
    Link* link = part ? part->link : 0;
    if (link) {
        Body* body = link->body;
        if (body) {
            body->get();
            Vector3 direction = body->frame.lookVector();
            direction.y = 0.0f;
            direction.unitize(tolerance);

            Vector2 planar;
            planar.x = direction.z;
            planar.y = direction.x;

            float currentAngle = wrapAngle(directionAngle(planar));
            float difference = wrapAngle(wrapAngle(desiredAngle) - currentAngle);
            if (fabs(difference) >= angleLimit)
                difference = 0.0f;

            if (difference != owner->angle) {
                owner->angle = difference;
                owner->notify(angleProperty);
            }
        }
    }
}
