// from server: 97% by colin
struct Vector3 {
    float x, y, z;
};

struct Source {
    char reserved[0x94];
    float m00, m01, m02;
    float m10, m11, m12;
    float m20, m21, m22;
    Vector3 translation;

    const void* get();
};

struct Point {
    char reserved[0x0C];
    Source* source;
    Vector3 local;
    Vector3 position;

    void setPosition(const Vector3* value);
};

void Point::setPosition(const Vector3* value)
{
    Source* s = source;
    position.x = value->x;
    position.y = value->y;
    position.z = value->z;

    s->get();

    double x = position.x - s->translation.x;
    double y = position.y - s->translation.y;
    double z = position.z - s->translation.z;

    double c = s->m22 * z + s->m12 * y + s->m02 * x;
    double a = s->m20 * z + s->m10 * y + s->m00 * x;
    double b = s->m21 * z + s->m11 * y + s->m01 * x;

    local.z = (float)c;
    local.x = (float)a;
    local.y = (float)b;
}
