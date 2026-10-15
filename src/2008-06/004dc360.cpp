// from server: 72% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct ViewG3D {
    float x;
    float y;
    float z;
    int compare(const ViewG3D& other) const;
};

int ViewG3D::compare(const ViewG3D& other) const {
    if (x < other.x) return -1;
    if (x > other.x) return 1;
    if (y < other.y) return -1;
    if (y > other.y) return 1;
    if (z < other.z) return -1;
    if (z > other.z) return 1;
    return 0;
}
