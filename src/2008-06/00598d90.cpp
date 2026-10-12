// from server: 81% by king_originala
extern const float halfScale;

struct Vector3 {
    float x, y, z;
};

struct SizeData {
    float unused;
    Vector3 dimensions;
};

struct Bounds {
    float minX, minY, minZ;
    float maxX, maxY, maxZ;
};

struct PartInstance {
    char padding[0x2c4];
    SizeData* size;
    Bounds getBounds() const;
};

Bounds PartInstance::getBounds() const {
    const Vector3& dimensions = size->dimensions;
    double x = (double)dimensions.x * halfScale;
    double y = (double)dimensions.y * halfScale;
    double z = (double)dimensions.z * halfScale;
    Bounds result = {
        (float)-x, (float)-y, (float)-z,
        (float)x, (float)y, (float)z
    };
    return result;
}
