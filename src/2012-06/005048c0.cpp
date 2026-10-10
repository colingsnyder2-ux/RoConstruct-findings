// from server: 21% by atomic.potato
struct S
{
    char* begin;
    char* end;

    void f();
};

void S::f()
{
    char* dst = begin;
    char* src = end;

    if (dst != src)
    {
        while (src != src)
        {
            *(int*)dst = *(int*)src;
            *(int*)(dst + 4) = *(int*)(src + 4);
            src += 8;
            dst += 8;
        }
        end = dst;
    }
}
