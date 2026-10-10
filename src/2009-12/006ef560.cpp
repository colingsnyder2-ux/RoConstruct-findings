// from server: 41% by atomic.potato
struct S
{
    float x;
    float y;
    float z;
};

void f(S* out, const S* value)
{
    out->x = value->x < 0.0f ? -value->x : value->x;
    out->y = value->y < 0.0f ? -value->y : value->y;
    out->z = value->z < 0.0f ? -value->z : value->z;
}
