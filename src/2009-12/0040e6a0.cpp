// from server: 70% by atomic.potato
struct S
{
    char pad[0xc];
    int *begin;
    int *end;
    int f(int, int);
};

int S::f(int a, int b)
{
    if (b == 0)
        return 0x80070057;

    int count = (int)(((char *)end - (char *)begin) >> 3);
    int n = b;
    if (n > count)
        n = count;

    end = (int *)((char *)begin + n * 8);

    return (b != n) ? 1 : 0;
}
