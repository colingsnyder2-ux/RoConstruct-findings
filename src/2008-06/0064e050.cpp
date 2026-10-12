// from server: 94% by king_originala
struct Vector3 {
    float x, y, z;

    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}

    Vector3& operator=(const Vector3& v) {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }
};

struct Ray {
    Vector3 origin;
    Vector3 direction;

    Ray();
    virtual ~Ray() {}

    Ray& operator=(const Ray& r) {
        origin = r.origin;
        direction = r.direction;
        return *this;
    }
};

struct Matrix3 {
    float elements[9];
    Matrix3& operator=(const Matrix3&);
    static const Matrix3& identity();
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;

    void lookAt(const Vector3&);
};

struct Camera {
    Ray transform(const Ray&);
};

struct S {
    char padding[0x130];
    Ray ray;
    char remaining[0x18];
    Camera* camera;

    void update();
    Frame frame();
};

Frame S::frame() {
    update();

    Ray r;
    if (camera)
        r = camera->transform(ray);

    Frame result;
    result.rotation = Matrix3::identity();
    result.translation.x = r.origin.x;
    result.translation.y = r.origin.y;
    result.translation.z = r.origin.z;
    result.lookAt(Vector3(r.origin.x + r.direction.x,
                         r.origin.y + r.direction.y,
                         r.origin.z + r.direction.z));
    return result;
}
