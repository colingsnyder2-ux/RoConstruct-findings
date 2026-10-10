// from server: 87% by atomic.potato
struct S
{
    int value;
    double get(void *p);
};

double S::get(void *p)
{
    int offset;
    if (p)
    {
        offset = ((int *)this)[2];
        return *(double *)((char *)p + offset - 20);
    }
    offset = ((int *)this)[2];
    return *(double *)((char *)0 + offset);
}
