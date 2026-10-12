// from server: 86% by king_originala
struct Flag {
    unsigned char value;
    Flag() : value(0) {}
    ~Flag() {}
};

struct Object {
    char padding[0x44];
    unsigned int key;
    char reserved[8];
    float x, y, z;
};

struct State {
    char padding[0x50];
    float x, y, z;
};

extern "C" void __cdecl copyValues(float *, float *, float *, float *);

struct Part {
    bool check(Object *, Object *, Flag);
    bool update(unsigned int, unsigned int *, Flag);
    void release(Object *);
    bool f(Object *);
};

struct Prefix {
    unsigned int reserved;
    State *state;
    unsigned int extra;
};

struct Complete : Prefix, Part {};

bool Part::f(Object *object)
{
    if (!check(object, object, Flag())) {
        State *zs = static_cast<Complete *>(this)->state;
        State *ys = static_cast<Complete *>(this)->state;
        float *x = &static_cast<Complete *>(this)->state->x;
        copyValues(object ? &object->x : 0, x, &ys->y, &zs->z);

        unsigned int result;
        try {
            if (!update(object->key, &result, Flag())) {
                release(object);
                return false;
            }
        } catch (...) {
            release(object);
            throw;
        }
    }
    return true;
}
