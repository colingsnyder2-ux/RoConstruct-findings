// from server: 30% by colin
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct Block {
    char pad0[0x10];
    int field10;
    float field14;
    void getCenterToCorner(const Matrix3& rotation, Vector3& out) const;
};

extern float g_7a836c;

void Block::getCenterToCorner(const Matrix3& rotation, Vector3& out) const {
    if (g_7a836c == field14) {
        out.x = field14;
        out.y = field14;
        out.z = field14;
        return;
    }

    const float* v = (const float*)&rotation;

    float ax = v[0]; if (ax < 0) ax = -ax;
    float ay = v[1]; if (ay < 0) ay = -ay;
    float az = v[2]; if (az < 0) az = -az;

    float bx = v[3]; if (bx < 0) bx = -bx;
    float by = v[4]; if (by < 0) by = -by;
    float bz = v[5]; if (bz < 0) bz = -bz;

    float cx = v[6]; if (cx < 0) cx = -cx;
    float cy = v[7]; if (cy < 0) cy = -cy;
    float cz = v[8]; if (cz < 0) cz = -cz;

    float bestX = ax, bestY = ay, bestZ = az;
    if (bx > bestX) bestX = bx;
    if (by > bestY) bestY = by;
    if (bz > bestZ) bestZ = bz;
    if (cx > bestX) bestX = cx;
    if (cy > bestY) bestY = cy;
    if (cz > bestZ) bestZ = cz;

    out.x = bestX;
    out.y = bestY;
    out.z = bestZ;
}
