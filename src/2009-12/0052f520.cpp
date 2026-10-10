// from server: 75% by atomic.potato
struct S
{
    int value;
};

S *f(S *p)
{
    S *q = *(S **)p;
    while (*((unsigned char *)q + 0x161) == 0)
        q = *(S **)q;
    return q;
}
