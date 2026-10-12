// from server: 58% by king_originala
extern const float colorScale;

struct Color3 {
    float r, g, b;
    Color3(unsigned int color);
    Color3(const Color3&);
};

inline Color3::Color3(unsigned int color)
{
    const float scale = colorScale;
    r = float((unsigned char)color) * scale;
    g = float((unsigned char)(color >> 8)) * scale;
    b = float((unsigned char)(color >> 16)) * scale;
}

struct String;
struct Result;

struct BrickColor {
    int value;
    String& name() const;
};

extern void __cdecl closest(BrickColor* result, Color3 color);
extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *initializeResult)(Result*, const char*);

Result* __cdecl convertColor(Result* result, unsigned int color)
{
    BrickColor brick;
    brick.value = 0;
    closest(&brick, Color3(color));
    initializeResult(result, stringData(&brick.name()));
    return result;
}
