// from server: 29% by colin
struct Vector3 {
    float x, y, z;
};

struct CoordinateFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float tx, ty, tz;
};

struct Plane {
    Vector3 normal;
    float d;
};

struct Geometry {
    char pad[0x24];
    Vector3 size;
    char pad2[0x0c];
    CoordinateFrame cf;
};

struct Ball : Geometry {
    bool hitTest(const CoordinateFrame& myCf, size_t& myFaceId, const Geometry& otherGeom, const CoordinateFrame& otherCf, size_t& otherFaceId) const;
};

extern "C" void __fastcall Plane_ctor(Plane* p, void*, const Vector3* a, const Vector3* b);
extern "C" void __fastcall Plane_getNormal(Plane* p, void*, Vector3* out);
extern "C" void __fastcall Ball_getSurfaceCoordInBody(const Ball* b, void*, CoordinateFrame* out, size_t id);

bool Ball::hitTest(const CoordinateFrame& myCf, size_t& myFaceId, const Geometry& otherGeom, const CoordinateFrame& otherCf, size_t& otherFaceId) const
{
    for (int i = 0; i < 2; i++) {
        const Geometry* a;
        const Geometry* b;
        if (i == 0) {
            a = this;
            b = &otherGeom;
        } else {
            a = &otherGeom;
            b = this;
        }

        Plane plane;
        Plane_ctor(&plane, 0, &a->size, &b->size);

        Vector3 normal;
        Plane_getNormal(&plane, 0, &normal);

        CoordinateFrame surfCf;
        Ball_getSurfaceCoordInBody((const Ball*)a, 0, &surfCf, 0);

        float px = surfCf.tx;
        float py = surfCf.ty;
        float pz = surfCf.tz;

        float nx = normal.x;
        float ny = normal.y;
        float nz = normal.z;

        float d = plane.d;

        float dot = nx * px + ny * py + nz * pz + d;

        float radius = a->size.x * 0.5f;

        if (dot < 0) dot = -dot;

        if (dot < radius) {
            return false;
        }
    }
    return true;
}
