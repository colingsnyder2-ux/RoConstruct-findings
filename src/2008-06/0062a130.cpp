// from server: 87% by atomic.potato
struct BoundPropGetSet
{
    int unused;
    int value;
    int offset;

    float get(float* base);
};

float BoundPropGetSet::get(float* base)
{
    if (base)
        return *(float*)((char*)base + offset - 20);
    return *(float*)((char*)0 + offset);
}
