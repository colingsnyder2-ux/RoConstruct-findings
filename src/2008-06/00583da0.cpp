// from server: 64% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vec3 {
    float x, y, z;
    Vec3();
    Vec3(float a, float b, float c);
};

inline Vec3::Vec3() {}
inline Vec3::Vec3(float a, float b, float c) : x(a), y(b), z(c) {}

struct Vec4 {
    float x, y, z, w;
    Vec4(const Vec3& v, float a);
};

inline Vec4::Vec4(const Vec3& v, float a)
    : x(v.x), y(v.y), z(v.z), w(a) {}

struct Box {
    Vec3 low, high;
};

extern const float half;

struct Frame {
    float rotation[3][3];
    Vec3 translation;
    Frame& center(const Box& box);
};

__forceinline Frame& Frame::center(const Box& box)
{
    double x = (box.high.x + box.low.x) * half;
    double y = (box.high.y + box.low.y) * half;
    double z = (box.high.z + box.low.z) * half;

    double a = rotation[0][0] * x
             + rotation[0][1] * y
             + rotation[0][2] * z + translation.x;
    double b = rotation[1][0] * x
             + rotation[1][1] * y
             + rotation[1][2] * z + translation.y;
    double c = rotation[2][0] * x
             + rotation[2][1] * y
             + rotation[2][2] * z + translation.z;

    translation.x = (float)a;
    translation.y = (float)b;
    translation.z = (float)c;
    return *this;
}

struct RenderData {
    char storage[100];
    RenderData(int, const Vec3&, Vec4, const Frame&);
};

extern const Vec3& __cdecl alternateColor();
extern void __cdecl render(const RenderData*, void*, void*);

struct S {
    void draw(void*, void*);
};

void S::draw(void* a, void* b)
{
    typedef void (__thiscall *GetBox)(void*, Box*);
    typedef void (__thiscall *GetFrame)(void*, Frame*);

    Box box;
    Frame frame;

    char* base = reinterpret_cast<char*>(this) - 0x1a0;
    reinterpret_cast<GetBox>(
        (*reinterpret_cast<void***>(base))[22])(base, &box);

    char* frameBase = reinterpret_cast<char*>(this) - 0x6c
        + (*reinterpret_cast<int**>(
            reinterpret_cast<char*>(this) - 0x6c))[2];

    reinterpret_cast<GetFrame>(
        (*reinterpret_cast<void***>(frameBase))[0])(frameBase, &frame);

    RenderData data(
        1,
        Vec3(box.high.x - box.low.x,
             box.high.y - box.low.y,
             box.high.z - box.low.z),
        Vec4(alternateColor(), 1.0f),
        frame.center(box));

    render(&data, a, b);
}
