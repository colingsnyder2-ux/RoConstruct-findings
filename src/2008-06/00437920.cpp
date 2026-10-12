// from server: 95% by king_originala
struct S;

struct VTable {
    char pad[0xe8];
    unsigned int (__thiscall *getColor)(S*);
};

struct Color3 {
    float r, g, b;
};

struct S {
    VTable* vtable;
    Color3 color();
};

Color3 S::color() {
    unsigned int value = vtable->getColor(this);
    Color3 result;
    result.r = (int)(unsigned char)value * 0.00392156862745098f;
    result.g = (int)(unsigned char)(value >> 8) * 0.00392156862745098f;
    result.b = (int)(unsigned char)(value >> 16) * 0.00392156862745098f;
    return result;
}
