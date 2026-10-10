// from server: 53% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Level {
    float minX;
    float minY;
    float maxX;
    float maxY;
};

struct Mesh {
    Level computeLevel(const Vector3& a, const Vector3& b);
};

Level Mesh::computeLevel(const Vector3& a, const Vector3& b) {
    Level result;
    result.minX = 0.0f;
    result.minY = 0.0f;
    result.maxX = 0.0f;
    result.maxY = 0.0f;

    const float* pa = &a.x;
    const float* pb = &b.x;

    float t;

    if (pa[1] < pb[1]) {
        t = pa[1];
    } else {
        t = pb[1];
    }

    if (pa[0] < pb[0]) {
        result.minX = pa[0];
    } else {
        result.minX = pb[0];
    }

    result.minY = t;

    if (pb[1] < pa[1]) {
        t = pb[1];
    } else {
        t = pa[1];
    }

    if (pb[0] < pa[0]) {
        result.maxX = pb[0];
    } else {
        result.maxX = pa[0];
    }

    result.maxY = t;

    return result;
}
