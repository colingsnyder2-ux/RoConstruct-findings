// from server: 36% by colin
struct LuaState;

struct Vec3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

extern "C" {
    int __cdecl sub_6115B0(LuaState* L, int idx, int n);
    int __cdecl sub_611C10(LuaState* L);
    void __cdecl sub_5A9040(float* v);
    void __cdecl sub_513510(Matrix3* out, const Vec3* in);
}

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern int g_96f050;
extern int g_95b1c0;
extern int g_95b1c8;

struct LuaArguments {
    int method(LuaState* L);
};

int LuaArguments::method(LuaState* L)
{
    int top = sub_6115B0(L, 1, g_95b1c8);
    int n = sub_611C10(L) - 1;

    if (n != 0)
    {
        if ((g_96f050 & 1) == 0)
        {
            g_96f050 |= 1;
            g_96f044 = 0.0f;
            g_96f048 = 0.0f;
            g_96f04c = 0.0f;
        }

        Matrix3 mat;
        sub_513510(&mat, (const Vec3*)&mat);

        Vec3 v;
        v.x = 0.0f;
        v.y = 0.0f;
        v.z = 0.0f;

        v.x = mat.m[0] * g_96f044 + mat.m[1] * g_96f048 + mat.m[2] * g_96f04c;
        v.y = mat.m[3] * g_96f044 + mat.m[4] * g_96f048 + mat.m[5] * g_96f04c;
        v.z = mat.m[6] * g_96f044 + mat.m[7] * g_96f048 + mat.m[8] * g_96f04c;

        sub_5A9040(&v.x);
        return 1;
    }

    int i = 0;
    if (n > 0)
    {
        do
        {
            int idx = i + 2;
            int handle = sub_6115B0(L, idx, g_95b1c0);

            Matrix3 mat;
            sub_513510(&mat, (const Vec3*)&mat);

            Vec3 v;
            v.x = 0.0f;
            v.y = 0.0f;
            v.z = 0.0f;

            v.x = mat.m[0] * *(float*)(handle + 0) + mat.m[1] * *(float*)(handle + 4) + mat.m[2] * *(float*)(handle + 8);
            v.y = mat.m[3] * *(float*)(handle + 0) + mat.m[4] * *(float*)(handle + 4) + mat.m[5] * *(float*)(handle + 8);
            v.z = mat.m[6] * *(float*)(handle + 0) + mat.m[7] * *(float*)(handle + 4) + mat.m[8] * *(float*)(handle + 8);

            sub_5A9040(&v.x);
            i++;
        } while (i < n);
    }

    return n;
}
