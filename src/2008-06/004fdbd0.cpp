// from server: 90% by king_originala
extern "C" double __cdecl sin(double);
extern "C" double __cdecl cos(double);
#pragma intrinsic(sin, cos)
#pragma float_control(precise, off)

extern const float angleScale;
extern const float arcScale;
extern const float lowerOffset;

struct Vector3 {
    float x, y, z;
};

struct Index2 {
    short x, y;
};

struct CylinderBuilder {
    float radius;
    int count;

    void deform(Vector3* position, Vector3* normal, Vector3* texture,
                const Vector3* size, const Index2* index);
};

void CylinderBuilder::deform(Vector3* position, Vector3* normal,
                             Vector3* texture, const Vector3* size,
                             const Index2* index)
{
    float longitude = (position->x / size->x) * angleScale;
    float arcAngle = arcScale;
    float latitude = ((index->y - count + 1) * arcAngle)
                   / (float)(count - 1);
    float latitudeCos = (float)cos(latitude);
    float inset = (float)(1.0 - latitudeCos);
    float longitudeSin = (float)sin(longitude);

    position->x = (size->x - inset * radius) * longitudeSin;

    float latitudeSin = (float)sin(latitude);
    if (index->y >= count)
        position->y = size->y - (1.0f - latitudeSin) * radius;
    else
        position->y = (lowerOffset + latitudeSin) * radius - size->y;

    float longitudeCos = (float)cos(longitude);
    position->z = (size->z - inset * radius) * longitudeCos;

    normal->x = longitudeSin * latitudeCos;
    normal->y = latitudeSin;
    normal->z = longitudeCos * latitudeCos;

    float arc = arcAngle * radius;
    float factor = (size->y + arc - radius) / arc;

    if (index->y >= count)
        texture->y = factor * texture->y;
    else
        texture->y = (float)(size->y + size->y
                   - factor * ((1.0 - (texture->y - size->y) / size->y)
                               * size->y));
}
