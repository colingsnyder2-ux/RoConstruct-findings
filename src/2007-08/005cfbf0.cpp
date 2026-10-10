// from server: 84% by colin
struct Vector2 {
    float x;
    float y;
};

struct S_func_005cfbf0 {
    void f(Vector2* out);
};

extern float G_func_00796468;
extern "C" Vector2* __cdecl func_00555990(Vector2* a, Vector2* b);

void S_func_005cfbf0::f(Vector2* out)
{
    Vector2 a;
    Vector2 b;
    a.x = G_func_00796468;
    a.y = G_func_00796468;
    Vector2* r = func_00555990(&b, &a);
    out->x = r->x;
    out->y = r->y;
}
