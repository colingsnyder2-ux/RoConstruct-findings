// from server: 81% by colin
struct VVector3 {
    float x;
    float y;
    float z;
};

int __stdcall equals(const VVector3* b, const VVector3* a) {
    if (a->x == b->x && a->y == b->y && a->z == b->z) return 1;
    return 0;
}
