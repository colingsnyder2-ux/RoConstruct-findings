// from server: 62% by atomic.potato
struct S
{
    void *Get(void *);
};

void *S::Get(void *p)
{
    void **q = *(void ***)((char *)p + 0x28);
    return (void *)((char *)q + 0x0c);
}
