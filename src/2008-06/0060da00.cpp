// from server: 83% by king_originala
extern "C" void __cdecl alignedFree(void*);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vec3 {
    float x, y, z;
};

struct Ray {
    virtual ~Ray() {}
    Vec3 origin;
    Vec3 direction;
};

extern "C" Ray __cdecl makeRay(const Vec3&, const Vec3&);
extern Vec3 defaultVector;

struct PointerArray {
    void** data;
    int count;
    int capacity;

    PointerArray() {
        count = 0;
        capacity = 0;
        data = 0;
    }
    ~PointerArray() { alignedFree(data); }
    void append(void* const&);
};

struct Contact {
    int query(const Ray*, PointerArray*, void*, Vec3*, const Vec3*);
    int evaluate(const float*, void*, void*, Vec3*, float*, const float*);
};

int Contact::evaluate(const float* frame, void* item, void* context,
                      Vec3* point, float* distance, const float* scale)
{
    const float factor = *scale;
    Vec3 direction = {
        frame[4] * factor,
        frame[5] * factor,
        frame[6] * factor
    };

    Ray ray = makeRay(*reinterpret_cast<const Vec3*>(frame + 1), direction);

    PointerArray items;
    if (item)
        items.append(item);

    int result = query(&ray, &items, context, point, &defaultVector);
    float length;
    if (result) {
        const float x = point->x - ray.origin.x;
        const float y = point->y - ray.origin.y;
        const float z = point->z - ray.origin.z;
        length = static_cast<float>(sqrt(z * z + y * y + x * x));
    } else {
        length = 0.0f;
    }
    *distance = length;
    return result;
}
