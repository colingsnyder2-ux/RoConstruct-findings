// from server: 91% by atomic.potato
extern "C" void __cdecl Function5118B0(void *, int);

struct UHistory
{
};

void __cdecl f(void *a, int value)
{
    if (value != 4)
    {
        Function5118B0(a, value);
        return;
    }

    *(int *)a = 0xB954A8;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
