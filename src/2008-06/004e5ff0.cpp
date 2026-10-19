// from server: 80% by colin
// from server: 55% by colin
// roc 2008-06 004e5ff0  unit: RBX::ViewNew::PartChunk  size: 52 bytes
struct Vector3 {
    float x, y, z;
    Vector3& operator=(const Vector3& o) { x = o.x; y = o.y; z = o.z; return *this; }
};
struct Matrix3 { float m[9]; };
struct CoordinateFrame {
    Matrix3 rotation;
    Vector3 translation;
};
struct Body { const CoordinateFrame& getFrame(); };
struct PartChunk {
    char pad0[0x28];
    CoordinateFrame frame;
    char pad58[0xbc - 0x58];
    Body* body;
    void copyFrom();
};
void PartChunk::copyFrom() {
    frame = body->getFrame();
}
