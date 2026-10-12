// from server: 78% by king_originala
extern const float scale;

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
    Matrix3& operator=(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
};

struct Body {
    char reserved[0x94];
    Frame frame;
    const void* get();
};

struct Geometry {
    char reserved[4];
    Vector3 size;
};

struct Primitive {
    char reserved[0x9c];
    Geometry* geometry;
    Body* body;
    Frame getFrame();
};

Frame Primitive::getFrame()
{
    Body* b = body;
    b->get();

    const Vector3& size = geometry->size;
    double x = size.x * (double)scale;
    double y = size.y * (double)scale;
    double z = size.z * (double)scale;
    x = -x;
    y = -y;
    z = -z;

    const Frame& source = b->frame;
    const float* m = source.rotation.m;

    float px = (float)(((m[2] * z + m[1] * y) + m[0] * x)
                     + source.translation.x);
    float py = (float)(((m[5] * z + m[3] * x) + m[4] * y)
                     + source.translation.y);
    float pz = (float)(((m[8] * z + m[6] * x) + m[7] * y)
                     + source.translation.z);

    Frame result;
    result.rotation = source.rotation;
    result.translation.x = px;
    result.translation.y = py;
    result.translation.z = pz;
    return result;
}
