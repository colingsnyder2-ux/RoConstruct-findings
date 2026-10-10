// from server: 55% by atomic.potato
struct ViewUpdateJob
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        *(int*)b = 0xC15170;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
    }
    else
    {
        f(a, b, c);
    }
}
