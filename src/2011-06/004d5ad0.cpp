// from server: 84% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_004d3fa0(void *);

int S::f()
{
    void *p = (void *)sub_004d3fa0(this);
    if (p)
        return *(int *)((char *)p + 0x90);
    return 0;
}
