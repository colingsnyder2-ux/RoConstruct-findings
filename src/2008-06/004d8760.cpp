// from server: 46% by atomic.potato
extern bool func_0060a2f0();

struct S
{
    S(void *, void *);
};

S::S(void *a, void *b)
{
    if (!func_0060a2f0())
    {
        void *p = (char *)this + 8;
        if (p)
        {
            *(void **)p = a;
            *((void **)p + 1) = b;
        }
    }
}
