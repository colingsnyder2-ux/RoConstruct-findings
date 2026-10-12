// from server: 98% by king_originala
#pragma float_control(precise, off)

struct PartInstance;

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

struct Vector
{
    float x, y, z;
    Vector(float a, float b, float c);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct PartList
{
    PartInstance** data;
    int count;
};

void __cdecl apply(PartInstance* part, const Vector* value);

void __cdecl update(PartList* parts, const Vector* value)
{
    static Vector zero(0.0f, 0.0f, 0.0f);

    if (value->x != zero.x ||
        value->y != zero.y ||
        value->z != zero.z)
    {
        for (int i = 0; i < parts->count; ++i)
        {
            PartInstance* part = GetSetImpl::get(parts->data[i]);
            apply(part, value);
        }
    }
}
