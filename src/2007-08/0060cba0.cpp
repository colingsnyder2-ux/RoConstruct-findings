// from server: 33% by colin
struct Vector3 {
    float x, y, z;
};

struct Block {
    char pad0[4];
    float sizeX;
    float sizeY;
    float sizeZ;
    char pad1[0x60];
    bool hitTest(const Vector3& rayInMe, Vector3& localHitPoint, Vector3& surfaceNormal);
};

extern "C" {
    void __stdcall sub_737A20(void* a, const void* b, void* c, void* d, void* e, void* f);
    void __stdcall sub_51D890(void* a, void* b, void* c);
}

extern float dword_797E9C;
extern float dword_7B1548;
extern char byte_8C9BCC;

bool Block::hitTest(const Vector3& rayInMe, Vector3& localHitPoint, Vector3& surfaceNormal)
{
    float sx = sizeX * dword_797E9C;
    float sy = sizeY * dword_797E9C;
    float sz = sizeZ * dword_797E9C;

    float nx = -sx;
    float ny = -sy;
    float nz = -sz;

    float px = sx;
    float py = sy;
    float pz = sz;

    char flag = 0;

    float local[6];
    local[0] = nx;
    local[1] = ny;
    local[2] = nz;
    local[3] = px;
    local[4] = py;
    local[5] = pz;

    sub_737A20(&flag, &rayInMe, &localHitPoint, &local[0], &local[3], &byte_8C9BCC);

    if (flag) {
        flag = 0;

        Vector3 scaled;
        scaled.x = rayInMe.x * dword_7B1548;
        scaled.y = rayInMe.y * dword_7B1548;
        scaled.z = rayInMe.z * dword_7B1548;

        Vector3 diff;
        diff.x = scaled.x - localHitPoint.x;
        diff.y = scaled.y - localHitPoint.y;
        diff.z = scaled.z - localHitPoint.z;

        Vector3 tmp;
        sub_51D890(&diff, &tmp, &surfaceNormal);

        float t1 = localHitPoint.x;
        float t2 = localHitPoint.y;
        float t3 = localHitPoint.z;

        float out[6];
        out[0] = t1;
        out[1] = t2;
        out[2] = t3;
        out[3] = 0.0f;
        out[4] = tmp.x;
        out[5] = tmp.y;

        sub_737A20(&flag, &rayInMe, &localHitPoint, &out[0], &out[3], &byte_8C9BCC);

        return true;
    }

    return false;
}
