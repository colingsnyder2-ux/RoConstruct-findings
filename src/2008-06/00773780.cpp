// from server: 32% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int __stdcall sub_00802FE0(void *);

int S::f(int value)
{
    if (value < 0)
        return 0;
    if (value >= sub_00802FE0((char *)this + 0x84))
        return 0;
    return 1;
}
