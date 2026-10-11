// from server: 70% by atomic.potato
struct S
{
    char pad[0xc];
    int *begin;
    int *end;
    int method(int, int);
};

int S::method(int a, int b)
{
    if (b == 0)
        return 0x80070057;

    int *p = this->end;
    int count = (int)(((char *)this->begin - (char *)p) >> 3);
    int n = b;
    if (n > count)
        n = count;
    this->end = (int *)((char *)p + n * 8);
    return (b != n) ? 1 : 0;
}
