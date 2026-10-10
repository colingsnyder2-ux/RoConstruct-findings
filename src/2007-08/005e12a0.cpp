// from server: 85% by colin
struct Vector3 {
    float x, y, z;
};

extern "C" {
    void __cdecl sub_5ABF60(const Vector3* a, const Vector3* b, Vector3* out);
    void __cdecl sub_5E10B0(Vector3* a, const Vector3* b);
}

extern float dword_797EB0;
extern int dword_8C2AFC;
extern float dword_8C2AF0;
extern float dword_8C2AF4;
extern float dword_8C2AF8;
extern int dword_8BD138;
extern float dword_8BD12C;
extern float dword_8BD130;
extern float dword_8BD134;

struct VMotorFeature {
};

void __cdecl update(const Vector3* src, Vector3* dst) {
    Vector3 diff;
    diff.x = src->x - dst->x;
    diff.y = src->y - dst->y;
    diff.z = src->z - dst->z;

    if ((dword_8C2AFC & 1) == 0) {
        dword_8C2AFC |= 1;
        dword_8C2AF0 = 1.0f;
        dword_8C2AF4 = dword_797EB0;
        dword_8C2AF8 = 1.0f;
    }

    Vector3 result;
    sub_5ABF60(&diff, (const Vector3*)&dword_8C2AF0, &result);

    if ((dword_8BD138 & 1) == 0) {
        dword_8BD138 |= 1;
        dword_8BD12C = 0.0f;
        dword_8BD130 = 0.0f;
        dword_8BD134 = 0.0f;
    }

    if (dword_8BD12C != result.x ||
        dword_8BD130 != result.y ||
        dword_8BD134 != result.z) {
        sub_5E10B0(&result, dst);
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
}
