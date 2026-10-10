// from server: 65% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

extern "C" void __cdecl sub_4fc460(int, int, int);

int S::f(int a, int b)
{
    if (b != 4)
    {
        sub_4fc460(a, b, b);
        return 0;
    }

    *(int *)a = 0xb13560;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
    return 0;
}
