// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(void *, void *a, int b)
{
    if (b != 4)
        return;

    *(int *)a = 0xC8C8F8;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
