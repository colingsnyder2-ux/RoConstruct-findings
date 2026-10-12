// from server: 77% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Less {
    bool operator()(const Vector3& a, const Vector3& b) const;
};

bool Less::operator()(const Vector3& a, const Vector3& b) const
{
    if (b.x < a.x) {
        return true;
    }
    if (b.x > a.x) {
        return false;
    }
    if (b.y < a.y) {
        return true;
    }
    if (b.y > a.y) {
        return false;
    }
    if (b.z < a.z) {
        return true;
    }
    return false;
}
