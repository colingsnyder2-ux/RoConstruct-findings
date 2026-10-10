// from server: 58% by atomic.potato
struct S {
    float x;
    float y;
    float z;
    float w;
};

void Copy(S* dst, S* src);

void Copy(S* dst, S* src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
    dst->w = src->w;
}
