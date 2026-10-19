// from server: 93% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3 operator-() const { return Vector3(-x, -y, -z); }
};
}
namespace RBX {
class SimBody {
public:
    void accumulateForce(const G3D::Vector3& force, const G3D::Vector3& worldPos);
};
class Body {
public:
    char pad0[0x10];
    Body* root;          // 0x10
    char pad14[0x18];
    SimBody* simBody;    // 0x2c
    void accumulateForce(const G3D::Vector3& force, const G3D::Vector3& worldPos)
    {
        SimBody* simBody = root->simBody;
        if (simBody)
            simBody->accumulateForce(force, worldPos);
    }
};
class GeoPair {
public:
    char pad0[0xc];
    Body* body0;   // 0xc
    Body* body1;   // 0x10
    void forceToBodies(const G3D::Vector3& _force, const G3D::Vector3& _position);
};
void GeoPair::forceToBodies(const G3D::Vector3& _force, const G3D::Vector3& _position)
{
    this->body0->accumulateForce(-_force, _position);
    this->body1->accumulateForce(_force, _position);
}
}
