// from server: 88% by king_originala
struct Result;
struct Vector3 {
    float x, y, z;
};

extern const float scale;
extern "C" void __cdecl buildResult(Result*, const Vector3*);

struct S {
    char pad[16];
    float size;
    Result* f(Result* result, float mass);
};

Result* S::f(Result* result, float mass)
{
    Vector3 diagonal;
    diagonal.z = diagonal.y = diagonal.x = size * size * mass * scale;
    buildResult(result, &diagonal);
    return result;
}
