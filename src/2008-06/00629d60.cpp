// from server: 79% by king_originala
#pragma float_control(precise, off)

struct Vec3
{
    float x, y, z;
    Vec3();
    Vec3(float, float, float);
    Vec3(const Vec3&);
    Vec3 operator-(const Vec3&) const;
    Vec3 operator*(float) const;
};

__forceinline Vec3::Vec3() {}
__forceinline Vec3::Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
__forceinline Vec3::Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) {}
__forceinline Vec3 Vec3::operator-(const Vec3& v) const
{
    return Vec3(x - v.x, y - v.y, z - v.z);
}
__forceinline Vec3 Vec3::operator*(float s) const
{
    return Vec3(x * s, y * s, z * s);
}

struct Body
{
    char pad0[8];
    unsigned char dirty;
    char pad1[0x9f];
    Vec3 accumulated;
    void update();
    void apply(const Vec3*, const Vec3*);
};

struct Link
{
    char pad[0x2c];
    Body* body;
};

struct Attachment
{
    char pad[0x10];
    Link* link;
};

struct Transform
{
    char pad[0x24];
    Vec3 position;
};

struct PartInstance
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual float size();
    char pad[0x9c];
    Attachment* attachment;
    Transform* transform();
    void detach();
};

struct GetSetImpl
{
    static PartInstance* get(PartInstance*);
};

struct Context
{
    void reset();
    void insert(PartInstance*, int);
};

struct Parts
{
    PartInstance** data;
    int count;
};

struct Explosion
{
    char pad[0x148];
    Vec3 position;
    float radius;
    float pressure;
    void explode(Parts*);
};

extern Context* __cdecl getContext(Explosion*);
extern bool __cdecl isProtected(PartInstance*);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern float zeroX, zeroY, zeroZ;
extern unsigned int zeroInitialized;
extern Vec3 upVector;
extern unsigned int upInitialized;
extern const float forceScale;
extern const float secondaryScale;

void Explosion::explode(Parts* parts)
{
    if (0.0f < pressure)
    {
        Context* context = getContext(this);
        for (int i = 0; i < parts->count; ++i)
        {
            PartInstance* part = parts->data[i];
            float limit = radius + radius;
            if (part->size() < limit)
            {
                PartInstance* instance = GetSetImpl::get(part);
                if (!isProtected(instance))
                    instance->detach();
            }
        }

        context->reset();

        for (int i = 0; i < parts->count; ++i)
        {
            PartInstance* part = parts->data[i];
            float limit = radius + radius;
            if (part->size() < limit)
            {
                context->insert(part, 1);
                Vec3 delta = part->transform()->position - position;

                if (!(zeroInitialized & 1))
                {
                    zeroInitialized |= 1;
                    zeroX = 0.0f;
                    zeroY = 0.0f;
                    zeroZ = 0.0f;
                }

                Vec3 normalized;
                const Vec3* direction;
                if (delta.x == zeroX &&
                    delta.y == zeroY &&
                    delta.z == zeroZ)
                {
                    if (!(upInitialized & 1))
                    {
                        upInitialized |= 1;
                        upVector.x = 0.0f;
                        upVector.y = 1.0f;
                        upVector.z = 0.0f;
                    }
                    direction = &upVector;
                }
                else
                {
                    float inverse = (float)(1.0 / sqrt(
                        delta.z * delta.z +
                        delta.y * delta.y +
                        delta.x * delta.x));
                    normalized.x = delta.x * inverse;
                    normalized.y = delta.y * inverse;
                    normalized.z = delta.z * inverse;
                    direction = &normalized;
                }

                Vec3 unit(*direction);
                float size = part->size();
                Attachment* attachment = part->attachment;
                float square = size * size;
                Vec3 force = ((unit * pressure) * square) * forceScale;

                const Vec3* point = &part->transform()->position;
                Body* body = attachment->link->body;
                if (body)
                    body->apply(&force, point);

                Body* secondary = part->attachment->link->body;
                Vec3 impulse = (force * secondaryScale) * size;
                if (secondary)
                {
                    if (secondary->dirty)
                        secondary->update();
                    secondary->accumulated.x += impulse.x;
                    secondary->accumulated.y += impulse.y;
                    secondary->accumulated.z += impulse.z;
                }
            }
        }
    }
}
