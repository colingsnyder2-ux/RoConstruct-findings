// from server: 79% by king_originala
struct State;

struct Vector3 {
    float x, y, z;
};

extern const char *vectorType;

extern "C" Vector3 *__cdecl checkVector(State *, int, const char *);
extern "C" double __cdecl checkNumber(State *, int);
extern "C" void *__cdecl newUserdata(State *, unsigned int);
extern "C" void __cdecl getField(State *, int, const char *);
extern "C" int __cdecl setMetatable(State *, int);

int __cdecl interpolateVector(State *state)
{
    const Vector3 *a = checkVector(state, 1, vectorType);
    const Vector3 *b = checkVector(state, 2, vectorType);
    double t = checkNumber(state, 3);

    Vector3 result;
    result.x = (float)((b->x - a->x) * t + a->x);
    result.y = (float)((b->y - a->y) * t + a->y);
    result.z = (float)((b->z - a->z) * t + a->z);

    Vector3 *output = (Vector3 *)newUserdata(state, 12);
    if (output) {
        output->x = result.x;
        output->y = result.y;
        output->z = result.z;
    }

    getField(state, -10000, vectorType);
    setMetatable(state, -2);
    return 1;
}
