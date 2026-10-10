// from server: 68% by atomic.potato
extern "C" int type_info_equal(void *, void *);

struct S
{
    int f();
};

int S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return type_info_equal(q, (void *)0x00c1b01c);
}
