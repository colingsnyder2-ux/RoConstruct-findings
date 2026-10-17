// from server: 31% by colin
struct Vec3 { float x, y, z; };
struct AxisAlignedBox { Vec3 min; Vec3 max; };
struct VertexData { void destroy(); };
struct Mesh {
    void setBounds(const AxisAlignedBox& box, bool b);
    void setBoundingSphereRadius(float r);
    void* field_1e4;
};

struct RbxSceneManagerFactory {
    void* createSceneManager(void* a, void* b, void* c, void* d, void* e);
};

extern "C" {
    void __stdcall sub_804324(void* p);
    void __stdcall sub_6a067a(void* p);
    void __stdcall sub_8043f0(void* mesh, const AxisAlignedBox* box, int flag);
    void __stdcall sub_8043ec(AxisAlignedBox* box);
    void __stdcall sub_8043e8(float r);
    float __stdcall sub_sqrt(float x);
}

extern float g_82d030;
extern float g_82d02c;
extern float g_819bac;

void* RbxSceneManagerFactory::createSceneManager(void* p1, void* p2, void* p3, void* p4, void* p5) {
    void* ctx = *(void**)((char*)p1 + 4);
    if (*(void**)((char*)ctx + 0x1e4) != 0) {
        void* old = *(void**)((char*)ctx + 0x1e4);
        if (old != 0) {
            sub_804324(old);
            sub_6a067a(old);
        }
        *(void**)((char*)ctx + 0x1e4) = 0;
    }
    void* result = ((void* (*)(void*, void*, void*, void*, void*))0x679ae0)(this, p1, p2, p3, p4);
    *(void**)((char*)ctx + 0x1e4) = result;

    Vec3* v1 = (Vec3*)p4;
    Vec3* v2 = (Vec3*)p5;
    AxisAlignedBox box;
    if (v1 != 0 && v2 != 0) {
        box.min.x = v1->x; box.min.y = v1->y; box.min.z = v1->z;
        box.max.x = v2->x; box.max.y = v2->y; box.max.z = v2->z;
        sub_8043f0(*(void**)((char*)p1 + 4), &box, 1);
        sub_8043ec(&box);
        float dx = v2->x - v1->x;
        float dy = v2->y - v1->y;
        float dz = v2->z - v1->z;
        float r = sub_sqrt(dx*dx + dy*dy + dz*dz) * g_819bac;
        sub_8043e8(r);
    } else {
        float a = g_82d030;
        float b = g_82d02c;
        box.min.x = a; box.min.y = a; box.min.z = a;
        box.max.x = b; box.max.y = b; box.max.z = b;
        sub_8043f0(*(void**)((char*)p1 + 4), &box, 1);
        sub_8043ec(&box);
        float dx = a - b;
        float dy = a - b;
        float dz = a - b;
        float r = sub_sqrt(dx*dx + dy*dy + dz*dz) * g_819bac;
        sub_8043e8(r);
    }
    return result;
}
