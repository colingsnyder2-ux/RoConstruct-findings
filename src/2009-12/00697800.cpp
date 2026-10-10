// from server: 82% by atomic.potato
extern "C" void f_696400(int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        f_696400(c);
        return;
    }

    int *p = (int *)b;
    *p = 0xb38ac8;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
