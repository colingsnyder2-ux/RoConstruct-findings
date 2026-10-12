// from server: 67% by king_originala
struct Vec {
    float x, y, z;
};

struct Box {
    Vec faceCenter(int index) const;
};

struct Transform {
    float m[9];
    Vec translation;
};

struct Ray {
    int tag;
    Vec origin;
    Vec direction;
};

struct Hit {
    virtual ~Hit();
    Vec point;
    float distance;
};

inline Hit::~Hit() {}

extern "C" const double* _Inf;
extern float offsetScale;
extern unsigned char intersectionContext;

extern const Vec* __cdecl faceNormal(int index);
extern float __cdecl pointDistance(const Vec* origin, const Vec* point);
extern double __cdecl intersect(
    const Vec* origin,
    const Vec* direction,
    Vec* point,
    Vec* normal,
    void* context
);

bool __cdecl testEffect(
    const Box* box,
    const Transform* transform,
    const Ray* ray,
    Vec* result,
    int* face
) {
    const Vec* direction = &ray->direction;
    const Vec* origin = &ray->origin;

    for (int i = 0; i < 6; ++i) {
        Vec center = box->faceCenter(i);
        const Vec* n = faceNormal(i);

        center.x += n->x * offsetScale;
        center.y += n->y * offsetScale;
        center.z += n->z * offsetScale;

        Vec point;
        point.x = transform->m[0] * center.x
                + transform->m[2] * center.z
                + transform->m[1] * center.y
                + transform->translation.x;
        point.y = transform->m[3] * center.x
                + transform->m[5] * center.z
                + transform->m[4] * center.y
                + transform->translation.y;
        point.z = transform->m[8] * center.z
                + transform->m[7] * center.y
                + transform->m[6] * center.x
                + transform->translation.z;

        float distance = pointDistance(origin, &point);

        Vec normal;
        normal.x = 0.0f;
        normal.y = 0.0f;
        normal.z = 0.0f;

        Hit hit;
        hit.point = point;
        hit.distance = distance;

        static double infinity = *_Inf;
        bool found = intersect(
            origin, direction, &hit.point, &normal, &intersectionContext
        ) < infinity;

        if (found) {
            *face = i;
            result->x = point.x;
            result->y = point.y;
            result->z = point.z;
            return true;
        }
    }

    return false;
}
