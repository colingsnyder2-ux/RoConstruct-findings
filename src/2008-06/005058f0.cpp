// from server: 83% by king_originala
extern const float factor;
extern const double base;

struct S {
    char padding0[12];
    float value;
    char padding1[48];
    float x;
    float y;
    float z;
};

int __cdecl compare(const S* a, const S* b)
{
    return (a->z + a->y + a->x) * factor * (base - a->value)
         > (b->z + b->y + b->x) * factor * (base - b->value);
}
