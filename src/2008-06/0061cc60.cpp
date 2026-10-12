// from server: 81% by king_originala
struct Vector3
{
    float x, y, z;
    Vector3();
    Vector3(const Vector3&);
};

__forceinline Vector3::Vector3()
    : x(0.0f), y(0.0f), z(0.0f)
{
}

__forceinline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

extern void* vectorType;
extern bool __cdecl readVector(void*, int, Vector3*);
extern double __cdecl readNumber(void*, int);
extern const Vector3* __cdecl checkVector(void*, int, void*);
extern void __cdecl pushVector(void*, Vector3);

int __cdecl multiply(void* state)
{
    Vector3 a;

    if (readVector(state, 1, &a))
    {
        Vector3 b;
        if (readVector(state, 2, &b))
        {
            Vector3 result;
            result.x = b.x * a.x;
            result.y = b.y * a.y;
            result.z = b.z * a.z;
            pushVector(state, result);
        }
        else
        {
            double scale = readNumber(state, 2);
            Vector3 result;
            result.x = (float)(a.x * scale);
            result.y = (float)(a.y * scale);
            result.z = (float)(a.z * scale);
            pushVector(state, result);
        }
    }
    else
    {
        const Vector3* value = checkVector(state, 2, vectorType);
        a.x = value->x;
        a.y = value->y;
        a.z = value->z;

        double scale = readNumber(state, 1);
        Vector3 result;
        result.x = (float)(a.x * scale);
        result.y = (float)(a.y * scale);
        result.z = (float)(a.z * scale);
        pushVector(state, result);
    }

    return 1;
}
