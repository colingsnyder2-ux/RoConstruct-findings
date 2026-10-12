// from server: 94% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Body {
    char pad[28];
    Vector3 position;
    Vector3 force;
};

struct Connector {
    char pad[8];
    Body* first;
    Body* second;
    float stiffness;
    float threshold;
    bool broken;
    void f(float, float);
};

void Connector::f(float, float)
{
    if (!broken) {
        const Vector3& b = second->position;
        const Vector3& a = first->position;
        Vector3 force = { b.x - a.x, b.y - a.y, b.z - a.z };

        float scale = -stiffness;
        force.x *= scale;
        force.y *= scale;
        force.z *= scale;

        float magnitude = (float)fabs(force.y)
                        + (float)fabs(force.x)
                        + (float)fabs(force.z);
        broken = magnitude > threshold;

        Vector3 negative = { -force.x, -force.y, -force.z };

        Vector3& af = first->force;
        af.x += negative.x;
        af.y += negative.y;
        af.z += negative.z;

        Vector3& bf = second->force;
        bf.x += force.x;
        bf.y += force.y;
        bf.z += force.z;
    }
}
