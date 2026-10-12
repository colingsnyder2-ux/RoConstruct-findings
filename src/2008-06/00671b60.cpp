// from server: 94% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Sphere {
    float radius;
    Vector3 center;
};

struct Box;
struct Mesh;
struct SubMesh;
struct Handle;
struct Renderer;

typedef void (__thiscall *DrawFn)(Renderer*, SubMesh*);

struct RenderTable {
    char padding[0x1c4];
    DrawFn draw;
};

struct Renderer {
    RenderTable* table;
};

struct MeshPtr {
    void* first;
    Mesh* mesh;
};

struct Cache {
    Handle* prepare(void*, const MeshPtr&);
};

extern void (__thiscall *finish)(Handle*);
extern float (__thiscall *getRadius)(Mesh*);
extern const Box& (__thiscall *getBounds)(Mesh*);
extern Vector3* (__thiscall *getCenter)(const Box*, Vector3*);
extern unsigned short (__thiscall *getCount)(Mesh*);
extern SubMesh* (__thiscall *getSubMesh)(Mesh*, unsigned short, const Sphere&);

struct S {
    char padding0[0x34];
    Renderer* renderer;
    char padding1[0x40];
    Cache cache;

    void f(void*, const MeshPtr&);
};

void S::f(void* key, const MeshPtr& meshPtr) {
    finish(cache.prepare(key, meshPtr));

    Mesh* mesh = meshPtr.mesh;
    float radius = getRadius(mesh);
    Vector3 temporary;
    const Vector3& center = *getCenter(&getBounds(mesh), &temporary);

    Sphere sphere;
    sphere.radius = radius;
    sphere.center.x = center.x;
    sphere.center.y = center.y;
    sphere.center.z = center.z;

    for (int i = 0; i < getCount(meshPtr.mesh); ++i) {
        DrawFn* draw = &renderer->table->draw;
        SubMesh* subMesh = getSubMesh(meshPtr.mesh, (unsigned short)i, sphere);
        (*draw)(renderer, subMesh);
    }
}
