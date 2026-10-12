// from server: 67% by king_originala
#pragma float_control(precise, off)

struct Vec {
    float x, y, z;
    Vec();
    Vec(float, float, float);
    Vec operator*(float) const;
    Vec operator-(const Vec&) const;
};

__forceinline Vec::Vec() {}

__forceinline Vec::Vec(float a, float b, float c)
    : x(a), y(b), z(c) {}

__forceinline Vec Vec::operator*(float s) const
{
    return Vec(x * s, y * s, z * s);
}

__forceinline Vec Vec::operator-(const Vec& v) const
{
    return Vec(x - v.x, y - v.y, z - v.z);
}

struct Box {
    Vec low, high;
};

struct Ray {
    virtual ~Ray();
    Vec origin, direction;
};

__forceinline Ray::~Ray() {}

extern float halfScale;
extern float reverseScale;
extern Vec auxiliary;

extern Ray __cdecl makeRay(const Vec&, const Vec&);
extern bool __cdecl intersectBox(
    const Vec&, const Vec&, const Box&, Vec*, bool*, Vec*);

struct Block {
    int unused;
    Vec size;
    bool intersect(const Ray&, Vec*, bool*);
};

bool Block::intersect(const Ray& ray, Vec* point, bool* hit)
{
    float x = size.x * halfScale;
    float y = size.y * halfScale;
    float z = size.z * halfScale;

    float nx = -x;
    float ny = -y;
    float nz = -z;

    *hit = false;

    Box box;
    box.low.x = nx;
    box.low.y = ny;
    box.low.z = nz;
    box.high.x = x;
    box.high.y = y;
    box.high.z = z;

    bool result = intersectBox(
        ray.origin, ray.direction, box, point, hit, &auxiliary);

    if (*hit) {
        *hit = false;

        Vec origin = ray.origin - ray.direction * reverseScale;
        Ray reversed = makeRay(origin, ray.direction);

        Box second;
        second.low.x = nx;
        second.low.y = ny;
        second.low.z = nz;
        second.high.x = x;
        second.high.y = y;
        second.high.z = z;

        intersectBox(
            reversed.origin, reversed.direction, second,
            point, hit, &auxiliary);
        return true;
    }

    return result;
}
