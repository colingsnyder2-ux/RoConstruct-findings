// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_landedcorrectfields_3e75cccb53da29e2.cpp

// Candidate translation unit (score above; library headers required).

#pragma float_control(precise, off)
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern float scale;
extern float gain;

struct Vector
{
    float x, y, z;
    bool valid();
};

struct Rotation
{
    float x, y, z;
    float unused;
    float w;
    float trailing;
};

struct Other
{
    float heading();
};

extern float __cdecl getHeading(const Vector&);
extern float __cdecl adjust(float);

struct S
{
    char padding0[0x20];
    unsigned char enabled;
    char padding1[0x87];
    float rx, ry, rz, rw;
    Vector velocity;
    float amount;
    float factor;


    float first();
    Rotation getRotation(float);
    Vector* getVelocity(Vector*);
    Other* getOther();
    void update(float, float);
};

void S::update(float dt, float)
{
    factor = first();

    Rotation r = getRotation(dt);
    rx = r.x;
    ry = r.y;
    rz = r.z;
    rw = r.w;

    Vector temporary;
    const Vector* v = getVelocity(&temporary);
    Vector& vel = velocity;
    vel.x = v->x;
    vel.y = v->y;
    vel.z = v->z;

    amount = 0.0f;
    if (!vel.valid())
    {
        Other* other = getOther();
        float h = getHeading(vel);
        amount = adjust(h - other->heading()) * gain;

        if (enabled)
        {
            float lengthSquared = vel.x * vel.x
                                + vel.y * vel.y
                                + vel.z * vel.z;
            float s = scale;
            vel.x *= s;
            velocity.y = (float)sqrt(lengthSquared) * s;
            velocity.z = velocity.z * s;
        }
    }
}