// from server: 52% by atomic.potato
struct S
{
    void f();
    char pad[12];
    struct T
    {
        char pad2[648];
    } *p;
};

extern void sub_5cc040(void *, int);

void S::f()
{
    T *q = p;
    void (*fn)(T *) =
        *(void (**)(T *))((char *)q + 648 + 4);
    fn((T *)((char *)q + 648));
    sub_5cc040(0, 1);
}
