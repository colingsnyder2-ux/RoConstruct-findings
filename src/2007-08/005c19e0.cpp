// from server: 46% by colin
struct LuaArguments {
    int offset;
    void* L;
    bool getValues(float* out);
};

extern "C" int __cdecl sub_5C16A0(void* L, int index, float* out);
extern "C" float __cdecl sub_5BD8D0(void* L, int index);
extern "C" void* __cdecl sub_5BF240(void* L, int index, void* def);
extern "C" void __cdecl sub_534D50(void* L);
extern "C" void __cdecl sub_50F630(void* a, void* b, void* c);

extern void* g_8abe78;

bool LuaArguments::getValues(float* out) {
    float v0 = 0.0f;
    float v1 = 0.0f;
    float v2 = 0.0f;

    if (sub_5C16A0(L, 1, &v0)) {
        if (sub_5C16A0(L, 2, &v1)) {
            float x = v0 / v2;
            float y = v1 / v2;
            float z = v2 / v2;
            out[0] = x;
            out[1] = y;
            out[2] = z;
        } else {
            float f = sub_5BD8D0(L, 2);
            sub_50F630(&f, &v1, &v2);
            sub_534D50(L);
            return true;
        }
    } else {
        float* p = (float*)sub_5BF240(L, 2, g_8abe78);
        v0 = p[0];
        v1 = p[1];
        v2 = p[2];
        float f = sub_5BD8D0(L, 1);
        float x = v0 / f;
        float y = v1 / f;
        float z = v2 / f;
        out[0] = x;
        out[1] = y;
        out[2] = z;
    }

    sub_534D50(L);
    return true;
}
