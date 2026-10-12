// from server: 87% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Ray {
    Vector3 origin;
    Vector3 direction;

    virtual ~Ray();
    static Ray fromOriginAndDirection(const Vector3&, const Vector3&);
};

inline Ray::~Ray()
{
}

struct PartInstance;

struct GetSetImpl {
    static PartInstance* get(PartInstance*);
};

struct Filter;
extern Filter filter;
extern const float scale;

struct World {
    PartInstance* intersect(const Ray&, void*, void*, void*, Filter*);
};

struct ArrowTool {
    static PartInstance* findPart(const Ray*, World*, void*, void*, void*);
};

PartInstance* ArrowTool::findPart(
    const Ray* input, World* world, void* a, void* b, void* c)
{
    Vector3 direction;
    direction.x = input->direction.x * scale;
    direction.y = input->direction.y * scale;
    direction.z = input->direction.z * scale;

    Ray ray = Ray::fromOriginAndDirection(input->origin, direction);
    PartInstance* part = world->intersect(ray, a, b, c, &filter);
    if (part)
        return GetSetImpl::get(part);
    return 0;
}
