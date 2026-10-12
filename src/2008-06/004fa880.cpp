// from server: 72% by king_originala
extern "C" {
    extern long (__stdcall *const InterlockedIncrement)(volatile long*);
    extern long (__stdcall *const InterlockedDecrement)(volatile long*);
}

void* __cdecl operator new(unsigned int);

struct Vec3 {
    float x, y, z;
    Vec3(const Vec3&);
    ~Vec3();
};

inline Vec3::Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) {}
inline Vec3::~Vec3() {}

struct Vec2 {
    float x, y;
};

struct Image {
    virtual ~Image();
    volatile long references;
    unsigned char data[32];

    Image(int);
    void release();
};

struct Ref {
    Image* pointer;
    __declspec(nothrow) explicit Ref(Image*);
    ~Ref();
};

inline Ref::Ref(Image* p) : pointer(0) {
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Ref::~Ref() {
    if (pointer && !InterlockedDecrement(&pointer->references)) {
        pointer->release();
        if (pointer)
            delete pointer;
    }
}

struct Holder {
    unsigned int data[2];
    void assign(const Ref&);
};

struct BuilderBase {
    void* table;
    unsigned int data[2];

    BuilderBase();
    ~BuilderBase();
};

extern void* builderTable;
extern void* geometryTable;
extern const float depthFactor;
extern const float geometryFactor;
extern const float textureFactor;

struct GeometryBase {
    void* table;
    unsigned int data[4];
    Image* image;
    Vec2 scale;

    GeometryBase(const Ref*, Vec3, int);
};

struct Geometry : GeometryBase {
    float factor;
    float depth;

    Geometry(const Ref*, const Vec3&, float);
    ~Geometry();
    void build(int, int);
};

inline Geometry::Geometry(const Ref* r, const Vec3& v, float d)
    : GeometryBase(r, v, 0) {
    table = &geometryTable;
    factor = geometryFactor;
    depth = d;
}

inline Geometry::~Geometry() {
    if (image) {
        if (!InterlockedDecrement(&image->references)) {
            image->release();
            if (image)
                delete image;
        }
        image = 0;
    }
}

struct TextureSize {
    unsigned int data[3];
    const Vec2* size();
};

TextureSize __cdecl getTextureSize(const Vec3*, int, float*);

struct S : BuilderBase {
    Holder holder;
    S(const Vec3*, int, const Vec2*);
};

S::S(const Vec3* dimensions, int purpose, const Vec2* textureDimensions)
    : BuilderBase() {
    table = &builderTable;

    float depth = dimensions->z * depthFactor;
    Ref image(new Image(5));
    holder.assign(image);

    Geometry geometry(&image, *dimensions, depth);
    float auxiliary;
    const Vec2* size = getTextureSize(dimensions, purpose, &auxiliary).size();

    float x = size->x * textureFactor;
    float y = size->y * textureFactor;
    geometry.scale.x = x / textureDimensions->x;
    geometry.scale.y = y / textureDimensions->y;
    geometry.build(purpose, 1);
}
