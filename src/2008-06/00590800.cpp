// from server: 63% by king_originala
struct Vec {
    float x, y, z;
    float normalize(float);
    Vec operator*(float) const;
    Vec operator+(const Vec&) const;
};

inline Vec Vec::operator*(float s) const
{
    Vec v;
    v.x = x * s;
    v.y = y * s;
    v.z = z * s;
    return v;
}

inline Vec Vec::operator+(const Vec& b) const
{
    Vec v;
    v.x = x + b.x;
    v.y = y + b.y;
    v.z = z + b.z;
    return v;
}

inline Vec vector(float x, float y, float z)
{
    Vec v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

struct Box {
    Vec low, high;
};

struct Frame {
    float rotation[9];
    Vec position;
    Vec* column(Vec*, int) const;
};

struct Camera {
    const Frame& frame() const;
};

struct CameraSlot;
typedef Camera* (__thiscall *CameraGetter)(CameraSlot*, Frame*);

struct CameraTable {
    void* unused[2];
    CameraGetter get;
};

struct CameraSlot {
    CameraTable* table;
};

struct Collection {
    char storage[24];
    Collection();
    ~Collection();
};

struct Model;

struct S {
    char padding[0x288];
    CameraSlot camera;
    Vec fallback();
    Vec f(const Box&);
};

extern Model* __cdecl getCharacter(S*);
extern void __cdecl collect(Model*, Collection*);
extern void __cdecl bounds(Box*, const Collection*);
extern Vec* __cdecl convert(Vec*, const Vec*);

extern const float directionScale;
extern const float normalizationLimit;
extern const float half;
extern const float verticalScale;
extern const float placementScale;

Vec S::f(const Box& region)
{
    Model* character = getCharacter(this);
    if (character) {
        Frame cameraStorage;
        const Frame& frame =
            camera.table->get(&camera, &cameraStorage)->frame();

        float scale = directionScale;
        Vec directionStorage;
        const Vec* direction = frame.column(&directionStorage, 2);
        Vec offset;
        offset.x = scale * direction->x;
        offset.z = scale * direction->z;
        offset.y = 0.0f;
        offset.normalize(normalizationLimit);

        Vec extent = vector((region.high.x - region.low.x) * half,
                            0.0f,
                            (region.high.z - region.low.z) * half);

        Collection parts;
        collect(character, &parts);

        Box characterBounds;
        bounds(&characterBounds, &parts);

        Vec position =
            vector(extent.x * offset.x,
                   verticalScale * offset.y,
                   extent.z * offset.z) * placementScale
            + vector((characterBounds.high.x + characterBounds.low.x) * half,
                     characterBounds.low.y,
                     (characterBounds.high.z + characterBounds.low.z) * half);

        Vec temporary;
        Vec* result = convert(&temporary, &position);
        return vector(result->x, result->y, result->z);
    }
    return fallback();
}
