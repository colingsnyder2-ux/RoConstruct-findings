// from server: 80% by colin
// roc 2008-06 00595a80  size: 56 bytes

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
        __except (0)
        {
            __assume(0);
        }
    }
}
