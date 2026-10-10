// from server: 66% by atomic.potato
struct EventDesc
{
    void f(void *, unsigned int, unsigned int);
};

void EventDesc::f(void *, unsigned int a0, unsigned int a1)
{
    if (a1 != 4)
    {
        *(unsigned int *)a1 = a1;
        return;
    }

    *(unsigned int *)a0 = 0x00b58de8;
    *((unsigned char *)a0 + 4) = 0;
    *((unsigned char *)a0 + 5) = 0;
}
