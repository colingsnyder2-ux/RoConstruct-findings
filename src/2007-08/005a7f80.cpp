// from server: 48% by colin
struct VHumanoidBoundFuncDesc {
    char pad[0x134];
    int field134;
    char pad2[0x14c - 0x138];
    float field14c;
    float field150;
    float field154;
    void setDirection(const float* dir);
};

extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern int g_8bd138;
extern void __stdcall sub_444710();
extern "C" float __cdecl sqrtf(float);

void VHumanoidBoundFuncDesc::setDirection(const float* dir)
{
    if (dir[0] == field14c && dir[1] == field150 && dir[2] == field154)
        return;

    if (!(g_8bd138 & 1)) {
        g_8bd138 |= 1;
        g_8bd12c = 0.0f;
        g_8bd130 = 0.0f;
        g_8bd134 = 0.0f;
    }

    if (g_8bd12c == dir[0] && g_8bd130 == dir[1] && g_8bd134 == dir[2]) {
        field14c = dir[0];
        field150 = dir[1];
        field154 = dir[2];
        sub_444710();
        return;
    }

    float x = dir[0];
    float z = dir[2];
    float len = x * z + x * z;
    float inv = 1.0f / sqrtf(len);
    field14c = x * inv;
    field150 = dir[1] * inv;
    field154 = z * inv;
    field134 = 3;
    sub_444710();
}
