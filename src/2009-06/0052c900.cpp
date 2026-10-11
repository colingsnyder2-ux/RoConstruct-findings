// from server: 92% by atomic.potato
struct VCylinderMesh {
    char pad0[0x48];
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;

    VCylinderMesh* sub_52c900(void* arg0, float a, float b);
};

struct Other {
    void sub_52ff70(void*);
};

VCylinderMesh* VCylinderMesh::sub_52c900(void* arg0, float a, float b)
{
    ((Other*)this)->sub_52ff70(arg0);
    f48 = *(float*)((char*)arg0 + 0x28);
    f4c = a;
    f50 = b;
    float g = *(float*)0x8b7594;
    f54 = g;
    f58 = g;
    return this;
}
