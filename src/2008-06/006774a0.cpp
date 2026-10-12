// from server: 93% by king_originala
struct Vector3 {
    float v[3];
};

struct Box {
    Vector3 low;
    Vector3 high;
};

struct Color {
    float v[4];
};

struct Adorn;
typedef void (__thiscall *DrawBox)(
    Adorn *, const Box &, const Color &, const Color &);

struct AdornVTable {
    void *unused[16];
    DrawBox drawBox;
};

struct Adorn {
    AdornVTable *vtable;
};

extern const Color &__cdecl defaultColor();

void __cdecl drawFaceEdges(
    Adorn *adorn, const Vector3 &size, float width,
    int face, const Color &color)
{
    int axis = face % 3;
    int sign = (face < 3) * 2 - 1;
    double center = sign * (double)size.v[axis];
    int first = (axis + 1) % 3;

    Vector3 low = { 0.0f, 0.0f, 0.0f };
    Vector3 high = { 0.0f, 0.0f, 0.0f };

    low.v[axis] = (float)(center - width);
    high.v[axis] = (float)(center + width);

    int second = (axis + 2) % 3;

    for (int i = 0; i < 2; ++i) {
        int a;
        int b;
        if (i) {
            a = first;
            b = second;
        } else {
            a = second;
            b = first;
        }

        for (int j = -1; j <= 1; j += 2) {
            double edge = j * (double)size.v[a];
            low.v[a] = (float)(edge - width);
            high.v[a] = (float)(edge + width);
            low.v[b] = -size.v[b] - width;
            high.v[b] = size.v[b] + width;

            Box box = {
                { low.v[0], low.v[1], low.v[2] },
                { high.v[0], high.v[1], high.v[2] }
            };
            adorn->vtable->drawBox(adorn, box, color, defaultColor());
        }
    }
}
