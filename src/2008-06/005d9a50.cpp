// from server: 94% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off, push)

struct Vector3
{
    float x, y, z;

    Vector3(float a = 0.0f, float b = 0.0f, float c = 0.0f)
        : x(a), y(b), z(c) {}

    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}

    Vector3& operator=(const Vector3& v)
    {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }

    static const Vector3& zero();
    Vector3 unit() const;
};

inline const Vector3& Vector3::zero()
{
    static const Vector3 value;
    return value;
}

struct Transform
{
    float rotation[9];
    Vector3 position;
};

struct Part
{
    const Transform& getTransform() const;
};

struct Humanoid
{
    char padding0[0x1b8];
    int mode;
    char padding1[0x14];
    Vector3 direction;

    Part* getPart();
    bool getTarget(Vector3& target);
    Vector3 getDirection(bool update);
};

Vector3 Humanoid::getDirection(bool update)
{
    Vector3 result = Vector3::zero();

    if (mode == 3)
    {
        result = direction;
        return result;
    }

    if (mode == 2)
    {
        Part* part = getPart();
        Vector3 target;

        if (part && getTarget(target))
        {
            const Vector3& position = part->getTransform().position;
            target = Vector3(target.x - position.x,
                             target.y - position.y,
                             target.z - position.z);

            target.y += 3.0f;
            float distance = static_cast<float>(
                sqrt(target.x * target.x +
                     target.y * target.y +
                     target.z * target.z));

            target.y = 0.0f;

            if (distance < 1.0f)
            {
                if (update)
                    mode = 3;
                result = Vector3::zero();
            }
            else
            {
                result = target.unit();
            }
        }
    }

    return result;
}

#pragma float_control(pop)
