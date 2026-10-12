// from server: 37% by colin
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
    void getWorldPosition(Vector3* out);
    void getSize(Vector3* out);
    AABB* computeAABB(AABB* out, const Vector3* pos, const Vector3* size);
};

AABB* __fastcall computeAABB_impl(AABB* out, const Vector3* pos, const Vector3* size);

AABB* PercentPanel::computeAABB(AABB* out, const Vector3* pos, const Vector3* size)
{
    Vector3 p;
    Vector3 s;
    this->getWorldPosition(&p);
    this->getSize(&s);
    out->min.x = s.x + p.x;
    out->min.y = p.y + s.y;
    out->min.z = p.z + s.z;
    out->max.x = p.x - s.x;
    out->max.y = p.y - s.y;
    out->max.z = p.z - s.z;
    return out;
}
