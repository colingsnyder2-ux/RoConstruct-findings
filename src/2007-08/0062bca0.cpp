// from server: 66% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct PartInstance {
    char pad[0x64];
    void* something;
};

struct Workspace {
    char pad[0x64];
    PartInstance* part;
};

struct GroupDragTool {
    char pad[0x14];
    Workspace* workspace;
    char pad2[0x4];
    Vector3 downPoint;
    char pad3[0x28];
    Vector3 lastHit;
    bool check();
};

extern "C" void sub_530100(void* p);

bool GroupDragTool::check() {
    PartInstance* part = workspace->part;
    sub_530100(part);
    float dx = *(float*)((char*)part + 0x88) * downPoint.y
             + *(float*)((char*)part + 0x8c) * downPoint.z
             + *(float*)((char*)part + 0x84) * downPoint.x
             + *(float*)((char*)part + 0xa8);
    float dy = *(float*)((char*)part + 0x94) * downPoint.y
             + *(float*)((char*)part + 0x98) * downPoint.z
             + *(float*)((char*)part + 0x90) * downPoint.x
             + *(float*)((char*)part + 0xac);
    float dz = *(float*)((char*)part + 0xa0) * downPoint.y
             + *(float*)((char*)part + 0xa4) * downPoint.z
             + *(float*)((char*)part + 0x9c) * downPoint.x
             + *(float*)((char*)part + 0xb0);
    dx -= lastHit.x;
    dy -= lastHit.y;
    dz -= lastHit.z;
    float dist = dx*dx + dy*dy + dz*dz;
    float len = 0.0f;
    if (dist > 0.0f) {
        len = dist;
    }
    return len > *(float*)0x7a4cdc;
}
