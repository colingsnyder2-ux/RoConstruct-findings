// from server: 75% by atomic.potato
extern unsigned long G;

void func_0067c9e0(void* a, void* b, int c)
{
    if (c != 4)
        *(unsigned long*)b = c;
    else
    {
        *(unsigned long*)b = G;
        ((char*)b)[4] = 0;
        ((char*)b)[5] = 0;
    }
}
