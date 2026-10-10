// from server: 97% by atomic.potato
struct S {
    int f(float *p);
};

int S::f(float *p)
{
    p[0] = *(float *)((char *)this + 0x194);
    p[1] = *(float *)((char *)this + 0x198);
    p[2] = *(float *)((char *)this + 0x19c);
    return 0;
}
