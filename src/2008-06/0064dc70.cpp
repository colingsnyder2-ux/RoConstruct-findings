// from server: 30% by atomic.potato
struct Point
{
    int pad0[3];
    int *value;
    int pad1[6];
    int f();
};

extern "C" void __cdecl Call612fb0(int *, int *);

int Point::f()
{
    int *p = *(int **)((char *)value + 0x10);
    if (*(int **)((char *)p + 0x2c))
        Call612fb0((int *)((char *)this + 0x28),
                   (int *)((char *)this + 0x1c));
    return 0;
}
