// from server: 87% by colin
#pragma float_control(precise, off)

extern const float threshold;
extern "C" void __cdecl alignedFree(void *);

struct Array {
    void *data;
    int capacity;
    int size;
    Array();
    ~Array();
};

inline Array::Array()
{
    capacity = 0;
    size = 0;
    data = 0;
}

inline Array::~Array()
{
    alignedFree(data);
}

struct Box {
    float lx, ly, lz;
    float hx, hy, hz;
    Box(float, float, float, float, float, float);
};

inline Box::Box(float a, float b, float c, float d, float e, float f)
    : lx(a), ly(b), lz(c), hx(d), hy(e), hz(f)
{
}

struct Query {
    void collect(const Box &, int, Array &);
};

struct Object {
    void first(Array &);
    void second(Array &);
    void detach(int);
};

struct World {
    char padding[0x84];
    Query *query;
};

extern World *__cdecl getWorld(Object *);

struct Explosion {
    char padding[0x14];
    float elapsed;
    float x, y, z;
    float radius;
    void update(int, int, float);
};

void Explosion::update(int, int, float delta)
{
    elapsed += delta;
    if (elapsed > threshold) {
        if (radius > 0.0f) {
            Array results;
            Object *object = reinterpret_cast<Object *>(
                reinterpret_cast<char *>(this) - 0x130);
            World *world = getWorld(object);
            const float r = radius;
            Box box(x + r, y + r, z + r, x - r, y - r, z - r);
            world->query->collect(box, 0, results);
            object->first(results);
            object->second(results);
        }
        reinterpret_cast<Object *>(
            reinterpret_cast<char *>(this) - 0x130)->detach(0);
    }
}
