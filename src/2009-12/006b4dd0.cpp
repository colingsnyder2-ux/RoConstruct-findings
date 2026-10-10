// from server: 51% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl sub_6b3c50();

void S::f()
{
    int value = *((int *)((char *)this + 12));

    if (value != 4)
    {
        *((int *)((char *)this + 12)) = value;
        sub_6b3c50();
        return;
    }

    int *p = *((int **)((char *)this + 8));
    *p = 0xB3AB50;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
