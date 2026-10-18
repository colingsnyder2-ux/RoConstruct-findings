// from server: 81% by colin
struct Vector3 {
    float x, y, z;
};

struct Camera {
    Vector3 const& getDerivedPosition() const;
};

extern "C" int __cdecl sub_6A17C6(void*);

struct RbxSubEntity {
    char pad[0x28];
    void* node;
    char pad2[0xe4 - 0x2c];
    float cachedValue;
    int cachedId;
    char pad3[0xfc - 0xec];
    float fx;
    char pad4[0x10c - 0x100];
    float fy;
    char pad5[0x11c - 0x110];
    float fz;
    float getValue(int id);
};

float RbxSubEntity::getValue(int id) {
    if (cachedId == id) {
        return cachedValue;
    }
    void* n = node;
    void** vtbl = *(void***)n;
    typedef void* (__thiscall *Fn)(void*, int, const char*, const char*, int);
    Fn fn = (Fn)vtbl[0x48 / 4];
    void* r = fn(n, 0, (const char*)0x932cec, (const char*)0x932d04, 0);
    sub_6A17C6(r);

    float a = fx;
    float b = fy;
    float c = fz;

    Camera* cam = (Camera*)id;
    const Vector3& p = cam->getDerivedPosition();

    float dx = a - p.x;
    float dy = b - p.y;
    float dz = c - p.z;
    return dx * dx + dy * dy + dz * dz;
}
