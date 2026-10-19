// from server: 92% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lang: cpp
namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& V) : x(V.x), y(V.y), z(V.z) {}
    const float& operator[](int i) const { return ((const float*)this)[i]; }
    float& operator[](int i) { return ((float*)this)[i]; }
};
class Matrix3 {
public:
    float elt[3][3];
    float* operator[](int iRow) { return (float*)&elt[iRow][0]; }
    const float* operator[](int iRow) const { return (const float*)&elt[iRow][0]; }
};
class CoordinateFrame {
public:
    Matrix3 rotation;
    Vector3 translation;
    Vector3 pointToWorldSpace(const Vector3& v) const {
        return Vector3(
            rotation[0][0] * v[0] + rotation[0][1] * v[1] + rotation[0][2] * v[2] + translation[0],
            rotation[1][0] * v[0] + rotation[1][1] * v[1] + rotation[1][2] * v[2] + translation[1],
            rotation[2][0] * v[0] + rotation[2][1] * v[1] + rotation[2][2] * v[2] + translation[2]);
    }
};
}
namespace RBX {
enum NormalId { NORM_X };
NormalId Matrix3ToNormalId(const G3D::Matrix3& m);
class PV { public: G3D::CoordinateFrame position; };
class Body {
    char pad[0x94];
    PV pv;
    void updatePV();
public:
    const PV& getPV() { updatePV(); return pv; }
};
class Primitive {
    char pad[0xa0];
    Body* body;
public:
    Body* getBody() { return body; }
};
class Point;
class Kernel { public: Point* newPoint(Body* body, const G3D::Vector3& worldPos); };
class Face {
public:
    const G3D::Vector3& operator[](int i) const;
    char data[0x30];
};
class Connector {
public:
    virtual ~Connector() {}
    int kernelIndex;
    Connector() : kernelIndex(-1) {}
};
class PointToPointBreakConnector : public Connector {
public:
    Point* point0;
    Point* point1;
    float k;
    float breakForce;
    bool broken;
    PointToPointBreakConnector(Point* p0, Point* p1, float k, float breakForce)
        : point0(p0), point1(p1), k(k), breakForce(breakForce), broken(false) {}
};
class NormalBreakConnector : public PointToPointBreakConnector {
public:
    NormalId normalIdBody0;
    NormalBreakConnector(Point* p0, Point* p1, float k, float breakForce, NormalId nId0)
        : PointToPointBreakConnector(p0, p1, k, breakForce), normalIdBody0(nId0) {}
};
class MultiJoint {
public:
    virtual ~MultiJoint();
    virtual void putInKernel(Kernel* _kernel);
    Primitive* getPrimitive(int i) { return (&prim0)[i]; }
    Kernel* getKernel();
    float getJointK();
    float getMaxForce();
    void addToMultiJoint(Point* point0, Point* point1, Connector* connector);
protected:
    char pad0[8];
    Primitive* prim0;   // 0xc
    Primitive* prim1;   // 0x10
    char pad1[0x28 - 0x14];
    G3D::CoordinateFrame jointCoord0; // 0x28
};
class GlueJoint : public MultiJoint {
    char pad2[0xc0 - 0x58];
    Face overlapInP0;   // 0xc0
    Face overlapInP1;   // 0xf0
public:
    virtual void putInKernel(Kernel* _kernel);
};
void GlueJoint::putInKernel(Kernel* _kernel)
{
    MultiJoint::putInKernel(_kernel);

    Body* b0 = getPrimitive(0)->getBody();
    Body* b1 = getPrimitive(1)->getBody();

    NormalId nId0 = Matrix3ToNormalId(jointCoord0.rotation);

    for (int i = 0; i < 4; ++i)
    {
        G3D::Vector3 p0World = b0->getPV().position.pointToWorldSpace(overlapInP0[i]);
        G3D::Vector3 p1World = b1->getPV().position.pointToWorldSpace(overlapInP1[i]);

        Point* p0 = getKernel()->newPoint(b0, p0World);
        Point* p1 = getKernel()->newPoint(b1, p1World);

        NormalBreakConnector* connector = new NormalBreakConnector(p0, p1, getJointK(), getMaxForce(), nId0);
        addToMultiJoint(p0, p1, connector);
    }
}
}
