// from server: 79% by king_originala
extern unsigned char flag;

void f()
{
    if (flag)
    {
        __try
        {
            for (;;)
            {
            }
        }
        __except (-1)
        {
            __assume(0);
        }
    }
}
