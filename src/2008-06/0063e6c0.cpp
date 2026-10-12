// from server: 68% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector {
    float x, y, z;
};

struct Matrix {
    float m[9];
    Matrix();
    Matrix& assign(const Matrix&);
    Vector* column(Vector*, int) const;
    void orient(const Vector&);
};

struct Bounds {
    float x0, y0, z0, x1, y1, z1;
    Bounds() throw();
};

struct Frame {
    Matrix rotation;
    Vector position;
};

struct Result {
    Matrix rotation;
    Vector position;
    Bounds bounds;
};

extern const float directionScale;
extern const float positionScale;

struct Tool {
    int intersect(void*, int, Vector*);
    Result* makeResult(Result*, void*, const Frame*);
};

Result* Tool::makeResult(Result* result, void* argument, const Frame* frame)
{
    Vector hit;
    hit.x = 0.0f;
    hit.y = 0.0f;
    hit.z = 0.0f;

    Vector direction;
    if (intersect(argument, 0, &hit)) {
        float x = hit.x - frame->position.x;
        float y = hit.y - frame->position.y;
        float z = hit.z - frame->position.z;
        float inverseLength =
            1.0f / (float)sqrt(z * y + z * y + x * x);
        direction.x = x * inverseLength;
        direction.y = y * inverseLength;
        direction.z = z * inverseLength;
    } else {
        float scale = directionScale;
        Vector temporary;
        const Vector* column = frame->rotation.column(&temporary, 2);
        direction.x = column->x * scale;
        direction.y = column->y * scale;
        direction.z = column->z * scale;
    }

    const Vector* source = &direction;
    Vector forward;
    forward.x = source->x;
    forward.y = source->y;
    forward.z = source->z;

    Matrix rotation;
    rotation.orient(forward);

    float x = forward.x * positionScale;
    float y = forward.y * positionScale;
    float z = forward.z * positionScale;

    Vector position;
    position.x = x + frame->position.x;
    position.y = y + frame->position.y;
    position.z = z + frame->position.z;

    static Bounds bounds;

    result->rotation.assign(rotation);
    result->position.x = position.x;
    result->position.y = position.y;
    result->position.z = position.z;
    result->bounds.x0 = bounds.x0;
    result->bounds.y0 = bounds.y0;
    result->bounds.z0 = bounds.z0;
    result->bounds.x1 = bounds.x1;
    result->bounds.y1 = bounds.y1;
    result->bounds.z1 = bounds.z1;
    return result;
}
