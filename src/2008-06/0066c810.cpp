// from server: 47% by tester
struct Vector3 {
    float x, y, z;
};

struct CoordinateFrame {
    float r00, r01, r02, r03;
    float r10, r11, r12, r13;
    float r20, r21, r22, r23;
};

struct Part {
    char pad[0x9c];
    CoordinateFrame* cframe;
};

struct GroupDragTool {
    Part* part;
    char pad[4];
    Vector3 lastHit;
    float f();
};

extern float g_scale;

extern "C" CoordinateFrame* __cdecl getCFrame(void* p);
extern "C" void __cdecl transformPoint(Vector3* out, const Vector3* in, const CoordinateFrame* cf);
extern "C" float __cdecl _sqrtf(float x);

float GroupDragTool::f()
{
    CoordinateFrame* cf = part->cframe;
    float a = cf->r00 * g_scale;
    float b = cf->r01 * g_scale;
    float c = cf->r02 * g_scale;
    float d = cf->r10 * g_scale;
    float e = cf->r11 * g_scale;
    float f2 = cf->r12 * g_scale;

    Vector3 local;
    local.x = -a;
    local.y = -b;
    local.z = -c;

    Vector3 local2;
    local2.x = -d;
    local2.y = -e;
    local2.z = -f2;

    CoordinateFrame* world = getCFrame(0);

    Vector3 diff;
    diff.x = lastHit.x - world->r03;
    diff.y = lastHit.y - world->r13;
    diff.z = lastHit.z - world->r23;

    Vector3 out;
    out.x = diff.x * world->r00 + diff.y * world->r10 + diff.z * world->r20;
    out.y = diff.x * world->r01 + diff.y * world->r11 + diff.z * world->r21;
    out.z = diff.x * world->r02 + diff.y * world->r12 + diff.z * world->r22;

    Vector3 result;
    transformPoint(&result, &local, world);

    float dx = out.x - result.x;
    float dy = out.y - result.y;
    float dz = out.z - result.z;

    return _sqrtf(dx*dx + dy*dy + dz*dz);
}
