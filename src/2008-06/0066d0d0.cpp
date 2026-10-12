// from server: 93% by king_originala
struct Vec {
    float x, y, z;

    Vec(const Vec& v) : x(v.x), y(v.y), z(v.z) {}
};

extern const Vec& __cdecl zeroVector();
extern float tolerance;

struct Item {};

struct Result {
    Item* item;
    int kind;
    Vec position;
    Vec direction;

    Result() : item(0), kind(6), position(zeroVector()),
               direction(zeroVector()) {}

    void prepare();
};

struct Holder {
    char padding[0x84];
    void* value;
};

struct Context {
    char padding[0x2e4];
    Holder* holder;
};

struct Temporary {
    char storage[20];

    Temporary(Context*);
    ~Temporary();
};

struct Hit {
    char padding[0x228];
    Item item;
};

extern Hit* __cdecl findHit(
    void*, void*, void*, Temporary*, Vec*, float);

struct S {
    char padding0[0x10];
    Context* context;
    void* target;
    char padding1[0x2c];
    char data[1];

    bool accepts(Item*, int);
    bool validates(Item*, void*);
    Result run(int, bool);
};

Result S::run(int value, bool check)
{
    Result result;
    Temporary temporary(context);
    void* world = context->holder->value;
    Hit* hit = findHit(data, world, target,
                       &temporary, &result.position, tolerance);
    if (hit) {
        Item* item = &hit->item;
        result.item = item;
        if (accepts(item, value)) {
            if (!check || validates(item, target)) {
                result.prepare();
                return result;
            }
        }
    }
    return Result();
}
