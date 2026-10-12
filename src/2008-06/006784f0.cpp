// from server: 93% by king_originala
struct S {
    float x, y, z, w;
};

S* __cdecl copy(S* destination, const S* source)
{
    destination->x = source->x;
    destination->y = source->y;
    destination->z = source->z;
    destination->w = source->w;
    return destination;
}
