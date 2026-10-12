// from server: 58% by king_originala
struct Vector3
{
    float x, y, z;
};

struct State;

extern void* vectorType;
extern const Vector3* __cdecl getVector(State*, int, void*);
extern void __cdecl pushVector(State*, Vector3);

int __cdecl addVectors(State* state)
{
    const Vector3* a = getVector(state, 1, vectorType);
    const Vector3* b = getVector(state, 2, vectorType);
    Vector3 result = { b->x + a->x, b->y + a->y, b->z + a->z };
    pushVector(state, result);
    return 1;
}
