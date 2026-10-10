// from server: 80% by atomic.potato
struct S
{
    void Get(int *);
};

void S::Get(int *p)
{
    *p = *(int *)((char *)this + 0xa8);
}
