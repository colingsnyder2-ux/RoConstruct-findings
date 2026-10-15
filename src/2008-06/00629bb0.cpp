// from server: 82% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector3 {
    float x, y, z;
};

struct S {
    char padding0[8];
    bool dirty;
    char padding1[39];
    Vector3 position;
    char padding2[96];
    Vector3 linear;
    Vector3 angular;

    void refresh();
    void apply(const Vector3& force, const Vector3& point);
};

void S::apply(const Vector3& force, const Vector3& point)
{
    if (dirty)
        refresh();

    linear.x += force.x;
    linear.y += force.y;
    linear.z += force.z;

    double x = (double)point.x - position.x;
    double y = (double)point.y - position.y;
    double z = (double)point.z - position.z;

    double cx = y * force.z - z * force.y;
    double cy = z * force.x - x * force.z;
    double cz = x * force.y - y * force.x;

    angular.x = (float)(angular.x + cx);
    angular.y = (float)(angular.y + cy);
    angular.z = (float)(angular.z + cz);
}
