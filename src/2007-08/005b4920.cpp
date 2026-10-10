// from server: 80% by colin
struct Geometry {
    char pad[0x1c];
    void* bulletCollisionObject;
    char pad2[0x78 - 0x20];
    float sizeZ;
    void setSizeZ(float value);
};

void Geometry::setSizeZ(float value) {
    if (sizeZ != value) {
        sizeZ = value;
        if (bulletCollisionObject) {
            ((void (__thiscall*)(void*, Geometry*))0x5a9050)(bulletCollisionObject, this);
        }
    }
}
