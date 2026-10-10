// from server: 65% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Inner {
    char pad0[0x18c];
    int flag;
};

struct Middle {
    char pad0[0xb0];
    Inner* inner;
};

struct TextureProxyBase {
    char pad0[0xc8];
    int field_c8;
    char pad1[0x100];
    Middle* middle;
    bool check();
};

extern "C" Vector3* __cdecl getVector();
extern "C" float __cdecl computeDistance(const Vector3* v);

bool TextureProxyBase::check()
{
    if (field_c8 != 0)
        return false;
    Inner* in = middle->inner;
    if (in->flag != 1)
        return false;
    Vector3* v = getVector();
    Vector3 local;
    local.x = v->x;
    local.y = v->y;
    local.z = v->z;
    float d = computeDistance(&local);
    if (d == 0.0)
        return true;
    return false;
}
