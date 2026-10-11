// from server: 52% by atomic.potato
struct VVector3 {
    float x;
    float y;
    float z;
};

int __stdcall equals(const VVector3* b, const VVector3* a) {
    if (a->x != b->x) return 0;
    if (a->y != b->y) return 0;
    if (a->z != b->z) return 0;
    return 1;
}
