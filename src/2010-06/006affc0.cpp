// from server: 73% by atomic.potato
struct S
{
    void f(void *, int, int);
};

void S::f(void *a, int b, int value)
{
    if (value != 4)
    {
        *(int *)a = value;
        return;
    }

    *(int *)a = 0x00bcb640;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
