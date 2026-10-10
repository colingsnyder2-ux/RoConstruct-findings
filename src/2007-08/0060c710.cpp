// from server: 59% by colin
struct Vector3 {
    float x, y, z;
};

struct Block {
    char pad[0x10];
    Vector3* vertices;
    int projectToFace(Vector3& ray, Vector3& clip, int* onBorder);
};

extern float g_epsilon;

int Block::projectToFace(Vector3& ray, Vector3& clip, int* onBorder) {
    float eps = g_epsilon;
    Vector3* v = vertices;

    if (v->x - ray.x > eps) {
        *onBorder = 0;
    } else if (ray.x - v->x > eps) {
        *onBorder = 3;
    }

    if (v->y - ray.y > eps) {
        *onBorder = 1;
    } else if (ray.y - v->y > eps) {
        *onBorder = 4;
    }

    if (v->z - ray.z > eps) {
        *onBorder = 2;
    } else if (ray.z - v->z > eps) {
        *onBorder = 5;
    }

    if (ray.z - v->z > eps) {
        *onBorder = 5;
        clip = *(Vector3*)((char*)vertices + 0x54);
        return 3;
    }

    if (*onBorder > 2) {
        clip = *(Vector3*)((char*)vertices + 0x54);
        return 3;
    }

    clip = *vertices;
    return 3;
}
