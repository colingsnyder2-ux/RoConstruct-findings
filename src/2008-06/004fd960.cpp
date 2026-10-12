// from server: 76% by king_originala
typedef unsigned int size_t;

extern "C" {
    extern long (__stdcall * const InterlockedIncrement)(volatile long *);
    extern long (__stdcall * const InterlockedDecrement)(volatile long *);
}

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Object {
    virtual ~Object();
    volatile long references;
    char data[32];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;
    explicit Reference(Object *);
    ~Reference();
};

inline Reference::Reference(Object *p) : pointer(0)
{
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->dispose();
        if (pointer)
            delete pointer;
    }
}

struct Slot {
    Object *pointer;
    void assign(const Reference &);
};

struct Base {
    virtual ~Base();
    char reserved0[8];
    Slot slot;
    char reserved1[116];

    Base();
};

struct Result {
    float data[3];
    Result(const Result &);
    const Vector3 &dimensions() const;
};

struct Scratch {
    char data[8];
};

Result __cdecl calculate(const Vector3 &, const Vector3 &, Scratch *);
extern const float scaleFactor;

struct Shape {
    char data[20];
    Object *pointer;
    float scaleX, scaleY;

    Shape(Reference &, Vector3, int, int);
    void configure(const Vector3 &, int);
    ~Shape();
};

inline Shape::~Shape()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct CylinderBuilder : Base {
    int kind;

    CylinderBuilder(const Vector3 &, const Vector3 &, const Vector3 &);
    virtual ~CylinderBuilder();
};

CylinderBuilder::CylinderBuilder(const Vector3 &size,
                                 const Vector3 &direction,
                                 const Vector3 &divisor)
    : Base()
{
    kind = 3;
    Reference reference(new Object(5));
    slot.assign(reference);

    Shape shape(reference, size, 0, 12);
    Scratch scratch;
    const Vector3 &dimensions =
        calculate(size, direction, &scratch).dimensions();

    float x = dimensions.x * scaleFactor / divisor.x;
    float y = dimensions.y * scaleFactor / divisor.y;
    shape.scaleX = x;
    shape.scaleY = y;
    shape.configure(direction, 1);
}
