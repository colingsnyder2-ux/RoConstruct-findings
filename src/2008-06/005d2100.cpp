// from server: 81% by atomic.potato
struct VSpawnLocationBoundPropGetSet
{
    int value8;
    int value12;
    unsigned char get(unsigned char *value);
};

unsigned char VSpawnLocationBoundPropGetSet::get(unsigned char *value)
{
    unsigned char *base;

    base = value ? value - 20 : 0;
    return *(unsigned char *)(((int *)((char *)base + 0x134))[value12] + value8 + (int)base + 0x134);
}
