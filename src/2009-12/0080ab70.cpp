// from server: 38% by atomic.potato
struct S
{
    int f();
};

extern "C" int sub_80a8a0(void *);
extern "C" int sub_80ab50(void *);

int S::f()
{
    S *p = this;
    char *q = (char *)p + 0xc0;

    if (!sub_80a8a0(q))
        return (int)q;

    return sub_80ab50(p);
}
