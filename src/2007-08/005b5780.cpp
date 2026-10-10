// from server: 77% by colin
struct Primitive {
    char pad0[0x1c];
    int field0x1c;
    char pad1[0x60 - 0x20];
    void* field0x60;
    char pad2[0xb4 - 0x64];
    unsigned char field0xb4;

    void setGeometry(int geometryType);
};

struct Geometry {
    virtual void unused0();
    virtual void release(int flag);
    virtual int getGeometryType();
};

extern "C" void* __cdecl createGeometry(int geometryType);
extern "C" void __cdecl updatePrimitiveInKernel(Primitive* prim);
extern "C" void __cdecl updateGeometry(Primitive* prim, float* saved);

void Primitive::setGeometry(int geometryType)
{
    Geometry* geom = (Geometry*)field0x60;
    int currentType = geom->getGeometryType();
    if (currentType == geometryType)
        return;

    float saved[3];
    Geometry* oldGeom = (Geometry*)field0x60;
    saved[0] = *(float*)((char*)oldGeom + 4);
    saved[1] = *(float*)((char*)oldGeom + 8);
    saved[2] = *(float*)((char*)oldGeom + 12);
    if (oldGeom != 0) {
        oldGeom->release(1);
    }

    void* newGeom = createGeometry(geometryType);
    field0x60 = newGeom;

    if (field0x1c != 0) {
        updatePrimitiveInKernel(this);
    }

    updateGeometry(this, saved);
    field0xb4 = 1;
}
