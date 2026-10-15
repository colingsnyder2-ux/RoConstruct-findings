// from server: 79% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern const float halfScale;

struct Frame;

struct Box
{
    float minX, minY, minZ;
    float maxX, maxY, maxZ;

    static const Box& empty();
    Box transformed(const Frame& frame) const;
    void merge(const Box& other);
};

struct Vector
{
    float x, y, z;
};

struct Shape
{
    unsigned char padding[4];
    Vector size;
};

struct Part
{
    unsigned char padding[156];
    Shape* shape;

    const Frame& getFrame() const;
};

struct PartList
{
    Part** data;
    int count;
};

Box* __cdecl computeBounds(Box* result, const PartList* parts)
{
    const Box& initial = Box::empty();
    result->minX = initial.minX;
    result->minY = initial.minY;
    result->minZ = initial.minZ;
    result->maxX = initial.maxX;
    result->maxY = initial.maxY;
    result->maxZ = initial.maxZ;

    for (int i = 0; i < parts->count; ++i)
    {
        Part* part = parts->data[i];
        const Vector& size = part->shape->size;
        double x = size.x * halfScale;
        double y = size.y * halfScale;
        double z = size.z * halfScale;

        Box local = {
            (float)-x, (float)-y, (float)-z,
            (float)x, (float)y, (float)z
        };
        Box world = local.transformed(part->getFrame());
        result->merge(world);
    }

    return result;
}
