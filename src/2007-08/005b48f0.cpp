// from server: 80% by colin
struct Geometry {
    char pad[0x1c];
    void* bulletCollisionObject;
    char pad2[0x74 - 0x20];
    float sizeZ;
    void setSizeZ(float z);
};

void Geometry::setSizeZ(float z) {
    if (sizeZ != z) {
        sizeZ = z;
        if (bulletCollisionObject) {
            ((void (__thiscall*)(void*, Geometry*))0x5a9050)(bulletCollisionObject, this);
        }
    }
}
