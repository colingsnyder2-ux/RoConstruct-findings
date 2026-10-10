// from server: 54% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct AABB {
    Vector3 min;
    Vector3 max;
};

struct PercentPanel {
    void getSize(Vector3* out);
    void getPosition(Vector3* out);
    AABB* getExtents();
    AABB* computeExtents(AABB* out, const Vector3* size, const Vector3* position);
};

extern "C" AABB* __stdcall sub_4E0180(AABB* out, const Vector3* size, const Vector3* position);

void PercentPanel::getSize(Vector3* out) {
    void** vtbl = *(void***)this;
    typedef void (__thiscall *Fn)(void*, Vector3*);
    ((Fn)vtbl[0x4c / 4])(this, out);
}

void PercentPanel::getPosition(Vector3* out) {
    void** vtbl = *(void***)this;
    typedef void (__thiscall *Fn)(void*, Vector3*);
    ((Fn)vtbl[0x60 / 4])(this, out);
}

AABB* PercentPanel::computeExtents(AABB* out, const Vector3* size, const Vector3* position) {
    return sub_4E0180(out, size, position);
}

AABB* PercentPanel::getExtents() {
    Vector3 size;
    Vector3 position;
    getSize(&size);
    getPosition(&position);
    AABB local;
    AABB* result = computeExtents(&local, &size, &position);
    return result;
}
