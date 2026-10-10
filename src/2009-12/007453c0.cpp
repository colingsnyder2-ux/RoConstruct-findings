// from server: 53% by atomic.potato
struct S
{
};

int __cdecl f(int a, int b, int c)
{
    if (c != 4)
        return f(a, b, c);
    *(int*)b = 0xb55f30;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
    return 0;
}
