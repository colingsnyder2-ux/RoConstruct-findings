// from server: 97% by atomic.potato
struct S
{
    int get(float *p);
};

int S::get(float *p)
{
    p[0] = *(float *)((char *)this + 0x1bc);
    p[1] = *(float *)((char *)this + 0x1c0);
    p[2] = *(float *)((char *)this + 0x1c4);
    return 0;
}
