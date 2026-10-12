// from server: 72% by king_originala
struct Vector3 {
    float x, y, z;
};

extern void* vectorType;
extern Vector3* __cdecl getVector(void* state, int index, void* type);
extern void __cdecl pushVector(void* state, float x, float y, float z);

int __cdecl negateVector(void* state)
{
    const Vector3* value = getVector(state, 1, vectorType);
    pushVector(state, -value->x, -value->y, -value->z);
    return 1;
}
