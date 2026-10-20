// from server: 98% by colin
// from server: 96% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern const float half;

struct Vector3
{
    float x, y, z;
};

struct Body
{
    char padding0[8];
    unsigned char dirty;
    char padding1[135];
    float x, y, z;

    void refresh();
};

struct RotateConnector
{
    char padding0[8];
    float strength;
    char padding1[8];
    void *joint0;
    void *joint1;
    char padding2[12];
    float position;
    float increment;
    unsigned char reset;

    void measure(Vector3 &axis, float &angle, float &other);
    void update(int, int);
};

#include <intrin.h>
void RotateConnector::update(int, int)
{
    Vector3 axis = { 0.0f, 0.0f, 0.0f };
    float angle, other;
    measure(axis, angle, other);

    double measured = angle;
    if (reset)
    {
        reset = 0;
        position = (position + measured) * half;
    }

    double previous = position;
    position += increment;
    _ReadWriteBarrier();

    Body *first = *reinterpret_cast<Body **>(
        *reinterpret_cast<char **>(
            *reinterpret_cast<char **>(
                reinterpret_cast<char *>(joint0) + 12) + 16) + 44);

    _ReadWriteBarrier();
    double scale = (previous - measured) * strength;
    Vector3 force;
    double x = axis.x * scale;
    force.x = (float)x;
    double y = axis.y * scale;
    force.y = (float)y;
    double z = axis.z * scale;
    force.z = (float)z;
    Vector3 opposite = { (float)-x, (float)-y, (float)-z };

    if (first)
    {
        if (first->dirty)
            first->refresh();
        first->x += opposite.x;
        first->y += opposite.y;
        first->z += opposite.z;
    }

    Body *second = *reinterpret_cast<Body **>(
        *reinterpret_cast<char **>(
            *reinterpret_cast<char **>(
                reinterpret_cast<char *>(joint1) + 12) + 16) + 44);

    if (second)
    {
        if (second->dirty)
            second->refresh();
        second->x = *reinterpret_cast<volatile float*>(&force.x) + second->x;
        second->y += force.y;
        second->z += force.z;
    }
}
