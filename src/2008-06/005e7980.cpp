// from server: 65% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector3 {
    float x, y, z;
};

struct Bounds {
    Vector3 minimum, maximum;
};

struct Frame {
    char reserved[0x94];
    float rotation[9];
    Vector3 position;
    const void* get();
};

struct Shape;
typedef Vector3 (__thiscall *ExtentFunction)(Shape*, const float*);

struct Shape {
    ExtentFunction* vtable;
};

extern const float boundsMargin;

struct Geometry {
    char reserved[0x9C];
    Shape* shape;
    Frame* frame;
    Bounds getBounds();
};

Bounds Geometry::getBounds() {
    Frame* rotationFrame = frame;
    rotationFrame->get();

    Frame* positionFrame = frame;
    positionFrame->get();

    Vector3 extent = shape->vtable[5](shape, rotationFrame->rotation);

    Vector3 maximum = {
        extent.x + positionFrame->position.x,
        positionFrame->position.y + extent.y,
        positionFrame->position.z + extent.z
    };

    Vector3 minimum = {
        positionFrame->position.x - extent.x,
        positionFrame->position.y - extent.y,
        positionFrame->position.z - extent.z
    };

    Bounds result = { minimum, maximum };
    result.minimum.x -= boundsMargin;
    result.minimum.y -= boundsMargin;
    result.minimum.z -= boundsMargin;
    result.maximum.x += boundsMargin;
    result.maximum.y += boundsMargin;
    result.maximum.z += boundsMargin;
    return result;
}
