// from server: 83% by king_originala
extern "C" {
extern long (__stdcall * const InterlockedIncrement)(volatile long *);
extern long (__stdcall * const InterlockedDecrement)(volatile long *);
}

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
    Vec3(const Vec3 &);
    ~Vec3();
};

__forceinline Vec3::Vec3(const Vec3 &v)
    : x(v.x), y(v.y), z(v.z) {}

__forceinline Vec3::~Vec3() {}

struct Resource {
    virtual ~Resource();
    volatile long references;
    unsigned char data[32];

    Resource(int);
    void dispose();
};

struct Reference {
    Resource *pointer;
    Reference(Resource *) throw();
    ~Reference();
};

__forceinline Reference::Reference(Resource *p) throw() : pointer(0) {
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

__forceinline Reference::~Reference() {
    if (pointer && !InterlockedDecrement(&pointer->references)) {
        pointer->dispose();
        if (pointer)
            delete pointer;
    }
}

struct Member {
    unsigned char data[4];
    void assign(const Reference *);
};

struct Base {
    Base();
    virtual ~Base();
    unsigned char data[8];
};

struct Value {
    unsigned char data[12];
    Value(const Value &);
    ~Value();
    const Vec2 &get();
};

__forceinline Value::~Value() {}

Value __cdecl calculate(const Vec3 &, const Vec3 &, unsigned int *);

extern const float scaleFactor;

struct Temporary {
    unsigned char data[20];
    Resource *pointer;
    Vec2 scale;
    unsigned char tail[8];

    Temporary(const Reference *, Vec3, int);
    ~Temporary();
    void finish(const Vec3 &, int);
};

__forceinline Temporary::~Temporary() {
    if (pointer) {
        if (!InterlockedDecrement(&pointer->references)) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Builder : Base {
    Member member;

    Builder(const Vec3 &, const Vec3 &, const Vec2 &);
    virtual ~Builder();
};

Builder::Builder(const Vec3 &first, const Vec3 &second,
                 const Vec2 &dimensions) {
    Reference reference(new Resource(5));
    member.assign(&reference);

    Temporary temporary(&reference, first, 0);
    unsigned int scratch;
    const Vec2 &extent = calculate(first, second, &scratch).get();

    temporary.scale.x = extent.x * scaleFactor / dimensions.x;
    temporary.scale.y = extent.y * scaleFactor / dimensions.y;
    temporary.finish(second, 1);
}
