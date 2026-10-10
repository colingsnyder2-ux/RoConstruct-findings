// from server: 66% by atomic.potato
struct S
{
    int f(unsigned char value);
};

int S::f(unsigned char value)
{
    int mask = -(int)value;
    int flags = *(int*)((char*)this + 0x54);
    mask = (mask & 4) | (flags & ~4);
    *(int*)((char*)this + 0x54) = mask;
    return mask;
}
