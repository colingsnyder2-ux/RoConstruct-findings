// from server: 66% by colin
struct Vec {
    float x, y, z;
    float normalize(float);
};

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

        Vec extent;
        extent.x = (region.high.x - region.low.x) * half;
        extent.y = 0.0f;
        extent.z = (region.high.z - region.low.z) * half;

        Collection parts;
        collect(character, &parts);

        Box characterBounds;
        bounds(&characterBounds, &parts);

        Vec position;
        position.x = extent.x * offset.x * placementScale
            + (characterBounds.high.x + characterBounds.low.x) * half;
        position.y = verticalScale * offset.y * placementScale
            + characterBounds.low.y;
        position.z = extent.z * offset.z * placementScale
            + (characterBounds.high.z + characterBounds.low.z) * half;

        Vec temporary;
        Vec* result = convert(&temporary, &position);
        Vec out;
        out.x = result->x;
        out.y = result->y;
        out.z = result->z;
        return out;
    }
    return fallback();
}
