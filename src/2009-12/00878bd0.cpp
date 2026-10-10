// from server: 69% by atomic.potato
struct S;

extern "C" int sub_8781e0(S *);

struct S
{
    int f(void *);
};

int S::f(void *p)
{
    if (!p)
        return 0x80070057;
    *(int *)p = sub_8781e0((S *)((char *)this - 0x20));
    return 0;
}
