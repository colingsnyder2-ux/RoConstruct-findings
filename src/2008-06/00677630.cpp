// from server: 93% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Shape {
    unsigned int unused;
    float x, y, z;
    char padding[40];
    char transform[1];
};

struct Renderer;

struct RendererTable {
    void* padding[14];
    void (__thiscall *setTransform)(Renderer*, const void*);
};

struct Renderer {
    RendererTable* table;
};

extern void __cdecl draw(Renderer*, const Vector3*, float,
                         unsigned int, unsigned int);

void __cdecl render(const Shape* shape, unsigned int a,
                    Renderer* renderer, unsigned int b)
{
    renderer->table->setTransform(renderer, shape->transform);

    Vector3 extent;
    extent.x = shape->x * 0.5f;
    extent.y = shape->y * 0.5f;
    extent.z = shape->z * 0.5f;

    draw(renderer, &extent, 1.0f, a, b);
}
