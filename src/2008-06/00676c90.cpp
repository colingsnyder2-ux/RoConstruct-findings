// from server: 93% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float elements[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
    Frame(const Matrix3&, const Vector3&);
    Frame operator*(const Frame&) const;
};

__forceinline Frame::Frame(const Matrix3& r, const Vector3& t)
    : rotation(r)
{
    translation.x = t.x;
    translation.y = t.y;
    translation.z = t.z;
}

struct Color4 {
    float r, g, b, a;
};

struct Scratch {
    Vector3 offset;
    union {
        Vector3 halfSize;
        Color4 rgba;
    };
};

struct Object {
    unsigned char padding0[4];
    Vector3 size;
    unsigned char padding1[16];
    int surfaces[6];
    Frame frame;
};

struct Renderer;

struct RendererTable {
    unsigned char padding0[56];
    void (__thiscall *setFrame)(Renderer*, const Frame&);
    unsigned char padding1[20];
    void (__thiscall *draw)(Renderer*, float, float, const Color4&, void*);
};

struct Renderer {
    RendererTable* table;
};

extern const Matrix3& __cdecl faceRotation(int);
extern const Vector3& __cdecl defaultColor();
extern void* __cdecl drawResource();

extern const float baseRadius;
extern const float selectedRadius;
extern const float selectedScale;

void __cdecl drawFace(Object* object, int face, Renderer* renderer,
                      const Vector3& color)
{
    int surface = object->surfaces[face];
    Scratch scratch;

    scratch.halfSize.x = object->size.x * 0.5f;
    scratch.halfSize.y = object->size.y * 0.5f;
    scratch.halfSize.z = object->size.z * 0.5f;

    const Matrix3& rotation = faceRotation(face);

    scratch.offset.x = 0.0f;
    scratch.offset.y = 0.0f;
    scratch.offset.z = 0.0f;

    int axis = face % 3;
    (&scratch.offset.x)[axis] =
        (face > 2 ? -1.0f : 1.0f) * (&scratch.halfSize.x)[axis];

    Frame local(rotation, scratch.offset);
    Frame world = object->frame * local;
    renderer->table->setFrame(renderer, world);

    const Vector3& initialColor = defaultColor();
    RendererTable* table = renderer->table;
    scratch.rgba.r = initialColor.x;
    scratch.rgba.g = initialColor.y;
    scratch.rgba.b = initialColor.z;
    scratch.rgba.a = 1.0f;
    void* resource = drawResource();
    table->draw(renderer, baseRadius, 1.0f, scratch.rgba, resource);

    if (surface == 7 || surface == 8) {
        table = renderer->table;
        scratch.rgba.r = color.x;
        scratch.rgba.g = color.y;
        scratch.rgba.b = color.z;
        scratch.rgba.a = 1.0f;
        resource = drawResource();
        table->draw(renderer, selectedRadius, selectedScale,
                    scratch.rgba, resource);
    }
}
