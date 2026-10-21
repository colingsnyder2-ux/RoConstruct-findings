// from server: 74% by coldek
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern double (__cdecl *ceilCall)(double);
extern const float unitScale;
extern const float segmentLength;
extern const float remainderScale;

struct V2 {
    float x, y;
    V2();
    V2(float, float);
    V2(const V2&);
    V2 operator-() const;
    float& operator[](int);
};

inline V2::V2() : x(0.0f), y(0.0f) {}
inline V2::V2(float a, float b) : x(a), y(b) {}
inline V2::V2(const V2& a) : x(a.x), y(a.y) {}
inline V2 V2::operator-() const { return V2(-x, -y); }
inline float& V2::operator[](int i) { return (&x)[i]; }

struct V3 {
    float x, y, z;
    V3();
    V3(float, float, float);
    V2 xy() const;
    float& operator[](int);
};

inline V3::V3() {}
inline V3::V3(float a, float b, float c) : x(a), y(b), z(c) {}
inline float& V3::operator[](int i) { return (&x)[i]; }

struct Pair {
    short x, y;
    short& operator[](int);
};

inline short& Pair::operator[](int i) { return (&x)[i]; }

struct Rect {
    float data[4];
};

extern void __cdecl makeBox(Rect*, const V2*, const V2*);
extern void __cdecl getDimensions(V3*, const void*);
extern float __cdecl textureScale(unsigned int);

struct Box {
    Rect rect;
    float z;
    Box(const V2&, const V2&, float);
    Box(const Box&);
};

inline Box::Box(const V2& a, const V2& b, float depth) : z(depth)
{
    makeBox(&rect, &a, &b);
}

inline Box::Box(const Box& b) : rect(b.rect), z(b.z) {}

template<class T>
const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct Builder {
    unsigned int reserved;
    float dimensions[3];
    unsigned int flags;
    unsigned int reserved2;
    float u, v;

    void build(void*, void*, Pair, int);
    void emit(void*, void*, Box, V2, V2, int, Pair);
};

void Builder::build(void* first, void* second, Pair count, int mode)
{
    unsigned int surface = (flags >> 9) & 7;
    V3 dimensionsValue;
    getDimensions(&dimensionsValue, dimensions);
    V3 extent((float)fabs(dimensionsValue.x),
              (float)fabs(dimensionsValue.y),
              (float)fabs(dimensionsValue.z));

    bool useFirst = mode == 0 && extent.x <= extent.y;
    int axis = !useFirst;
    int segments;
    if (mode == 0 && surface != 0) {
        float n = (float)ceilCall(extent[axis] * unitScale);
        segments = (int)n;
    } else {
        segments = 1;
    }

    Pair subdivisions;
    subdivisions.y = 0;
    subdivisions.x = 0;
    short other = count[1 - axis];
    subdivisions[axis] = maximum<short>(1, (short)(other / segments));
    float depth = extent.z;
    subdivisions[1 - axis] = other;

    V2 start = -extent.xy();
    V2 end = extent.xy();
    V2 offset;
    V2 scale;

    switch (mode) {
    case 0:
        if (surface == 0) {
            offset.x = remainderScale;
            offset.y = unitScale;
            scale[1 - axis] = 0.0f;
            scale[axis] = 0.0f;
        } else {
            offset[1 - axis] = 0.0f;
            offset[axis] = textureScale(surface);
            scale[1 - axis] = extent[1 - axis] * 2.0f;
            scale[axis] = unitScale;
            if (axis == 1)
                scale.x = -scale.x;
        }
        break;
    case 1:
        offset.x = 0.0f;
        offset.y = v;
        scale.x = u;
        scale.y = -v;
        break;
    case 2:
        offset.x = 0.0f;
        offset.y = 0.0f;
        scale.x = 0.0f;
        scale.y = 0.0f;
        break;
    }

    for (int i = 0; i < segments; ++i) {
        if (i == segments - 1) {
            end[axis] = extent[axis];
            if (mode == 0 && surface != 0)
                scale[axis] = ((end[axis] - start[axis]) *
                              scale[axis]) * remainderScale;
        } else {
            end[axis] = start[axis] + segmentLength;
        }
        emit(first, second, Box(start, end, depth),
             offset, scale, axis, subdivisions);
        start[axis] = end[axis];
    }
}
