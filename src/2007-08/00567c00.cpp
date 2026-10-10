// from server: 56% by colin
struct Vector3 {
    float x, y, z;
};

struct Instance {
    char pad[8];
};

struct Instances {
    Instance* begin;
    Instance* end;
};

struct RootInstance {
    Vector3 insertPoint;
    Vector3 computeIdeInsertPoint();
    void insertInstances(const Instances& instances, int mode, const Vector3* positionHint);
};

extern float g_insertScale;

extern "C" void __cdecl sub_5BAD30(Vector3* out, const Instances* instances);
extern "C" void __cdecl sub_5E1060(Vector3* out, const Vector3* a);

void RootInstance::insertInstances(const Instances& instances, int mode, const Vector3* positionHint)
{
    if (instances.begin == 0)
        return;
    if (((char*)instances.end - (char*)instances.begin) >> 3 == 0)
        return;

    Vector3 center;
    sub_5BAD30(&center, &instances);

    Vector3 ide = computeIdeInsertPoint();

    Vector3 size;
    size.x = (ide.x + center.x) * g_insertScale - ide.x;
    size.y = (center.y + ide.y) * g_insertScale - ide.y;
    size.z = (center.z + ide.z) * g_insertScale - ide.z;

    Vector3 result;
    sub_5E1060(&result, &size);

    Vector3 finalPos;
    finalPos.x = result.x;
    finalPos.y = result.y;
    finalPos.z = result.z;

    this->insertInstances(instances, 0, &finalPos);
}
