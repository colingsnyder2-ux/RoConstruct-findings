// from server: 54% by colin
struct Vector3 {
    float x, y, z;
};

struct AxisMoveTool;

extern "C" Vector3* __cdecl sub_510960();
extern "C" void* __cdecl sub_615c30(void*, void*, void*);
extern "C" bool __cdecl sub_665880(void*, void*, void*, void*);

struct AxisMoveTool {
    bool f(Vector3* a, Vector3* b, int c);
    bool sub_640b40(Vector3* v);
    void* sub_615d00(void* result, void* input);
};

bool AxisMoveTool::f(Vector3* a, Vector3* b, int c) {
    Vector3 v;
    Vector3* p = sub_510960();
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;

    Vector3* q = sub_510960();
    Vector3 n;
    n.x = -q->x;
    n.y = -q->y;
    n.z = -q->z;

    if (!sub_640b40(&v))
        return false;

    void* r = sub_615d00(&n, b);
    if (!sub_665880(&v, r, a, (void*)c))
        return false;

    return true;
}
