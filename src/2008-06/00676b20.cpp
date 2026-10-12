// from server: 84% by king_originala
#pragma float_control(precise, off)

extern const float lengthFactor;
extern const float widthFactor;
extern const float crossOffset;
extern const float shade;

struct Vector3 {
    float x, y, z;
    Vector3(float, float, float);
};

inline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c) {}

struct Color4 {
    float r, g, b, a;
    Color4(float, float, float, float);
};

inline Color4::Color4(float red, float green, float blue, float alpha)
    : r(red), g(green), b(blue), a(alpha) {}

struct Renderer;

typedef void (__thiscall *QuadFunction)(
    Renderer *,
    const Vector3 &,
    const Vector3 &,
    const Vector3 &,
    const Vector3 &,
    const Color4 &
);

struct Renderer {
    QuadFunction *vtable;
};

void __cdecl drawCross(float width, float length, Renderer *renderer)
{
    float extent = length * lengthFactor;
    length = width * widthFactor;

    for (int face = 0; face < 2; ++face) {
        float direction;
        if (face == 0) {
            width = extent;
            direction = 1.0f;
        } else {
            width = -extent;
            direction = -1.0f;
        }

        for (int plane = 0; plane < 2; ++plane) {
            float y = length;
            float z = crossOffset;
            if (plane != 0) {
                float temporary = y;
                y = z;
                z = temporary;
            }

            renderer->vtable[24](
                renderer,
                Vector3(width, y * direction, z),
                Vector3(width, -(y * direction), z),
                Vector3(width, -(y * direction), -z),
                Vector3(width, y * direction, -z),
                Color4(shade, shade, shade, 1.0f)
            );
        }
    }
}
